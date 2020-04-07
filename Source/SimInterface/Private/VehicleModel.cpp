// Fill out your copyright notice in the Description page of Project Settings.


#include "VehicleModel.h"

// Sets default values for this component's properties
UVehicleModel::UVehicleModel()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
    this->m_IOBlocks = this->m_Vehicle.Blocks();
}


// Called when the game starts
void UVehicleModel::BeginPlay()
{
	Super::BeginPlay();

	// ...
}


// Called every frame
void UVehicleModel::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}


void UVehicleModel::ConstructVehicle(FVehicleParameters vehicleParameters)
{
    Models::VehicleParameters params;
    params.EngineJSON =  TCHAR_TO_UTF8(*vehicleParameters.EngineJSON);
    params.RoadJSON = TCHAR_TO_UTF8(*vehicleParameters.RoadJSON);

    // Gear ratios
    std::vector<float> ratios;
    for (auto ratio : vehicleParameters.GearRatios) {
        ratios.push_back(ratio);
    };
    params.GearRatios = ratios;

    params.Mass = vehicleParameters.Mass;
    params.Cd = vehicleParameters.Cd;
    params.A = vehicleParameters.FrontalArea;
    params.EngineViscousConstant = vehicleParameters.EngineViscousFriction;

    params.EngineInertia = vehicleParameters.EngineInertia;
    params.PeakBrakeForce = vehicleParameters.PeakBrakeForce;

    params.LogFrequency = vehicleParameters.LogFrequency;
    params.GearshiftLag = vehicleParameters.GearShiftLag;
    params.ClutchStiffness = vehicleParameters.ClutchStiffness;

    params.LogOutputFile = "VehicleSimOut.csv";

    this->m_Vehicle.SetParameters(params);
};

void UVehicleModel::Initialise()
{
    this->GearState = EVehicleGearState::Engaged;
    this->m_Vehicle.Initialise(0.f);
    this->t_n = 0.f;

};


FVehicleOutput UVehicleModel::Update(float dt, FVehicleInput input)
{
    // Shift Gear
    switch (this->GearState)
    {
        case EVehicleGearState::Engaged:
            break;

        case EVehicleGearState::ShiftUp:
            this->m_Vehicle.ShiftUp();
            this->GearState = EVehicleGearState::Engaged;
            break;

        case EVehicleGearState::ShiftDown:
            this->m_Vehicle.ShiftDown();
            this->GearState = EVehicleGearState::Engaged;
            break;
    }

    // Update time
    this->t_n += dt;

    // Write input
    this->m_IOBlocks.InThrottle->WriteValue(input.Throttle);
    this->m_IOBlocks.InBrakePressure->WriteValue(input.Brake);

    // Update
    this->m_Vehicle.Update(this->t_n);

    // Return output
    auto outCoordinates = this->m_IOBlocks.OutCoordinates->ReadValue();
    return {FMath::RadiansToDegrees(this->m_IOBlocks.OutGradient->ReadValue()),
            this->m_IOBlocks.OutVelocity->ReadValue(),
            this->m_IOBlocks.OutEngineSpeed->ReadValue(),
            this->m_IOBlocks.OutCurrentGear->ReadValue(),
            {outCoordinates[0], outCoordinates[1]}};
};




void UVehicleModel::ShiftUp()
{
    this->GearState = EVehicleGearState::ShiftUp;
};

void UVehicleModel::ShiftDown()
{
    this->GearState = EVehicleGearState::ShiftDown;
};

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

    params.Mass = 1500.f;
    params.GearshiftLag = vehicleParameters.GearshiftLag;
    params.A = 2.5;
    params.ClutchStiffness = 100.f;
    params.EngineViscousConstant = 0.05;
    params.EngineInertia = 0.2f;

    params.LogOutputFile = "C:/Users/Tom/Desktop/EcoAcademy/SimFramework/Sandbox/Data/UE4Out.csv";
    params.LogFrequency = 25;

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
    return {this->m_IOBlocks.OutPosition->ReadValue(),
            this->m_IOBlocks.OutVelocity->ReadValue(),
            this->m_IOBlocks.OutEngineSpeed->ReadValue(),
            this->m_Vehicle.CurrentGear(),
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

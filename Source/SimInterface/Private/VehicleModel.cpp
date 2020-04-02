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
    this->m_Vehicle.Initialise(0.f);
};


FVehicleOutput UVehicleModel::NewUpdate(float t_np1, FVehicleInput input)
{
    // Write input
    this->m_IOBlocks.InThrottle->WriteValue(input.Throttle);
    this->m_IOBlocks.InBrakePressure->WriteValue(input.Brake);

    // Update
    this->m_Vehicle.Update(t_np1);

    // Return output
    return {this->m_IOBlocks.OutPosition->ReadValue(),
            this->m_IOBlocks.OutVelocity->ReadValue(),
            this->m_IOBlocks.OutEngineSpeed->ReadValue(),
            this->m_Vehicle.CurrentGear()};
};



void UVehicleModel::WriteInput(float throttle, float brakePressure)
{
    this->m_IOBlocks.InThrottle->WriteValue(throttle);
    this->m_IOBlocks.InBrakePressure->WriteValue(brakePressure);
};

void UVehicleModel::ShiftUp()
{
    this->m_Vehicle.ShiftUp();
};

void UVehicleModel::ShiftDown()
{
    this->m_Vehicle.ShiftDown();
}

float UVehicleModel::Position()
{
    return this->m_IOBlocks.OutPosition->ReadValue();
};

float UVehicleModel::Velocity()
{
    return this->m_IOBlocks.OutVelocity->ReadValue();
};

float UVehicleModel::EngineSpeed()
{
    return this->m_IOBlocks.OutEngineSpeed->ReadValue();
};

int UVehicleModel::Gear()
{
    return this->m_Vehicle.CurrentGear();
};

void UVehicleModel::Update(float t_np1)
{
    this->m_Vehicle.Update(t_np1);
};
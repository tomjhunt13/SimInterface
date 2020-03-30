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
    Models::VehicleParameters params;
    params.EngineJSON = "/Users/tom/Documents/University/Y4_S2/Data/Engine/2L_Turbo_Gasoline.json";

    params.Mass = 1500.f;
    params.GearshiftLag = 0.75;
    params.A = 2.5;
    params.ClutchStiffness = 100.f;
    params.EngineViscousConstant = 0.05;
    params.EngineInertia = 0.2f;
    this->m_Vehicle.SetParameters(params);
    this->m_Vehicle.SetLogOutputFile("/Users/tom/Documents/University/Y4_S2/Data/UE4Out.csv");
}


// Called when the game starts
void UVehicleModel::BeginPlay()
{
	Super::BeginPlay();

	// ...
    this->m_Vehicle.Initialise(0.f);
}


// Called every frame
void UVehicleModel::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}



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
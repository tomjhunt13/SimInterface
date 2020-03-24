// Fill out your copyright notice in the Description page of Project Settings.


#include "Vehicle.h"

// Sets default values for this component's properties
UVehicle::UVehicle()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
//    this->m_IOBlocks = this->m_Vehicle.Blocks();
//    Models::VehicleParameters params;
//    this->m_Vehicle.SetParameters(params);


}


// Called when the game starts
void UVehicle::BeginPlay()
{
	Super::BeginPlay();

	// ...
//	this->m_Vehicle.Initialise(0.f);


}


// Called every frame
void UVehicle::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

//
//void UVehicle::WriteInput(float throttle, float brakePressure)
//{
//    this->m_IOBlocks.InThrottle->WriteValue(throttle);
//    this->m_IOBlocks.InBrakePressure->WriteValue(brakePressure);
//};
//
//void UVehicle::ShiftUp()
//{
//    this->m_Vehicle.ShiftUp();
//};
//
//void UVehicle::ShiftDown()
//{
//    this->m_Vehicle.ShiftDown();
//}
//
//float UVehicle::Position()
//{
//    return this->m_IOBlocks.OutPosition->ReadValue();
//};
//
//float UVehicle::Velocity()
//{
//    return this->m_IOBlocks.OutVelocity->ReadValue();
//};
//
//float UVehicle::EngineSpeed()
//{
//    return this->m_IOBlocks.OutEngineSpeed->ReadValue();
//};
//
//int UVehicle::Gear()
//{
//    return this->m_Vehicle.CurrentGear();
//};
//
//void UVehicle::Update(float t_np1)
//{
//    this->m_Vehicle.Update(t_np1);
//};

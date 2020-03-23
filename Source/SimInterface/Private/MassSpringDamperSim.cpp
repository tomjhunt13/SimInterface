// Fill out your copyright notice in the Description page of Project Settings.


#include "MassSpringDamperSim.h"

// Sets default values for this component's properties
UMassSpringDamperSim::UMassSpringDamperSim() : m_MSD(1, 4, 0.2)
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UMassSpringDamperSim::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UMassSpringDamperSim::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}


void UMassSpringDamperSim::WriteInput(float inputValue)
{
    this->m_MSD.InputForceBlock()->WriteValue(inputValue);
};

float UMassSpringDamperSim::ReadOutput()
{
    return this->m_MSD.MassPositionBlock()->ReadValue();
};

void UMassSpringDamperSim::Update(float t_np1)
{
    this->m_MSD.Update(t_np1);
};


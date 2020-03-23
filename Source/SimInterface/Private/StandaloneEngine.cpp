// Fill out your copyright notice in the Description page of Project Settings.


#include "StandaloneEngine.h"

// Sets default values for this component's properties
UStandaloneEngine::UStandaloneEngine() : m_Engine("/Users/tom/Documents/University/Y4_S2/Data/Engine/2L_Turbo_Gasoline.json", 200.f)
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// Initialise engine
    this->m_Blocks = this->m_Engine.Blocks();
    this->m_Engine.Initialise(0.f);
};


// Called when the game starts
void UStandaloneEngine::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UStandaloneEngine::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}


void UStandaloneEngine::WriteInput(float inThrottle, float inLoad)
{
    this->m_Blocks.InputThrottleBlock->WriteValue(inThrottle);
    this->m_Blocks.InputLoadBlock->WriteValue(inLoad);
};

float UStandaloneEngine::ReadOutput()
{
    return this->m_Blocks.OutputSpeedBlock->ReadValue();
};

void UStandaloneEngine::Update(float t_np1)
{
    this->m_Engine.Update(t_np1);
};


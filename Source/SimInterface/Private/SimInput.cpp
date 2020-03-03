// Fill out your copyright notice in the Description page of Project Settings.


#include "SimInput.h"

// Sets default values for this component's properties
USimInput::USimInput()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
}

void USimInput::BeginDestroy()
{
    // Delete signals
//    delete this->m_InputForce;
//    delete this->m_SpringForce;
//    delete this->m_DamperForce;
//    delete this->m_SummedForce;
//
//    // Delete blocks
//    delete this->m_InputBlock;
//    delete this->m_ConstSpring;
//    delete this->m_ConstDamper;
//    delete this->m_SumForces;
//    delete this->m_OutputBlock;
}

// Called when the game starts
void USimInput::BeginPlay()
{
	Super::BeginPlay();

	// ...
    // Create all signals
//    this->m_InputForce = new SimFramework::Signal<float>;
//    this->m_SpringForce = new SimFramework::Signal<float>;
//    this->m_DamperForce = new SimFramework::Signal<float>;
//    this->m_SummedForce = new SimFramework::Signal<float>;
//
//    // Create all blocks
//    this->m_InputBlock = new SimFramework::Input<float>(this->m_InputForce, 0.f);
//    this->m_ConstSpring = new SimFramework::ConstantBlock<float>(this->m_SpringForce, 1.5);
//    this->m_ConstDamper = new SimFramework::ConstantBlock<float>(this->m_SpringForce, 2.5);
//    this->m_SumForces = new SimFramework::SummingJunction<float>({this->m_InputForce, this->m_SpringForce, this->m_DamperForce}, this->m_SummedForce, {1.f, 1.f, 1.f});
//    this->m_OutputBlock = new SimFramework::Output<float>(this->m_SummedForce, 0.f);
	
}


// Called every frame
void USimInput::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void USimInput::WriteInput(float inputValue)
{
//    this->m_InputBlock->WriteValue(inputValue);
}

void USimInput::Update()
{
//    SimFramework::SystemManager& systemManager = SimFramework::SystemManager::Get();
//    systemManager.RegisterBlocks({this->m_InputBlock, this->m_ConstSpring, this->m_ConstDamper}, {}, {this->m_SumForces}, {this->m_OutputBlock});
//    systemManager.Initialise(0.f);
}

float USimInput::ReadOutput()
{
//    return this->m_OutputBlock->ReadValue();
return 1.f;
}
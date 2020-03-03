// Fill out your copyright notice in the Description page of Project Settings.


#include "DemoComponent.h"

DemoModel::DemoModel()
{
    // Configure blocks
    this->m_Input.Configure(&(this->m_InputForce), 0.1);
    this->m_ConstSpring.Configure(&(this->m_SpringForce), 1.5);
    this->m_ConstDamper.Configure(&(this->m_DamperForce), 2.5);
    this->m_SumForces.Configure({&(this->m_InputForce), &(this->m_SpringForce), &(this->m_DamperForce)}, &(this->m_SummedForce), {1.f, 1.f, 1.f});
    this->m_OutputBlock.Configure(&m_SummedForce, 0.f);

    // Construct system
    this->RegisterBlocks(
            {&(this->m_Input), &(this->m_ConstSpring), &(this->m_ConstDamper)},
            {},
            {&(this->m_SumForces)},
            {&(this->m_OutputBlock)});
}


SimFramework::Input<float>& DemoModel::InputBlock()
{
    return this->m_Input;
};

SimFramework::Output<float>& DemoModel::OutputBlock()
{
    return this->m_OutputBlock;
};

// Sets default values for this component's properties
UDemoComponent::UDemoComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UDemoComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UDemoComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UDemoComponent::WriteInput(float inputValue)
{
    this->m_Model.InputBlock().WriteValue(inputValue);

}

void UDemoComponent::Update(float t_np1)
{
    this->m_Model.Update(t_np1);

}

float UDemoComponent::ReadOutput()
{
    return this->m_Model.OutputBlock().ReadValue();
}
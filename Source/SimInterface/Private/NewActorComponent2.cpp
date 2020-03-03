// Fill out your copyright notice in the Description page of Project Settings.


#include "NewActorComponent2.h"

// Sets default values for this component's properties
UNewActorComponent2::UNewActorComponent2()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
	this->m_Input.Configure(&(this->m_InputForce), 0.1);
	this->m_ConstSpring.Configure(&(this->m_SpringForce), 1.5);
	this->m_ConstDamper.Configure(&(this->m_DamperForce), 2.5);
	this->m_SumForces.Configure({&(this->m_InputForce), &(this->m_SpringForce), &(this->m_DamperForce)}, &(this->m_SummedForce), {1.f, 1.f, 1.f});
	this->m_OutputBlock.Configure(&m_SummedForce, 0.f);

    // Create all blocks
//    SimFramework::Input<float> InputBlock (&InputForce, 0.f);
//    SimFramework::ConstantBlock<float> ConstSpring (&(this->m_SpringForce), 1.5);
//    SimFramework::ConstantBlock<float> ConstDamper (&(this->m_DamperForce), 2.5);
//    SimFramework::SummingJunction<float> SumForces ({&(this->m_InputForce), &(this->m_SpringForce), &(this->m_DamperForce)}, &(this->m_SummedForce), {1.f, 1.f, 1.f});
//    SimFramework::Output<float> OutputBlock (&m_SummedForce, 0.f);



    // Update system
    SimFramework::SystemManager& systemManager = SimFramework::SystemManager::Get();
    systemManager.RegisterBlocks({&(this->m_Input), &(this->m_ConstSpring), &(this->m_ConstDamper)}, {}, {&(this->m_SumForces)}, {&(this->m_OutputBlock)});
    systemManager.Initialise(0.f);

}


// Called when the game starts
void UNewActorComponent2::BeginPlay()
{
	Super::BeginPlay();

	// ...
//	SimFramework::Signal<float> testSig;
//	this->m_Sig.Write(2.f);
	
}


// Called every frame
void UNewActorComponent2::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}


float UNewActorComponent2::ReadOutput()
{
    return this->m_OutputBlock.ReadValue();
};

void UNewActorComponent2::WriteInput(float input)
{
    this->m_Input.WriteValue(input);
};

float UNewActorComponent2::Update(float t_np1)
{
    // Create all signals
//    SimFramework::Signal<float> InputForce;
//    SimFramework::Signal<float> SpringForce;
//    SimFramework::Signal<float> DamperForce;
//    SimFramework::Signal<float> SummedForce;

    // Create all blocks
//    SimFramework::Input<float> InputBlock (&InputForce, 0.f);
//    SimFramework::ConstantBlock<float> ConstSpring (&(this->m_SpringForce), 1.5);
//    SimFramework::ConstantBlock<float> ConstDamper (&(this->m_DamperForce), 2.5);
//    SimFramework::SummingJunction<float> SumForces ({&(this->m_InputForce), &(this->m_SpringForce), &(this->m_DamperForce)}, &(this->m_SummedForce), {1.f, 1.f, 1.f});
//    SimFramework::Output<float> OutputBlock (&m_SummedForce, 0.f);

    // Update system
    SimFramework::SystemManager& systemManager = SimFramework::SystemManager::Get();
//    systemManager.RegisterBlocks({&ConstSpring, &ConstDamper}, {}, {&SumForces}, {&OutputBlock});
//    systemManager.Initialise(0.f);
    systemManager.UpdateSystem(1.f);


    return this->m_SummedForce.Read();
};

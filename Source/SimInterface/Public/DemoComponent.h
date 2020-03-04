// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"

#include <vector>
#include "Eigen/Dense"
#include "SimFramework/Framework.h"
#include "SimFramework/Components.h"

#include "DemoComponent.generated.h"


class DemoModel : public SimFramework::Model
{

public:
    DemoModel();


    SimFramework::Input<float>& InputBlock();
    SimFramework::Output<float>& OutputBlock();


private:

// Signals
    SimFramework::Signal<float> m_InputForce;
    SimFramework::Signal<float> m_SpringForce;
    SimFramework::Signal<float> m_DamperForce;
    SimFramework::Signal<float> m_SummedForce;

    SimFramework::Input<float> m_Input;
    SimFramework::ConstantBlock<float> m_ConstSpring;
    SimFramework::ConstantBlock<float> m_ConstDamper;
    SimFramework::SummingJunction<float> m_SumForces;
    SimFramework::Output<float> m_OutputBlock;

};

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class SIMINTERFACE_API UDemoComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UDemoComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

    UFUNCTION(BlueprintCallable, Category="SimInterface")
    void WriteInput(float inputValue);

    UFUNCTION(BlueprintCallable, Category="SimInterface")
    float ReadOutput();

    UFUNCTION(BlueprintCallable, Category="SimInterface")
    void Update(float t_np1);

    UFUNCTION(BlueprintCallable, Category="SimInterface")
    void Blah2(){};

private:
    DemoModel m_Model;
};

// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"

#include "SimModels/MassSpringDamper1D.h"
#include "SimModels/Vehicle.h"

#include "MassSpringDamperSim.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class SIMINTERFACE_API UMassSpringDamperSim : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UMassSpringDamperSim();

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


private:

    Models::MassSpringDamper1D m_MSD;
		
};

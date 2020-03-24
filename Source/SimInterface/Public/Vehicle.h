// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"

//#include "SimModels/Vehicle.h"

#include "Vehicle.generated.h"



UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class SIMINTERFACE_API UVehicle : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UVehicle();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

//    UFUNCTION(BlueprintCallable, Category="Vehicle")
//    void SetParameters(Models::VehicleParameters parameters);

//	UFUNCTION(BlueprintCallable, Category="Vehicle")
//    void WriteInput(float throttle, float brakePressure);
//
//    UFUNCTION(BlueprintCallable, Category="Vehicle")
//    void ShiftUp();
//
//    UFUNCTION(BlueprintCallable, Category="Vehicle")
//    void ShiftDown();
//
//    UFUNCTION(BlueprintCallable, Category="Vehicle")
//    float Position();
//
//    UFUNCTION(BlueprintCallable, Category="Vehicle")
//    float Velocity();
//
//    UFUNCTION(BlueprintCallable, Category="Vehicle")
//    float EngineSpeed();
//
//    UFUNCTION(BlueprintCallable, Category="Vehicle")
//    int Gear();
//
//    UFUNCTION(BlueprintCallable, Category="Vehicle")
//    void Update(float t_np1);

//private:
//
//	Models::Vehicle m_Vehicle;
//	Models::VehicleBlocks m_IOBlocks;
};

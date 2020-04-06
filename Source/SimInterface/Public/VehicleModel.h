// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Math/UnrealMathUtility.h"

#include "SimModels/Vehicle.h"

#include "VehicleModel.generated.h"

enum class EVehicleGearState
{
    Engaged,
    ShiftUp,
    ShiftDown
};


USTRUCT(BlueprintType)
struct FVehicleInput
{
    GENERATED_USTRUCT_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float Throttle = 0.f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float Brake = 0.f;
};

USTRUCT(BlueprintType)
struct FVehicleOutput
{
    GENERATED_USTRUCT_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float Gradient = 0.f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float Velocity = 0.f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float EngineSpeed = 0.f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int Gear = 1;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FVector2D Coordinates = {0.f, 0.f};
};


USTRUCT(BlueprintType)
struct FVehicleParameters
{
    GENERATED_USTRUCT_BODY()

    // External Data
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FString EngineJSON;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FString RoadJSON;

    // Vehicle Parameters
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<float> GearRatios = {0.07, 0.14, 0.23, 0.32, 0.41, 0.5};

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float Mass = 1500;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float Cd = 0.3;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float FrontalArea = 2.5;

    // Simulation Specific Parameters
    UPROPERTY(EditAnywhere, BlueprintReadWrite, AdvancedDisplay)
    int LogFrequency = 20;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, AdvancedDisplay)
    float GearShiftLag = 1.f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, AdvancedDisplay)
    float ClutchStiffness = 100;
};


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class SIMINTERFACE_API UVehicleModel : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UVehicleModel();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:

    UFUNCTION(BlueprintCallable, Category="Vehicle")
    void ConstructVehicle(FVehicleParameters vehicleParameters);

    UFUNCTION(BlueprintCallable, Category="Vehicle")
    void Initialise();

    UFUNCTION(BlueprintCallable, Category="Vehicle")
    FVehicleOutput Update(float dt, FVehicleInput input);

    UFUNCTION(BlueprintCallable, Category="Vehicle")
    void ShiftUp();

    UFUNCTION(BlueprintCallable, Category="Vehicle")
    void ShiftDown();


	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;



private:

    EVehicleGearState GearState;
    float t_n;

	Models::Vehicle m_Vehicle;
	Models::VehicleBlocks m_IOBlocks;
		
};

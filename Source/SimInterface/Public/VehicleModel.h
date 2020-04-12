// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Math/UnrealMathUtility.h"
#include "Misc/Paths.h"

#include "Engine/World.h"
#include "Kismet/KismetSystemLibrary.h"

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

    // Engine properties
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float EngineSpeed = 0.f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float FuelFlowRate = 0.f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float CumulativeFuelUsage = 0.f;

    // Transmission
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int Gear = 1;

    // Vehicle
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float Displacement = 0.f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float Velocity = 0.f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FVector2D Coordinates = {0.f, 0.f};

    // Road
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float Gradient = 0.f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int ClutchEngagementState = 0;


};

USTRUCT(BlueprintType)
struct FVehicleParameters
{
    GENERATED_USTRUCT_BODY()

    // External Data
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FString EngineJSON = "Plugins/SimInterface/Content/Data/2L_Turbo_Gasoline.json";

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FString RoadJSON = "Plugins/SimInterface/Content/Data/road1.json";

    // Vehicle Parameters
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<float> GearRatios = {11.f, 7.3, 5.5, 3.8, 2.5, 2.f};

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float Mass = 1500;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float RollingResistance = 0.015;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float Cd = 0.3;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float FrontalArea = 2.5;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float EngineViscousFriction = 0.4;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float EngineInertia = 0.1;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float PeakBrakeForce = 400.f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float TyreForceScale = 1.f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float WheelRadius = 0.2;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float TransmissionInertia = 2.f;

    // Clutch
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float ClutchMaxNormalForce = 500.f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float ClutchTorqueCapacity = 1.f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float PullawayClutchMinValue = 0.2;

    // Simulation Specific Parameters
    UPROPERTY(EditAnywhere, BlueprintReadWrite, AdvancedDisplay)
    int LogFrequency = 20;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, AdvancedDisplay)
    float GearShiftLag = 1.f;
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

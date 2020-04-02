// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"

#include "SimModels/Vehicle.h"
//#include "SimModels/VehicleComponents.h"

#include "VehicleModel.generated.h"


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
    float Position = 0.f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float Velocity = 0.f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float EngineSpeed = 0.f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int Gear = 1;
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

    // Transmisison
    UPROPERTY(EditAnywhere, BlueprintReadWrite, AdvancedDisplay)
    float GearshiftLag = 0.75;


    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float TestFloat;
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

    // Property
    UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(ExposeOnSpawn="true"))
    FVehicleParameters TempVehicleParameters;

    UFUNCTION(BlueprintCallable, Category="Vehicle")
    void ConstructVehicle(FVehicleParameters vehicleParameters);

    UFUNCTION(BlueprintCallable, Category="Vehicle")
    void Initialise();

    UFUNCTION(BlueprintCallable, Category="Vehicle")
    FVehicleOutput NewUpdate(float t_np1, FVehicleInput input);


	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION(BlueprintCallable, Category="Vehicle")
    void WriteInput(float throttle, float brakePressure);

    UFUNCTION(BlueprintCallable, Category="Vehicle")
    void ShiftUp();

    UFUNCTION(BlueprintCallable, Category="Vehicle")
    void ShiftDown();

    UFUNCTION(BlueprintCallable, Category="Vehicle")
    float Position();

    UFUNCTION(BlueprintCallable, Category="Vehicle")
    float Velocity();

    UFUNCTION(BlueprintCallable, Category="Vehicle")
    float EngineSpeed();

    UFUNCTION(BlueprintCallable, Category="Vehicle")
    int Gear();

    UFUNCTION(BlueprintCallable, Category="Vehicle")
    void Update(float t_np1);

private:

	Models::Vehicle m_Vehicle;
	Models::VehicleBlocks m_IOBlocks;
		
};

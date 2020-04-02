// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"

//#include "SimFramework/Components.h"
//#include "SimModels/EngineStandalone.h"

#include "StandaloneEngine.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class SIMINTERFACE_API UStandaloneEngine : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UStandaloneEngine();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

    UFUNCTION(BlueprintCallable, Category="SimInterface")
    void WriteInput(float inThrottle, float inLoad);

    UFUNCTION(BlueprintCallable, Category="SimInterface")
    float ReadOutput();

    UFUNCTION(BlueprintCallable, Category="SimInterface")
    void Update(float t_np1);

//private:
//    Models::EngineStandalone m_Engine;
//    Models::EngineBlocks m_Blocks;
		
};

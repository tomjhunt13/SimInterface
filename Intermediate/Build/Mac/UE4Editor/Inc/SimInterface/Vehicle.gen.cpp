// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimInterface/Public/Vehicle.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVehicle() {}
// Cross Module References
	SIMINTERFACE_API UClass* Z_Construct_UClass_UVehicle_NoRegister();
	SIMINTERFACE_API UClass* Z_Construct_UClass_UVehicle();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_SimInterface();
	SIMINTERFACE_API UFunction* Z_Construct_UFunction_UVehicle_EngineSpeed();
	SIMINTERFACE_API UFunction* Z_Construct_UFunction_UVehicle_Gear();
	SIMINTERFACE_API UFunction* Z_Construct_UFunction_UVehicle_Position();
	SIMINTERFACE_API UFunction* Z_Construct_UFunction_UVehicle_ShiftDown();
	SIMINTERFACE_API UFunction* Z_Construct_UFunction_UVehicle_ShiftUp();
	SIMINTERFACE_API UFunction* Z_Construct_UFunction_UVehicle_Update();
	SIMINTERFACE_API UFunction* Z_Construct_UFunction_UVehicle_Velocity();
	SIMINTERFACE_API UFunction* Z_Construct_UFunction_UVehicle_WriteInput();
// End Cross Module References
	void UVehicle::StaticRegisterNativesUVehicle()
	{
		UClass* Class = UVehicle::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EngineSpeed", &UVehicle::execEngineSpeed },
			{ "Gear", &UVehicle::execGear },
			{ "Position", &UVehicle::execPosition },
			{ "ShiftDown", &UVehicle::execShiftDown },
			{ "ShiftUp", &UVehicle::execShiftUp },
			{ "Update", &UVehicle::execUpdate },
			{ "Velocity", &UVehicle::execVelocity },
			{ "WriteInput", &UVehicle::execWriteInput },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVehicle_EngineSpeed_Statics
	{
		struct Vehicle_eventEngineSpeed_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVehicle_EngineSpeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Vehicle_eventEngineSpeed_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVehicle_EngineSpeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehicle_EngineSpeed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVehicle_EngineSpeed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Vehicle" },
		{ "ModuleRelativePath", "Public/Vehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVehicle_EngineSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVehicle, nullptr, "EngineSpeed", nullptr, nullptr, sizeof(Vehicle_eventEngineSpeed_Parms), Z_Construct_UFunction_UVehicle_EngineSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicle_EngineSpeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVehicle_EngineSpeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicle_EngineSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVehicle_EngineSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVehicle_EngineSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVehicle_Gear_Statics
	{
		struct Vehicle_eventGear_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UVehicle_Gear_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Vehicle_eventGear_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVehicle_Gear_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehicle_Gear_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVehicle_Gear_Statics::Function_MetaDataParams[] = {
		{ "Category", "Vehicle" },
		{ "ModuleRelativePath", "Public/Vehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVehicle_Gear_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVehicle, nullptr, "Gear", nullptr, nullptr, sizeof(Vehicle_eventGear_Parms), Z_Construct_UFunction_UVehicle_Gear_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicle_Gear_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVehicle_Gear_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicle_Gear_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVehicle_Gear()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVehicle_Gear_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVehicle_Position_Statics
	{
		struct Vehicle_eventPosition_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVehicle_Position_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Vehicle_eventPosition_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVehicle_Position_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehicle_Position_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVehicle_Position_Statics::Function_MetaDataParams[] = {
		{ "Category", "Vehicle" },
		{ "ModuleRelativePath", "Public/Vehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVehicle_Position_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVehicle, nullptr, "Position", nullptr, nullptr, sizeof(Vehicle_eventPosition_Parms), Z_Construct_UFunction_UVehicle_Position_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicle_Position_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVehicle_Position_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicle_Position_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVehicle_Position()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVehicle_Position_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVehicle_ShiftDown_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVehicle_ShiftDown_Statics::Function_MetaDataParams[] = {
		{ "Category", "Vehicle" },
		{ "ModuleRelativePath", "Public/Vehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVehicle_ShiftDown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVehicle, nullptr, "ShiftDown", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVehicle_ShiftDown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicle_ShiftDown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVehicle_ShiftDown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVehicle_ShiftDown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVehicle_ShiftUp_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVehicle_ShiftUp_Statics::Function_MetaDataParams[] = {
		{ "Category", "Vehicle" },
		{ "ModuleRelativePath", "Public/Vehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVehicle_ShiftUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVehicle, nullptr, "ShiftUp", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVehicle_ShiftUp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicle_ShiftUp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVehicle_ShiftUp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVehicle_ShiftUp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVehicle_Update_Statics
	{
		struct Vehicle_eventUpdate_Parms
		{
			float t_np1;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_t_np1;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVehicle_Update_Statics::NewProp_t_np1 = { "t_np1", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Vehicle_eventUpdate_Parms, t_np1), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVehicle_Update_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehicle_Update_Statics::NewProp_t_np1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVehicle_Update_Statics::Function_MetaDataParams[] = {
		{ "Category", "Vehicle" },
		{ "ModuleRelativePath", "Public/Vehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVehicle_Update_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVehicle, nullptr, "Update", nullptr, nullptr, sizeof(Vehicle_eventUpdate_Parms), Z_Construct_UFunction_UVehicle_Update_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicle_Update_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVehicle_Update_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicle_Update_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVehicle_Update()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVehicle_Update_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVehicle_Velocity_Statics
	{
		struct Vehicle_eventVelocity_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVehicle_Velocity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Vehicle_eventVelocity_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVehicle_Velocity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehicle_Velocity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVehicle_Velocity_Statics::Function_MetaDataParams[] = {
		{ "Category", "Vehicle" },
		{ "ModuleRelativePath", "Public/Vehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVehicle_Velocity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVehicle, nullptr, "Velocity", nullptr, nullptr, sizeof(Vehicle_eventVelocity_Parms), Z_Construct_UFunction_UVehicle_Velocity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicle_Velocity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVehicle_Velocity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicle_Velocity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVehicle_Velocity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVehicle_Velocity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVehicle_WriteInput_Statics
	{
		struct Vehicle_eventWriteInput_Parms
		{
			float throttle;
			float brakePressure;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_brakePressure;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_throttle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVehicle_WriteInput_Statics::NewProp_brakePressure = { "brakePressure", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Vehicle_eventWriteInput_Parms, brakePressure), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVehicle_WriteInput_Statics::NewProp_throttle = { "throttle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Vehicle_eventWriteInput_Parms, throttle), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVehicle_WriteInput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehicle_WriteInput_Statics::NewProp_brakePressure,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehicle_WriteInput_Statics::NewProp_throttle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVehicle_WriteInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "Vehicle" },
		{ "Comment", "//    UFUNCTION(BlueprintCallable, Category=\"Vehicle\")\n//    void SetParameters(Models::VehicleParameters parameters);\n" },
		{ "ModuleRelativePath", "Public/Vehicle.h" },
		{ "ToolTip", "UFUNCTION(BlueprintCallable, Category=\"Vehicle\")\nvoid SetParameters(Models::VehicleParameters parameters);" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVehicle_WriteInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVehicle, nullptr, "WriteInput", nullptr, nullptr, sizeof(Vehicle_eventWriteInput_Parms), Z_Construct_UFunction_UVehicle_WriteInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicle_WriteInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVehicle_WriteInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicle_WriteInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVehicle_WriteInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVehicle_WriteInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UVehicle_NoRegister()
	{
		return UVehicle::StaticClass();
	}
	struct Z_Construct_UClass_UVehicle_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVehicle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_SimInterface,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVehicle_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVehicle_EngineSpeed, "EngineSpeed" }, // 2419009130
		{ &Z_Construct_UFunction_UVehicle_Gear, "Gear" }, // 2397456270
		{ &Z_Construct_UFunction_UVehicle_Position, "Position" }, // 2299259192
		{ &Z_Construct_UFunction_UVehicle_ShiftDown, "ShiftDown" }, // 3698360978
		{ &Z_Construct_UFunction_UVehicle_ShiftUp, "ShiftUp" }, // 459919213
		{ &Z_Construct_UFunction_UVehicle_Update, "Update" }, // 3089885210
		{ &Z_Construct_UFunction_UVehicle_Velocity, "Velocity" }, // 862493030
		{ &Z_Construct_UFunction_UVehicle_WriteInput, "WriteInput" }, // 3378020796
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVehicle_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Vehicle.h" },
		{ "ModuleRelativePath", "Public/Vehicle.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVehicle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVehicle>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVehicle_Statics::ClassParams = {
		&UVehicle::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UVehicle_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVehicle_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVehicle()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVehicle_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVehicle, 2410110248);
	template<> SIMINTERFACE_API UClass* StaticClass<UVehicle>()
	{
		return UVehicle::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVehicle(Z_Construct_UClass_UVehicle, &UVehicle::StaticClass, TEXT("/Script/SimInterface"), TEXT("UVehicle"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVehicle);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

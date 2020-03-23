// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimInterface/Public/StandaloneEngine.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStandaloneEngine() {}
// Cross Module References
	SIMINTERFACE_API UClass* Z_Construct_UClass_UStandaloneEngine_NoRegister();
	SIMINTERFACE_API UClass* Z_Construct_UClass_UStandaloneEngine();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_SimInterface();
	SIMINTERFACE_API UFunction* Z_Construct_UFunction_UStandaloneEngine_ReadOutput();
	SIMINTERFACE_API UFunction* Z_Construct_UFunction_UStandaloneEngine_Update();
	SIMINTERFACE_API UFunction* Z_Construct_UFunction_UStandaloneEngine_WriteInput();
// End Cross Module References
	void UStandaloneEngine::StaticRegisterNativesUStandaloneEngine()
	{
		UClass* Class = UStandaloneEngine::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ReadOutput", &UStandaloneEngine::execReadOutput },
			{ "Update", &UStandaloneEngine::execUpdate },
			{ "WriteInput", &UStandaloneEngine::execWriteInput },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UStandaloneEngine_ReadOutput_Statics
	{
		struct StandaloneEngine_eventReadOutput_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UStandaloneEngine_ReadOutput_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StandaloneEngine_eventReadOutput_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStandaloneEngine_ReadOutput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStandaloneEngine_ReadOutput_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStandaloneEngine_ReadOutput_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimInterface" },
		{ "ModuleRelativePath", "Public/StandaloneEngine.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStandaloneEngine_ReadOutput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStandaloneEngine, nullptr, "ReadOutput", nullptr, nullptr, sizeof(StandaloneEngine_eventReadOutput_Parms), Z_Construct_UFunction_UStandaloneEngine_ReadOutput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStandaloneEngine_ReadOutput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStandaloneEngine_ReadOutput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStandaloneEngine_ReadOutput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStandaloneEngine_ReadOutput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStandaloneEngine_ReadOutput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStandaloneEngine_Update_Statics
	{
		struct StandaloneEngine_eventUpdate_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UStandaloneEngine_Update_Statics::NewProp_t_np1 = { "t_np1", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StandaloneEngine_eventUpdate_Parms, t_np1), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStandaloneEngine_Update_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStandaloneEngine_Update_Statics::NewProp_t_np1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStandaloneEngine_Update_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimInterface" },
		{ "ModuleRelativePath", "Public/StandaloneEngine.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStandaloneEngine_Update_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStandaloneEngine, nullptr, "Update", nullptr, nullptr, sizeof(StandaloneEngine_eventUpdate_Parms), Z_Construct_UFunction_UStandaloneEngine_Update_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStandaloneEngine_Update_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStandaloneEngine_Update_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStandaloneEngine_Update_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStandaloneEngine_Update()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStandaloneEngine_Update_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStandaloneEngine_WriteInput_Statics
	{
		struct StandaloneEngine_eventWriteInput_Parms
		{
			float inThrottle;
			float inLoad;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_inLoad;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_inThrottle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UStandaloneEngine_WriteInput_Statics::NewProp_inLoad = { "inLoad", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StandaloneEngine_eventWriteInput_Parms, inLoad), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UStandaloneEngine_WriteInput_Statics::NewProp_inThrottle = { "inThrottle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StandaloneEngine_eventWriteInput_Parms, inThrottle), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStandaloneEngine_WriteInput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStandaloneEngine_WriteInput_Statics::NewProp_inLoad,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStandaloneEngine_WriteInput_Statics::NewProp_inThrottle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStandaloneEngine_WriteInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimInterface" },
		{ "ModuleRelativePath", "Public/StandaloneEngine.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStandaloneEngine_WriteInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStandaloneEngine, nullptr, "WriteInput", nullptr, nullptr, sizeof(StandaloneEngine_eventWriteInput_Parms), Z_Construct_UFunction_UStandaloneEngine_WriteInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStandaloneEngine_WriteInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStandaloneEngine_WriteInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStandaloneEngine_WriteInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStandaloneEngine_WriteInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStandaloneEngine_WriteInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UStandaloneEngine_NoRegister()
	{
		return UStandaloneEngine::StaticClass();
	}
	struct Z_Construct_UClass_UStandaloneEngine_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStandaloneEngine_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_SimInterface,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UStandaloneEngine_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UStandaloneEngine_ReadOutput, "ReadOutput" }, // 2309507299
		{ &Z_Construct_UFunction_UStandaloneEngine_Update, "Update" }, // 1810181449
		{ &Z_Construct_UFunction_UStandaloneEngine_WriteInput, "WriteInput" }, // 3170665407
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStandaloneEngine_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "StandaloneEngine.h" },
		{ "ModuleRelativePath", "Public/StandaloneEngine.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStandaloneEngine_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStandaloneEngine>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UStandaloneEngine_Statics::ClassParams = {
		&UStandaloneEngine::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UStandaloneEngine_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStandaloneEngine_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStandaloneEngine()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UStandaloneEngine_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UStandaloneEngine, 355939966);
	template<> SIMINTERFACE_API UClass* StaticClass<UStandaloneEngine>()
	{
		return UStandaloneEngine::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UStandaloneEngine(Z_Construct_UClass_UStandaloneEngine, &UStandaloneEngine::StaticClass, TEXT("/Script/SimInterface"), TEXT("UStandaloneEngine"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStandaloneEngine);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

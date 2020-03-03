// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimInterface/Public/SimInput.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimInput() {}
// Cross Module References
	SIMINTERFACE_API UClass* Z_Construct_UClass_USimInput_NoRegister();
	SIMINTERFACE_API UClass* Z_Construct_UClass_USimInput();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_SimInterface();
	SIMINTERFACE_API UFunction* Z_Construct_UFunction_USimInput_ReadOutput();
	SIMINTERFACE_API UFunction* Z_Construct_UFunction_USimInput_Update();
	SIMINTERFACE_API UFunction* Z_Construct_UFunction_USimInput_WriteInput();
// End Cross Module References
	void USimInput::StaticRegisterNativesUSimInput()
	{
		UClass* Class = USimInput::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ReadOutput", &USimInput::execReadOutput },
			{ "Update", &USimInput::execUpdate },
			{ "WriteInput", &USimInput::execWriteInput },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USimInput_ReadOutput_Statics
	{
		struct SimInput_eventReadOutput_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimInput_ReadOutput_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimInput_eventReadOutput_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimInput_ReadOutput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimInput_ReadOutput_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimInput_ReadOutput_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimInterface" },
		{ "ModuleRelativePath", "Public/SimInput.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USimInput_ReadOutput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimInput, nullptr, "ReadOutput", nullptr, nullptr, sizeof(SimInput_eventReadOutput_Parms), Z_Construct_UFunction_USimInput_ReadOutput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimInput_ReadOutput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimInput_ReadOutput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimInput_ReadOutput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimInput_ReadOutput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USimInput_ReadOutput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimInput_Update_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimInput_Update_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimInterface" },
		{ "ModuleRelativePath", "Public/SimInput.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USimInput_Update_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimInput, nullptr, "Update", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimInput_Update_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimInput_Update_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimInput_Update()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USimInput_Update_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimInput_WriteInput_Statics
	{
		struct SimInput_eventWriteInput_Parms
		{
			float inputValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_inputValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimInput_WriteInput_Statics::NewProp_inputValue = { "inputValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimInput_eventWriteInput_Parms, inputValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimInput_WriteInput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimInput_WriteInput_Statics::NewProp_inputValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimInput_WriteInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimInterface" },
		{ "ModuleRelativePath", "Public/SimInput.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USimInput_WriteInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimInput, nullptr, "WriteInput", nullptr, nullptr, sizeof(SimInput_eventWriteInput_Parms), Z_Construct_UFunction_USimInput_WriteInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimInput_WriteInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimInput_WriteInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimInput_WriteInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimInput_WriteInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USimInput_WriteInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USimInput_NoRegister()
	{
		return USimInput::StaticClass();
	}
	struct Z_Construct_UClass_USimInput_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USimInput_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_SimInterface,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USimInput_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USimInput_ReadOutput, "ReadOutput" }, // 4103092301
		{ &Z_Construct_UFunction_USimInput_Update, "Update" }, // 1276972534
		{ &Z_Construct_UFunction_USimInput_WriteInput, "WriteInput" }, // 4150973089
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimInput_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "SimInput.h" },
		{ "ModuleRelativePath", "Public/SimInput.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USimInput_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USimInput>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USimInput_Statics::ClassParams = {
		&USimInput::StaticClass,
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
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USimInput_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USimInput_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USimInput()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USimInput_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USimInput, 4207382249);
	template<> SIMINTERFACE_API UClass* StaticClass<USimInput>()
	{
		return USimInput::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USimInput(Z_Construct_UClass_USimInput, &USimInput::StaticClass, TEXT("/Script/SimInterface"), TEXT("USimInput"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USimInput);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

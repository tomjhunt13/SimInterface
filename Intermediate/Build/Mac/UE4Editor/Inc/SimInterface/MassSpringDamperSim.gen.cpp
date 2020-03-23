// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimInterface/Public/MassSpringDamperSim.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassSpringDamperSim() {}
// Cross Module References
	SIMINTERFACE_API UClass* Z_Construct_UClass_UMassSpringDamperSim_NoRegister();
	SIMINTERFACE_API UClass* Z_Construct_UClass_UMassSpringDamperSim();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_SimInterface();
	SIMINTERFACE_API UFunction* Z_Construct_UFunction_UMassSpringDamperSim_ReadOutput();
	SIMINTERFACE_API UFunction* Z_Construct_UFunction_UMassSpringDamperSim_Update();
	SIMINTERFACE_API UFunction* Z_Construct_UFunction_UMassSpringDamperSim_WriteInput();
// End Cross Module References
	void UMassSpringDamperSim::StaticRegisterNativesUMassSpringDamperSim()
	{
		UClass* Class = UMassSpringDamperSim::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ReadOutput", &UMassSpringDamperSim::execReadOutput },
			{ "Update", &UMassSpringDamperSim::execUpdate },
			{ "WriteInput", &UMassSpringDamperSim::execWriteInput },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMassSpringDamperSim_ReadOutput_Statics
	{
		struct MassSpringDamperSim_eventReadOutput_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMassSpringDamperSim_ReadOutput_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MassSpringDamperSim_eventReadOutput_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMassSpringDamperSim_ReadOutput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMassSpringDamperSim_ReadOutput_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMassSpringDamperSim_ReadOutput_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimInterface" },
		{ "ModuleRelativePath", "Public/MassSpringDamperSim.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMassSpringDamperSim_ReadOutput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMassSpringDamperSim, nullptr, "ReadOutput", nullptr, nullptr, sizeof(MassSpringDamperSim_eventReadOutput_Parms), Z_Construct_UFunction_UMassSpringDamperSim_ReadOutput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMassSpringDamperSim_ReadOutput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMassSpringDamperSim_ReadOutput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMassSpringDamperSim_ReadOutput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMassSpringDamperSim_ReadOutput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMassSpringDamperSim_ReadOutput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMassSpringDamperSim_Update_Statics
	{
		struct MassSpringDamperSim_eventUpdate_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMassSpringDamperSim_Update_Statics::NewProp_t_np1 = { "t_np1", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MassSpringDamperSim_eventUpdate_Parms, t_np1), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMassSpringDamperSim_Update_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMassSpringDamperSim_Update_Statics::NewProp_t_np1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMassSpringDamperSim_Update_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimInterface" },
		{ "ModuleRelativePath", "Public/MassSpringDamperSim.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMassSpringDamperSim_Update_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMassSpringDamperSim, nullptr, "Update", nullptr, nullptr, sizeof(MassSpringDamperSim_eventUpdate_Parms), Z_Construct_UFunction_UMassSpringDamperSim_Update_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMassSpringDamperSim_Update_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMassSpringDamperSim_Update_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMassSpringDamperSim_Update_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMassSpringDamperSim_Update()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMassSpringDamperSim_Update_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMassSpringDamperSim_WriteInput_Statics
	{
		struct MassSpringDamperSim_eventWriteInput_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMassSpringDamperSim_WriteInput_Statics::NewProp_inputValue = { "inputValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MassSpringDamperSim_eventWriteInput_Parms, inputValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMassSpringDamperSim_WriteInput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMassSpringDamperSim_WriteInput_Statics::NewProp_inputValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMassSpringDamperSim_WriteInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimInterface" },
		{ "ModuleRelativePath", "Public/MassSpringDamperSim.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMassSpringDamperSim_WriteInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMassSpringDamperSim, nullptr, "WriteInput", nullptr, nullptr, sizeof(MassSpringDamperSim_eventWriteInput_Parms), Z_Construct_UFunction_UMassSpringDamperSim_WriteInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMassSpringDamperSim_WriteInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMassSpringDamperSim_WriteInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMassSpringDamperSim_WriteInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMassSpringDamperSim_WriteInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMassSpringDamperSim_WriteInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMassSpringDamperSim_NoRegister()
	{
		return UMassSpringDamperSim::StaticClass();
	}
	struct Z_Construct_UClass_UMassSpringDamperSim_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassSpringDamperSim_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_SimInterface,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMassSpringDamperSim_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMassSpringDamperSim_ReadOutput, "ReadOutput" }, // 1677450462
		{ &Z_Construct_UFunction_UMassSpringDamperSim_Update, "Update" }, // 1288141563
		{ &Z_Construct_UFunction_UMassSpringDamperSim_WriteInput, "WriteInput" }, // 1587359766
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassSpringDamperSim_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "MassSpringDamperSim.h" },
		{ "ModuleRelativePath", "Public/MassSpringDamperSim.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassSpringDamperSim_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassSpringDamperSim>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMassSpringDamperSim_Statics::ClassParams = {
		&UMassSpringDamperSim::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMassSpringDamperSim_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMassSpringDamperSim_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMassSpringDamperSim()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMassSpringDamperSim_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMassSpringDamperSim, 4047140515);
	template<> SIMINTERFACE_API UClass* StaticClass<UMassSpringDamperSim>()
	{
		return UMassSpringDamperSim::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMassSpringDamperSim(Z_Construct_UClass_UMassSpringDamperSim, &UMassSpringDamperSim::StaticClass, TEXT("/Script/SimInterface"), TEXT("UMassSpringDamperSim"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassSpringDamperSim);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

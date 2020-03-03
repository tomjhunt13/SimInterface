// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimInterface/Public/NewActorComponent2.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNewActorComponent2() {}
// Cross Module References
	SIMINTERFACE_API UClass* Z_Construct_UClass_UNewActorComponent2_NoRegister();
	SIMINTERFACE_API UClass* Z_Construct_UClass_UNewActorComponent2();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_SimInterface();
	SIMINTERFACE_API UFunction* Z_Construct_UFunction_UNewActorComponent2_BlankFunc2();
	SIMINTERFACE_API UFunction* Z_Construct_UFunction_UNewActorComponent2_ReadOutput();
	SIMINTERFACE_API UFunction* Z_Construct_UFunction_UNewActorComponent2_Update();
	SIMINTERFACE_API UFunction* Z_Construct_UFunction_UNewActorComponent2_WriteInput();
// End Cross Module References
	void UNewActorComponent2::StaticRegisterNativesUNewActorComponent2()
	{
		UClass* Class = UNewActorComponent2::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BlankFunc2", &UNewActorComponent2::execBlankFunc2 },
			{ "ReadOutput", &UNewActorComponent2::execReadOutput },
			{ "Update", &UNewActorComponent2::execUpdate },
			{ "WriteInput", &UNewActorComponent2::execWriteInput },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UNewActorComponent2_BlankFunc2_Statics
	{
		struct NewActorComponent2_eventBlankFunc2_Parms
		{
			float input;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_input;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNewActorComponent2_BlankFunc2_Statics::NewProp_input = { "input", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NewActorComponent2_eventBlankFunc2_Parms, input), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNewActorComponent2_BlankFunc2_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNewActorComponent2_BlankFunc2_Statics::NewProp_input,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNewActorComponent2_BlankFunc2_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimInterface" },
		{ "ModuleRelativePath", "Public/NewActorComponent2.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNewActorComponent2_BlankFunc2_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNewActorComponent2, nullptr, "BlankFunc2", nullptr, nullptr, sizeof(NewActorComponent2_eventBlankFunc2_Parms), Z_Construct_UFunction_UNewActorComponent2_BlankFunc2_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNewActorComponent2_BlankFunc2_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNewActorComponent2_BlankFunc2_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNewActorComponent2_BlankFunc2_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNewActorComponent2_BlankFunc2()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNewActorComponent2_BlankFunc2_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNewActorComponent2_ReadOutput_Statics
	{
		struct NewActorComponent2_eventReadOutput_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNewActorComponent2_ReadOutput_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NewActorComponent2_eventReadOutput_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNewActorComponent2_ReadOutput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNewActorComponent2_ReadOutput_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNewActorComponent2_ReadOutput_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimInterface" },
		{ "ModuleRelativePath", "Public/NewActorComponent2.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNewActorComponent2_ReadOutput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNewActorComponent2, nullptr, "ReadOutput", nullptr, nullptr, sizeof(NewActorComponent2_eventReadOutput_Parms), Z_Construct_UFunction_UNewActorComponent2_ReadOutput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNewActorComponent2_ReadOutput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNewActorComponent2_ReadOutput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNewActorComponent2_ReadOutput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNewActorComponent2_ReadOutput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNewActorComponent2_ReadOutput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNewActorComponent2_Update_Statics
	{
		struct NewActorComponent2_eventUpdate_Parms
		{
			float t_np1;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_t_np1;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNewActorComponent2_Update_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NewActorComponent2_eventUpdate_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNewActorComponent2_Update_Statics::NewProp_t_np1 = { "t_np1", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NewActorComponent2_eventUpdate_Parms, t_np1), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNewActorComponent2_Update_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNewActorComponent2_Update_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNewActorComponent2_Update_Statics::NewProp_t_np1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNewActorComponent2_Update_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimInterface" },
		{ "ModuleRelativePath", "Public/NewActorComponent2.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNewActorComponent2_Update_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNewActorComponent2, nullptr, "Update", nullptr, nullptr, sizeof(NewActorComponent2_eventUpdate_Parms), Z_Construct_UFunction_UNewActorComponent2_Update_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNewActorComponent2_Update_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNewActorComponent2_Update_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNewActorComponent2_Update_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNewActorComponent2_Update()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNewActorComponent2_Update_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNewActorComponent2_WriteInput_Statics
	{
		struct NewActorComponent2_eventWriteInput_Parms
		{
			float input;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_input;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNewActorComponent2_WriteInput_Statics::NewProp_input = { "input", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NewActorComponent2_eventWriteInput_Parms, input), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNewActorComponent2_WriteInput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNewActorComponent2_WriteInput_Statics::NewProp_input,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNewActorComponent2_WriteInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimInterface" },
		{ "ModuleRelativePath", "Public/NewActorComponent2.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNewActorComponent2_WriteInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNewActorComponent2, nullptr, "WriteInput", nullptr, nullptr, sizeof(NewActorComponent2_eventWriteInput_Parms), Z_Construct_UFunction_UNewActorComponent2_WriteInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNewActorComponent2_WriteInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNewActorComponent2_WriteInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNewActorComponent2_WriteInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNewActorComponent2_WriteInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNewActorComponent2_WriteInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UNewActorComponent2_NoRegister()
	{
		return UNewActorComponent2::StaticClass();
	}
	struct Z_Construct_UClass_UNewActorComponent2_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNewActorComponent2_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_SimInterface,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UNewActorComponent2_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UNewActorComponent2_BlankFunc2, "BlankFunc2" }, // 4059890870
		{ &Z_Construct_UFunction_UNewActorComponent2_ReadOutput, "ReadOutput" }, // 255659436
		{ &Z_Construct_UFunction_UNewActorComponent2_Update, "Update" }, // 2699829076
		{ &Z_Construct_UFunction_UNewActorComponent2_WriteInput, "WriteInput" }, // 1436474622
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNewActorComponent2_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "NewActorComponent2.h" },
		{ "ModuleRelativePath", "Public/NewActorComponent2.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNewActorComponent2_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNewActorComponent2>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNewActorComponent2_Statics::ClassParams = {
		&UNewActorComponent2::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UNewActorComponent2_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNewActorComponent2_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNewActorComponent2()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNewActorComponent2_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNewActorComponent2, 4264751618);
	template<> SIMINTERFACE_API UClass* StaticClass<UNewActorComponent2>()
	{
		return UNewActorComponent2::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNewActorComponent2(Z_Construct_UClass_UNewActorComponent2, &UNewActorComponent2::StaticClass, TEXT("/Script/SimInterface"), TEXT("UNewActorComponent2"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNewActorComponent2);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

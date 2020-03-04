// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimInterface/Public/DemoComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDemoComponent() {}
// Cross Module References
	SIMINTERFACE_API UClass* Z_Construct_UClass_UDemoComponent_NoRegister();
	SIMINTERFACE_API UClass* Z_Construct_UClass_UDemoComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_SimInterface();
	SIMINTERFACE_API UFunction* Z_Construct_UFunction_UDemoComponent_Blah2();
	SIMINTERFACE_API UFunction* Z_Construct_UFunction_UDemoComponent_ReadOutput();
	SIMINTERFACE_API UFunction* Z_Construct_UFunction_UDemoComponent_Update();
	SIMINTERFACE_API UFunction* Z_Construct_UFunction_UDemoComponent_WriteInput();
// End Cross Module References
	void UDemoComponent::StaticRegisterNativesUDemoComponent()
	{
		UClass* Class = UDemoComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Blah2", &UDemoComponent::execBlah2 },
			{ "ReadOutput", &UDemoComponent::execReadOutput },
			{ "Update", &UDemoComponent::execUpdate },
			{ "WriteInput", &UDemoComponent::execWriteInput },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDemoComponent_Blah2_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDemoComponent_Blah2_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimInterface" },
		{ "ModuleRelativePath", "Public/DemoComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDemoComponent_Blah2_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDemoComponent, nullptr, "Blah2", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDemoComponent_Blah2_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDemoComponent_Blah2_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDemoComponent_Blah2()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDemoComponent_Blah2_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDemoComponent_ReadOutput_Statics
	{
		struct DemoComponent_eventReadOutput_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDemoComponent_ReadOutput_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DemoComponent_eventReadOutput_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDemoComponent_ReadOutput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDemoComponent_ReadOutput_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDemoComponent_ReadOutput_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimInterface" },
		{ "ModuleRelativePath", "Public/DemoComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDemoComponent_ReadOutput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDemoComponent, nullptr, "ReadOutput", nullptr, nullptr, sizeof(DemoComponent_eventReadOutput_Parms), Z_Construct_UFunction_UDemoComponent_ReadOutput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDemoComponent_ReadOutput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDemoComponent_ReadOutput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDemoComponent_ReadOutput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDemoComponent_ReadOutput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDemoComponent_ReadOutput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDemoComponent_Update_Statics
	{
		struct DemoComponent_eventUpdate_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDemoComponent_Update_Statics::NewProp_t_np1 = { "t_np1", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DemoComponent_eventUpdate_Parms, t_np1), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDemoComponent_Update_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDemoComponent_Update_Statics::NewProp_t_np1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDemoComponent_Update_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimInterface" },
		{ "ModuleRelativePath", "Public/DemoComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDemoComponent_Update_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDemoComponent, nullptr, "Update", nullptr, nullptr, sizeof(DemoComponent_eventUpdate_Parms), Z_Construct_UFunction_UDemoComponent_Update_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDemoComponent_Update_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDemoComponent_Update_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDemoComponent_Update_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDemoComponent_Update()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDemoComponent_Update_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDemoComponent_WriteInput_Statics
	{
		struct DemoComponent_eventWriteInput_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDemoComponent_WriteInput_Statics::NewProp_inputValue = { "inputValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DemoComponent_eventWriteInput_Parms, inputValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDemoComponent_WriteInput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDemoComponent_WriteInput_Statics::NewProp_inputValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDemoComponent_WriteInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimInterface" },
		{ "ModuleRelativePath", "Public/DemoComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDemoComponent_WriteInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDemoComponent, nullptr, "WriteInput", nullptr, nullptr, sizeof(DemoComponent_eventWriteInput_Parms), Z_Construct_UFunction_UDemoComponent_WriteInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDemoComponent_WriteInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDemoComponent_WriteInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDemoComponent_WriteInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDemoComponent_WriteInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDemoComponent_WriteInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDemoComponent_NoRegister()
	{
		return UDemoComponent::StaticClass();
	}
	struct Z_Construct_UClass_UDemoComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDemoComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_SimInterface,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDemoComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDemoComponent_Blah2, "Blah2" }, // 1931920439
		{ &Z_Construct_UFunction_UDemoComponent_ReadOutput, "ReadOutput" }, // 2106838775
		{ &Z_Construct_UFunction_UDemoComponent_Update, "Update" }, // 1382072103
		{ &Z_Construct_UFunction_UDemoComponent_WriteInput, "WriteInput" }, // 840190895
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDemoComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "DemoComponent.h" },
		{ "ModuleRelativePath", "Public/DemoComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDemoComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDemoComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDemoComponent_Statics::ClassParams = {
		&UDemoComponent::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UDemoComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDemoComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDemoComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDemoComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDemoComponent, 3769319948);
	template<> SIMINTERFACE_API UClass* StaticClass<UDemoComponent>()
	{
		return UDemoComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDemoComponent(Z_Construct_UClass_UDemoComponent, &UDemoComponent::StaticClass, TEXT("/Script/SimInterface"), TEXT("UDemoComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDemoComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

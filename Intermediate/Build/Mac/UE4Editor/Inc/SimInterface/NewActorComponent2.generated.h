// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SIMINTERFACE_NewActorComponent2_generated_h
#error "NewActorComponent2.generated.h already included, missing '#pragma once' in NewActorComponent2.h"
#endif
#define SIMINTERFACE_NewActorComponent2_generated_h

#define EcoAcademy_Plugins_SimInterface_Source_SimInterface_Public_NewActorComponent2_h_19_SPARSE_DATA
#define EcoAcademy_Plugins_SimInterface_Source_SimInterface_Public_NewActorComponent2_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execBlankFunc2) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_input); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BlankFunc2(Z_Param_input); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execWriteInput) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_input); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->WriteInput(Z_Param_input); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdate) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_t_np1); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->Update(Z_Param_t_np1); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReadOutput) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->ReadOutput(); \
		P_NATIVE_END; \
	}


#define EcoAcademy_Plugins_SimInterface_Source_SimInterface_Public_NewActorComponent2_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execBlankFunc2) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_input); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BlankFunc2(Z_Param_input); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execWriteInput) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_input); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->WriteInput(Z_Param_input); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdate) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_t_np1); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->Update(Z_Param_t_np1); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReadOutput) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->ReadOutput(); \
		P_NATIVE_END; \
	}


#define EcoAcademy_Plugins_SimInterface_Source_SimInterface_Public_NewActorComponent2_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNewActorComponent2(); \
	friend struct Z_Construct_UClass_UNewActorComponent2_Statics; \
public: \
	DECLARE_CLASS(UNewActorComponent2, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SimInterface"), NO_API) \
	DECLARE_SERIALIZER(UNewActorComponent2)


#define EcoAcademy_Plugins_SimInterface_Source_SimInterface_Public_NewActorComponent2_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUNewActorComponent2(); \
	friend struct Z_Construct_UClass_UNewActorComponent2_Statics; \
public: \
	DECLARE_CLASS(UNewActorComponent2, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SimInterface"), NO_API) \
	DECLARE_SERIALIZER(UNewActorComponent2)


#define EcoAcademy_Plugins_SimInterface_Source_SimInterface_Public_NewActorComponent2_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNewActorComponent2(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNewActorComponent2) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNewActorComponent2); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNewActorComponent2); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNewActorComponent2(UNewActorComponent2&&); \
	NO_API UNewActorComponent2(const UNewActorComponent2&); \
public:


#define EcoAcademy_Plugins_SimInterface_Source_SimInterface_Public_NewActorComponent2_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNewActorComponent2(UNewActorComponent2&&); \
	NO_API UNewActorComponent2(const UNewActorComponent2&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNewActorComponent2); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNewActorComponent2); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UNewActorComponent2)


#define EcoAcademy_Plugins_SimInterface_Source_SimInterface_Public_NewActorComponent2_h_19_PRIVATE_PROPERTY_OFFSET
#define EcoAcademy_Plugins_SimInterface_Source_SimInterface_Public_NewActorComponent2_h_16_PROLOG
#define EcoAcademy_Plugins_SimInterface_Source_SimInterface_Public_NewActorComponent2_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	EcoAcademy_Plugins_SimInterface_Source_SimInterface_Public_NewActorComponent2_h_19_PRIVATE_PROPERTY_OFFSET \
	EcoAcademy_Plugins_SimInterface_Source_SimInterface_Public_NewActorComponent2_h_19_SPARSE_DATA \
	EcoAcademy_Plugins_SimInterface_Source_SimInterface_Public_NewActorComponent2_h_19_RPC_WRAPPERS \
	EcoAcademy_Plugins_SimInterface_Source_SimInterface_Public_NewActorComponent2_h_19_INCLASS \
	EcoAcademy_Plugins_SimInterface_Source_SimInterface_Public_NewActorComponent2_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define EcoAcademy_Plugins_SimInterface_Source_SimInterface_Public_NewActorComponent2_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	EcoAcademy_Plugins_SimInterface_Source_SimInterface_Public_NewActorComponent2_h_19_PRIVATE_PROPERTY_OFFSET \
	EcoAcademy_Plugins_SimInterface_Source_SimInterface_Public_NewActorComponent2_h_19_SPARSE_DATA \
	EcoAcademy_Plugins_SimInterface_Source_SimInterface_Public_NewActorComponent2_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	EcoAcademy_Plugins_SimInterface_Source_SimInterface_Public_NewActorComponent2_h_19_INCLASS_NO_PURE_DECLS \
	EcoAcademy_Plugins_SimInterface_Source_SimInterface_Public_NewActorComponent2_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SIMINTERFACE_API UClass* StaticClass<class UNewActorComponent2>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID EcoAcademy_Plugins_SimInterface_Source_SimInterface_Public_NewActorComponent2_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SIMINTERFACE_MassSpringDamperSim_generated_h
#error "MassSpringDamperSim.generated.h already included, missing '#pragma once' in MassSpringDamperSim.h"
#endif
#define SIMINTERFACE_MassSpringDamperSim_generated_h

#define EcoAcademy_Plugins_SimInterface_Source_SimInterface_Public_MassSpringDamperSim_h_16_SPARSE_DATA
#define EcoAcademy_Plugins_SimInterface_Source_SimInterface_Public_MassSpringDamperSim_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUpdate) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_t_np1); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Update(Z_Param_t_np1); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReadOutput) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->ReadOutput(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execWriteInput) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_inputValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->WriteInput(Z_Param_inputValue); \
		P_NATIVE_END; \
	}


#define EcoAcademy_Plugins_SimInterface_Source_SimInterface_Public_MassSpringDamperSim_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUpdate) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_t_np1); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Update(Z_Param_t_np1); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReadOutput) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->ReadOutput(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execWriteInput) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_inputValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->WriteInput(Z_Param_inputValue); \
		P_NATIVE_END; \
	}


#define EcoAcademy_Plugins_SimInterface_Source_SimInterface_Public_MassSpringDamperSim_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMassSpringDamperSim(); \
	friend struct Z_Construct_UClass_UMassSpringDamperSim_Statics; \
public: \
	DECLARE_CLASS(UMassSpringDamperSim, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SimInterface"), NO_API) \
	DECLARE_SERIALIZER(UMassSpringDamperSim)


#define EcoAcademy_Plugins_SimInterface_Source_SimInterface_Public_MassSpringDamperSim_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUMassSpringDamperSim(); \
	friend struct Z_Construct_UClass_UMassSpringDamperSim_Statics; \
public: \
	DECLARE_CLASS(UMassSpringDamperSim, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SimInterface"), NO_API) \
	DECLARE_SERIALIZER(UMassSpringDamperSim)


#define EcoAcademy_Plugins_SimInterface_Source_SimInterface_Public_MassSpringDamperSim_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMassSpringDamperSim(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMassSpringDamperSim) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMassSpringDamperSim); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMassSpringDamperSim); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMassSpringDamperSim(UMassSpringDamperSim&&); \
	NO_API UMassSpringDamperSim(const UMassSpringDamperSim&); \
public:


#define EcoAcademy_Plugins_SimInterface_Source_SimInterface_Public_MassSpringDamperSim_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMassSpringDamperSim(UMassSpringDamperSim&&); \
	NO_API UMassSpringDamperSim(const UMassSpringDamperSim&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMassSpringDamperSim); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMassSpringDamperSim); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMassSpringDamperSim)


#define EcoAcademy_Plugins_SimInterface_Source_SimInterface_Public_MassSpringDamperSim_h_16_PRIVATE_PROPERTY_OFFSET
#define EcoAcademy_Plugins_SimInterface_Source_SimInterface_Public_MassSpringDamperSim_h_13_PROLOG
#define EcoAcademy_Plugins_SimInterface_Source_SimInterface_Public_MassSpringDamperSim_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	EcoAcademy_Plugins_SimInterface_Source_SimInterface_Public_MassSpringDamperSim_h_16_PRIVATE_PROPERTY_OFFSET \
	EcoAcademy_Plugins_SimInterface_Source_SimInterface_Public_MassSpringDamperSim_h_16_SPARSE_DATA \
	EcoAcademy_Plugins_SimInterface_Source_SimInterface_Public_MassSpringDamperSim_h_16_RPC_WRAPPERS \
	EcoAcademy_Plugins_SimInterface_Source_SimInterface_Public_MassSpringDamperSim_h_16_INCLASS \
	EcoAcademy_Plugins_SimInterface_Source_SimInterface_Public_MassSpringDamperSim_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define EcoAcademy_Plugins_SimInterface_Source_SimInterface_Public_MassSpringDamperSim_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	EcoAcademy_Plugins_SimInterface_Source_SimInterface_Public_MassSpringDamperSim_h_16_PRIVATE_PROPERTY_OFFSET \
	EcoAcademy_Plugins_SimInterface_Source_SimInterface_Public_MassSpringDamperSim_h_16_SPARSE_DATA \
	EcoAcademy_Plugins_SimInterface_Source_SimInterface_Public_MassSpringDamperSim_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	EcoAcademy_Plugins_SimInterface_Source_SimInterface_Public_MassSpringDamperSim_h_16_INCLASS_NO_PURE_DECLS \
	EcoAcademy_Plugins_SimInterface_Source_SimInterface_Public_MassSpringDamperSim_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SIMINTERFACE_API UClass* StaticClass<class UMassSpringDamperSim>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID EcoAcademy_Plugins_SimInterface_Source_SimInterface_Public_MassSpringDamperSim_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

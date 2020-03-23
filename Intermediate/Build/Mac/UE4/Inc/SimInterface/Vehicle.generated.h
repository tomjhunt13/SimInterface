// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SIMINTERFACE_Vehicle_generated_h
#error "Vehicle.generated.h already included, missing '#pragma once' in Vehicle.h"
#endif
#define SIMINTERFACE_Vehicle_generated_h

#define EcoAcademy_Plugins_SimInterface_Source_SimInterface_Public_Vehicle_h_17_SPARSE_DATA
#define EcoAcademy_Plugins_SimInterface_Source_SimInterface_Public_Vehicle_h_17_RPC_WRAPPERS \
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
	DECLARE_FUNCTION(execGear) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->Gear(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEngineSpeed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->EngineSpeed(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVelocity) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->Velocity(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPosition) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->Position(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShiftDown) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ShiftDown(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShiftUp) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ShiftUp(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execWriteInput) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_throttle); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_brakePressure); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->WriteInput(Z_Param_throttle,Z_Param_brakePressure); \
		P_NATIVE_END; \
	}


#define EcoAcademy_Plugins_SimInterface_Source_SimInterface_Public_Vehicle_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
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
	DECLARE_FUNCTION(execGear) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->Gear(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEngineSpeed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->EngineSpeed(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVelocity) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->Velocity(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPosition) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->Position(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShiftDown) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ShiftDown(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShiftUp) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ShiftUp(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execWriteInput) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_throttle); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_brakePressure); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->WriteInput(Z_Param_throttle,Z_Param_brakePressure); \
		P_NATIVE_END; \
	}


#define EcoAcademy_Plugins_SimInterface_Source_SimInterface_Public_Vehicle_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVehicle(); \
	friend struct Z_Construct_UClass_UVehicle_Statics; \
public: \
	DECLARE_CLASS(UVehicle, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SimInterface"), NO_API) \
	DECLARE_SERIALIZER(UVehicle)


#define EcoAcademy_Plugins_SimInterface_Source_SimInterface_Public_Vehicle_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUVehicle(); \
	friend struct Z_Construct_UClass_UVehicle_Statics; \
public: \
	DECLARE_CLASS(UVehicle, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SimInterface"), NO_API) \
	DECLARE_SERIALIZER(UVehicle)


#define EcoAcademy_Plugins_SimInterface_Source_SimInterface_Public_Vehicle_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVehicle(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVehicle) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVehicle); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVehicle); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVehicle(UVehicle&&); \
	NO_API UVehicle(const UVehicle&); \
public:


#define EcoAcademy_Plugins_SimInterface_Source_SimInterface_Public_Vehicle_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVehicle(UVehicle&&); \
	NO_API UVehicle(const UVehicle&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVehicle); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVehicle); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UVehicle)


#define EcoAcademy_Plugins_SimInterface_Source_SimInterface_Public_Vehicle_h_17_PRIVATE_PROPERTY_OFFSET
#define EcoAcademy_Plugins_SimInterface_Source_SimInterface_Public_Vehicle_h_14_PROLOG
#define EcoAcademy_Plugins_SimInterface_Source_SimInterface_Public_Vehicle_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	EcoAcademy_Plugins_SimInterface_Source_SimInterface_Public_Vehicle_h_17_PRIVATE_PROPERTY_OFFSET \
	EcoAcademy_Plugins_SimInterface_Source_SimInterface_Public_Vehicle_h_17_SPARSE_DATA \
	EcoAcademy_Plugins_SimInterface_Source_SimInterface_Public_Vehicle_h_17_RPC_WRAPPERS \
	EcoAcademy_Plugins_SimInterface_Source_SimInterface_Public_Vehicle_h_17_INCLASS \
	EcoAcademy_Plugins_SimInterface_Source_SimInterface_Public_Vehicle_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define EcoAcademy_Plugins_SimInterface_Source_SimInterface_Public_Vehicle_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	EcoAcademy_Plugins_SimInterface_Source_SimInterface_Public_Vehicle_h_17_PRIVATE_PROPERTY_OFFSET \
	EcoAcademy_Plugins_SimInterface_Source_SimInterface_Public_Vehicle_h_17_SPARSE_DATA \
	EcoAcademy_Plugins_SimInterface_Source_SimInterface_Public_Vehicle_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	EcoAcademy_Plugins_SimInterface_Source_SimInterface_Public_Vehicle_h_17_INCLASS_NO_PURE_DECLS \
	EcoAcademy_Plugins_SimInterface_Source_SimInterface_Public_Vehicle_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SIMINTERFACE_API UClass* StaticClass<class UVehicle>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID EcoAcademy_Plugins_SimInterface_Source_SimInterface_Public_Vehicle_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

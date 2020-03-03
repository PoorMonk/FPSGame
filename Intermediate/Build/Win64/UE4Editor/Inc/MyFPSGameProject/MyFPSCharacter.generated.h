// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYFPSGAMEPROJECT_MyFPSCharacter_generated_h
#error "MyFPSCharacter.generated.h already included, missing '#pragma once' in MyFPSCharacter.h"
#endif
#define MYFPSGAMEPROJECT_MyFPSCharacter_generated_h

#define FPSGame_Source_MyFPSGameProject_MyFPSCharacter_h_14_SPARSE_DATA
#define FPSGame_Source_MyFPSGameProject_MyFPSCharacter_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFire) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Fire(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopJump) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopJump(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartJump) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartJump(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMoveRight) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_AxisValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MoveRight(Z_Param_AxisValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMoveForward) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_AxisValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MoveForward(Z_Param_AxisValue); \
		P_NATIVE_END; \
	}


#define FPSGame_Source_MyFPSGameProject_MyFPSCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFire) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Fire(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopJump) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopJump(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartJump) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartJump(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMoveRight) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_AxisValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MoveRight(Z_Param_AxisValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMoveForward) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_AxisValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MoveForward(Z_Param_AxisValue); \
		P_NATIVE_END; \
	}


#define FPSGame_Source_MyFPSGameProject_MyFPSCharacter_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyFPSCharacter(); \
	friend struct Z_Construct_UClass_AMyFPSCharacter_Statics; \
public: \
	DECLARE_CLASS(AMyFPSCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyFPSGameProject"), NO_API) \
	DECLARE_SERIALIZER(AMyFPSCharacter)


#define FPSGame_Source_MyFPSGameProject_MyFPSCharacter_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAMyFPSCharacter(); \
	friend struct Z_Construct_UClass_AMyFPSCharacter_Statics; \
public: \
	DECLARE_CLASS(AMyFPSCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyFPSGameProject"), NO_API) \
	DECLARE_SERIALIZER(AMyFPSCharacter)


#define FPSGame_Source_MyFPSGameProject_MyFPSCharacter_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyFPSCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyFPSCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyFPSCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyFPSCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyFPSCharacter(AMyFPSCharacter&&); \
	NO_API AMyFPSCharacter(const AMyFPSCharacter&); \
public:


#define FPSGame_Source_MyFPSGameProject_MyFPSCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyFPSCharacter(AMyFPSCharacter&&); \
	NO_API AMyFPSCharacter(const AMyFPSCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyFPSCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyFPSCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyFPSCharacter)


#define FPSGame_Source_MyFPSGameProject_MyFPSCharacter_h_14_PRIVATE_PROPERTY_OFFSET
#define FPSGame_Source_MyFPSGameProject_MyFPSCharacter_h_11_PROLOG
#define FPSGame_Source_MyFPSGameProject_MyFPSCharacter_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPSGame_Source_MyFPSGameProject_MyFPSCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	FPSGame_Source_MyFPSGameProject_MyFPSCharacter_h_14_SPARSE_DATA \
	FPSGame_Source_MyFPSGameProject_MyFPSCharacter_h_14_RPC_WRAPPERS \
	FPSGame_Source_MyFPSGameProject_MyFPSCharacter_h_14_INCLASS \
	FPSGame_Source_MyFPSGameProject_MyFPSCharacter_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FPSGame_Source_MyFPSGameProject_MyFPSCharacter_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPSGame_Source_MyFPSGameProject_MyFPSCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	FPSGame_Source_MyFPSGameProject_MyFPSCharacter_h_14_SPARSE_DATA \
	FPSGame_Source_MyFPSGameProject_MyFPSCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FPSGame_Source_MyFPSGameProject_MyFPSCharacter_h_14_INCLASS_NO_PURE_DECLS \
	FPSGame_Source_MyFPSGameProject_MyFPSCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYFPSGAMEPROJECT_API UClass* StaticClass<class AMyFPSCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FPSGame_Source_MyFPSGameProject_MyFPSCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

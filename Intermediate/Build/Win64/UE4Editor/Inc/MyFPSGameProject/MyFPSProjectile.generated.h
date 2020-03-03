// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef MYFPSGAMEPROJECT_MyFPSProjectile_generated_h
#error "MyFPSProjectile.generated.h already included, missing '#pragma once' in MyFPSProjectile.h"
#endif
#define MYFPSGAMEPROJECT_MyFPSProjectile_generated_h

#define FPSGame_Source_MyFPSGameProject_MyFPSProjectile_h_15_SPARSE_DATA
#define FPSGame_Source_MyFPSGameProject_MyFPSProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComponent); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpuse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComponent,Z_Param_OtherActor,Z_Param_OtherComponent,Z_Param_NormalImpuse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define FPSGame_Source_MyFPSGameProject_MyFPSProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComponent); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpuse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComponent,Z_Param_OtherActor,Z_Param_OtherComponent,Z_Param_NormalImpuse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define FPSGame_Source_MyFPSGameProject_MyFPSProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyFPSProjectile(); \
	friend struct Z_Construct_UClass_AMyFPSProjectile_Statics; \
public: \
	DECLARE_CLASS(AMyFPSProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyFPSGameProject"), NO_API) \
	DECLARE_SERIALIZER(AMyFPSProjectile)


#define FPSGame_Source_MyFPSGameProject_MyFPSProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAMyFPSProjectile(); \
	friend struct Z_Construct_UClass_AMyFPSProjectile_Statics; \
public: \
	DECLARE_CLASS(AMyFPSProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyFPSGameProject"), NO_API) \
	DECLARE_SERIALIZER(AMyFPSProjectile)


#define FPSGame_Source_MyFPSGameProject_MyFPSProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyFPSProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyFPSProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyFPSProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyFPSProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyFPSProjectile(AMyFPSProjectile&&); \
	NO_API AMyFPSProjectile(const AMyFPSProjectile&); \
public:


#define FPSGame_Source_MyFPSGameProject_MyFPSProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyFPSProjectile(AMyFPSProjectile&&); \
	NO_API AMyFPSProjectile(const AMyFPSProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyFPSProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyFPSProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyFPSProjectile)


#define FPSGame_Source_MyFPSGameProject_MyFPSProjectile_h_15_PRIVATE_PROPERTY_OFFSET
#define FPSGame_Source_MyFPSGameProject_MyFPSProjectile_h_12_PROLOG
#define FPSGame_Source_MyFPSGameProject_MyFPSProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPSGame_Source_MyFPSGameProject_MyFPSProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FPSGame_Source_MyFPSGameProject_MyFPSProjectile_h_15_SPARSE_DATA \
	FPSGame_Source_MyFPSGameProject_MyFPSProjectile_h_15_RPC_WRAPPERS \
	FPSGame_Source_MyFPSGameProject_MyFPSProjectile_h_15_INCLASS \
	FPSGame_Source_MyFPSGameProject_MyFPSProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FPSGame_Source_MyFPSGameProject_MyFPSProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPSGame_Source_MyFPSGameProject_MyFPSProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FPSGame_Source_MyFPSGameProject_MyFPSProjectile_h_15_SPARSE_DATA \
	FPSGame_Source_MyFPSGameProject_MyFPSProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FPSGame_Source_MyFPSGameProject_MyFPSProjectile_h_15_INCLASS_NO_PURE_DECLS \
	FPSGame_Source_MyFPSGameProject_MyFPSProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYFPSGAMEPROJECT_API UClass* StaticClass<class AMyFPSProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FPSGame_Source_MyFPSGameProject_MyFPSProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

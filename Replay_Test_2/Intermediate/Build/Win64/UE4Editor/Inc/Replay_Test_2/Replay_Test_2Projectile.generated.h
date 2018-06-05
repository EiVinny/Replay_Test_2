// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef REPLAY_TEST_2_Replay_Test_2Projectile_generated_h
#error "Replay_Test_2Projectile.generated.h already included, missing '#pragma once' in Replay_Test_2Projectile.h"
#endif
#define REPLAY_TEST_2_Replay_Test_2Projectile_generated_h

#define Replay_Test_2_Source_Replay_Test_2_Replay_Test_2Projectile_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define Replay_Test_2_Source_Replay_Test_2_Replay_Test_2Projectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define Replay_Test_2_Source_Replay_Test_2_Replay_Test_2Projectile_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAReplay_Test_2Projectile(); \
	friend REPLAY_TEST_2_API class UClass* Z_Construct_UClass_AReplay_Test_2Projectile(); \
public: \
	DECLARE_CLASS(AReplay_Test_2Projectile, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Replay_Test_2"), NO_API) \
	DECLARE_SERIALIZER(AReplay_Test_2Projectile) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Replay_Test_2_Source_Replay_Test_2_Replay_Test_2Projectile_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAReplay_Test_2Projectile(); \
	friend REPLAY_TEST_2_API class UClass* Z_Construct_UClass_AReplay_Test_2Projectile(); \
public: \
	DECLARE_CLASS(AReplay_Test_2Projectile, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Replay_Test_2"), NO_API) \
	DECLARE_SERIALIZER(AReplay_Test_2Projectile) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Replay_Test_2_Source_Replay_Test_2_Replay_Test_2Projectile_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AReplay_Test_2Projectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AReplay_Test_2Projectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AReplay_Test_2Projectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AReplay_Test_2Projectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AReplay_Test_2Projectile(AReplay_Test_2Projectile&&); \
	NO_API AReplay_Test_2Projectile(const AReplay_Test_2Projectile&); \
public:


#define Replay_Test_2_Source_Replay_Test_2_Replay_Test_2Projectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AReplay_Test_2Projectile(AReplay_Test_2Projectile&&); \
	NO_API AReplay_Test_2Projectile(const AReplay_Test_2Projectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AReplay_Test_2Projectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AReplay_Test_2Projectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AReplay_Test_2Projectile)


#define Replay_Test_2_Source_Replay_Test_2_Replay_Test_2Projectile_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(AReplay_Test_2Projectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AReplay_Test_2Projectile, ProjectileMovement); }


#define Replay_Test_2_Source_Replay_Test_2_Replay_Test_2Projectile_h_9_PROLOG
#define Replay_Test_2_Source_Replay_Test_2_Replay_Test_2Projectile_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Replay_Test_2_Source_Replay_Test_2_Replay_Test_2Projectile_h_12_PRIVATE_PROPERTY_OFFSET \
	Replay_Test_2_Source_Replay_Test_2_Replay_Test_2Projectile_h_12_RPC_WRAPPERS \
	Replay_Test_2_Source_Replay_Test_2_Replay_Test_2Projectile_h_12_INCLASS \
	Replay_Test_2_Source_Replay_Test_2_Replay_Test_2Projectile_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Replay_Test_2_Source_Replay_Test_2_Replay_Test_2Projectile_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Replay_Test_2_Source_Replay_Test_2_Replay_Test_2Projectile_h_12_PRIVATE_PROPERTY_OFFSET \
	Replay_Test_2_Source_Replay_Test_2_Replay_Test_2Projectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Replay_Test_2_Source_Replay_Test_2_Replay_Test_2Projectile_h_12_INCLASS_NO_PURE_DECLS \
	Replay_Test_2_Source_Replay_Test_2_Replay_Test_2Projectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Replay_Test_2_Source_Replay_Test_2_Replay_Test_2Projectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

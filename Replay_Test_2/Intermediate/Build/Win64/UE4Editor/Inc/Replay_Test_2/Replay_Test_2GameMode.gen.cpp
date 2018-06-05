// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Replay_Test_2GameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReplay_Test_2GameMode() {}
// Cross Module References
	REPLAY_TEST_2_API UClass* Z_Construct_UClass_AReplay_Test_2GameMode_NoRegister();
	REPLAY_TEST_2_API UClass* Z_Construct_UClass_AReplay_Test_2GameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Replay_Test_2();
// End Cross Module References
	void AReplay_Test_2GameMode::StaticRegisterNativesAReplay_Test_2GameMode()
	{
	}
	UClass* Z_Construct_UClass_AReplay_Test_2GameMode_NoRegister()
	{
		return AReplay_Test_2GameMode::StaticClass();
	}
	UClass* Z_Construct_UClass_AReplay_Test_2GameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AGameModeBase,
				(UObject* (*)())Z_Construct_UPackage__Script_Replay_Test_2,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "Replay_Test_2GameMode.h" },
				{ "ModuleRelativePath", "Replay_Test_2GameMode.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AReplay_Test_2GameMode>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AReplay_Test_2GameMode::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00880288u,
				nullptr, 0,
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AReplay_Test_2GameMode, 3618011431);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AReplay_Test_2GameMode(Z_Construct_UClass_AReplay_Test_2GameMode, &AReplay_Test_2GameMode::StaticClass, TEXT("/Script/Replay_Test_2"), TEXT("AReplay_Test_2GameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AReplay_Test_2GameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Replay_Test_2HUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReplay_Test_2HUD() {}
// Cross Module References
	REPLAY_TEST_2_API UClass* Z_Construct_UClass_AReplay_Test_2HUD_NoRegister();
	REPLAY_TEST_2_API UClass* Z_Construct_UClass_AReplay_Test_2HUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_Replay_Test_2();
// End Cross Module References
	void AReplay_Test_2HUD::StaticRegisterNativesAReplay_Test_2HUD()
	{
	}
	UClass* Z_Construct_UClass_AReplay_Test_2HUD_NoRegister()
	{
		return AReplay_Test_2HUD::StaticClass();
	}
	UClass* Z_Construct_UClass_AReplay_Test_2HUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AHUD,
				(UObject* (*)())Z_Construct_UPackage__Script_Replay_Test_2,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Rendering Actor Input Replication" },
				{ "IncludePath", "Replay_Test_2HUD.h" },
				{ "ModuleRelativePath", "Replay_Test_2HUD.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AReplay_Test_2HUD>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AReplay_Test_2HUD::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x0080028Cu,
				nullptr, 0,
				nullptr, 0,
				"Game",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AReplay_Test_2HUD, 713383588);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AReplay_Test_2HUD(Z_Construct_UClass_AReplay_Test_2HUD, &AReplay_Test_2HUD::StaticClass, TEXT("/Script/Replay_Test_2"), TEXT("AReplay_Test_2HUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AReplay_Test_2HUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

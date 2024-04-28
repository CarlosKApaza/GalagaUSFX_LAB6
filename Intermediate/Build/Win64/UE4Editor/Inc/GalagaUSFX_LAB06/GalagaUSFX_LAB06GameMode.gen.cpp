// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GalagaUSFX_LAB06/GalagaUSFX_LAB06GameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGalagaUSFX_LAB06GameMode() {}
// Cross Module References
	GALAGAUSFX_LAB06_API UClass* Z_Construct_UClass_AGalagaUSFX_LAB06GameMode_NoRegister();
	GALAGAUSFX_LAB06_API UClass* Z_Construct_UClass_AGalagaUSFX_LAB06GameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_GalagaUSFX_LAB06();
// End Cross Module References
	void AGalagaUSFX_LAB06GameMode::StaticRegisterNativesAGalagaUSFX_LAB06GameMode()
	{
	}
	UClass* Z_Construct_UClass_AGalagaUSFX_LAB06GameMode_NoRegister()
	{
		return AGalagaUSFX_LAB06GameMode::StaticClass();
	}
	struct Z_Construct_UClass_AGalagaUSFX_LAB06GameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGalagaUSFX_LAB06GameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_GalagaUSFX_LAB06,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGalagaUSFX_LAB06GameMode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "//Forward Declaration\n" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "GalagaUSFX_LAB06GameMode.h" },
		{ "ModuleRelativePath", "GalagaUSFX_LAB06GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "Forward Declaration" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGalagaUSFX_LAB06GameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGalagaUSFX_LAB06GameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGalagaUSFX_LAB06GameMode_Statics::ClassParams = {
		&AGalagaUSFX_LAB06GameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AGalagaUSFX_LAB06GameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGalagaUSFX_LAB06GameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGalagaUSFX_LAB06GameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGalagaUSFX_LAB06GameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGalagaUSFX_LAB06GameMode, 227534136);
	template<> GALAGAUSFX_LAB06_API UClass* StaticClass<AGalagaUSFX_LAB06GameMode>()
	{
		return AGalagaUSFX_LAB06GameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGalagaUSFX_LAB06GameMode(Z_Construct_UClass_AGalagaUSFX_LAB06GameMode, &AGalagaUSFX_LAB06GameMode::StaticClass, TEXT("/Script/GalagaUSFX_LAB06"), TEXT("AGalagaUSFX_LAB06GameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGalagaUSFX_LAB06GameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

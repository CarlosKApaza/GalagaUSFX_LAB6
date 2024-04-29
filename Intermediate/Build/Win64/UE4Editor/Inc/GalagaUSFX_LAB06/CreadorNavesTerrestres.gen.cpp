// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GalagaUSFX_LAB06/CreadorNavesTerrestres.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCreadorNavesTerrestres() {}
// Cross Module References
	GALAGAUSFX_LAB06_API UClass* Z_Construct_UClass_ACreadorNavesTerrestres_NoRegister();
	GALAGAUSFX_LAB06_API UClass* Z_Construct_UClass_ACreadorNavesTerrestres();
	GALAGAUSFX_LAB06_API UClass* Z_Construct_UClass_ACreadorNaves();
	UPackage* Z_Construct_UPackage__Script_GalagaUSFX_LAB06();
// End Cross Module References
	void ACreadorNavesTerrestres::StaticRegisterNativesACreadorNavesTerrestres()
	{
	}
	UClass* Z_Construct_UClass_ACreadorNavesTerrestres_NoRegister()
	{
		return ACreadorNavesTerrestres::StaticClass();
	}
	struct Z_Construct_UClass_ACreadorNavesTerrestres_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACreadorNavesTerrestres_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACreadorNaves,
		(UObject* (*)())Z_Construct_UPackage__Script_GalagaUSFX_LAB06,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACreadorNavesTerrestres_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "CreadorNavesTerrestres.h" },
		{ "ModuleRelativePath", "CreadorNavesTerrestres.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACreadorNavesTerrestres_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACreadorNavesTerrestres>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACreadorNavesTerrestres_Statics::ClassParams = {
		&ACreadorNavesTerrestres::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACreadorNavesTerrestres_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACreadorNavesTerrestres_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACreadorNavesTerrestres()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACreadorNavesTerrestres_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACreadorNavesTerrestres, 26950962);
	template<> GALAGAUSFX_LAB06_API UClass* StaticClass<ACreadorNavesTerrestres>()
	{
		return ACreadorNavesTerrestres::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACreadorNavesTerrestres(Z_Construct_UClass_ACreadorNavesTerrestres, &ACreadorNavesTerrestres::StaticClass, TEXT("/Script/GalagaUSFX_LAB06"), TEXT("ACreadorNavesTerrestres"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACreadorNavesTerrestres);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

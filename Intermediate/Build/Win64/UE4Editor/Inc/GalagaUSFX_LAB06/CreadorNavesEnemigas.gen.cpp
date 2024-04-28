// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GalagaUSFX_LAB06/CreadorNavesEnemigas.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCreadorNavesEnemigas() {}
// Cross Module References
	GALAGAUSFX_LAB06_API UClass* Z_Construct_UClass_ACreadorNavesEnemigas_NoRegister();
	GALAGAUSFX_LAB06_API UClass* Z_Construct_UClass_ACreadorNavesEnemigas();
	GALAGAUSFX_LAB06_API UClass* Z_Construct_UClass_ACreadorNaves();
	UPackage* Z_Construct_UPackage__Script_GalagaUSFX_LAB06();
// End Cross Module References
	void ACreadorNavesEnemigas::StaticRegisterNativesACreadorNavesEnemigas()
	{
	}
	UClass* Z_Construct_UClass_ACreadorNavesEnemigas_NoRegister()
	{
		return ACreadorNavesEnemigas::StaticClass();
	}
	struct Z_Construct_UClass_ACreadorNavesEnemigas_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACreadorNavesEnemigas_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACreadorNaves,
		(UObject* (*)())Z_Construct_UPackage__Script_GalagaUSFX_LAB06,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACreadorNavesEnemigas_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "CreadorNavesEnemigas.h" },
		{ "ModuleRelativePath", "CreadorNavesEnemigas.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACreadorNavesEnemigas_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACreadorNavesEnemigas>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACreadorNavesEnemigas_Statics::ClassParams = {
		&ACreadorNavesEnemigas::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ACreadorNavesEnemigas_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACreadorNavesEnemigas_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACreadorNavesEnemigas()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACreadorNavesEnemigas_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACreadorNavesEnemigas, 2648624776);
	template<> GALAGAUSFX_LAB06_API UClass* StaticClass<ACreadorNavesEnemigas>()
	{
		return ACreadorNavesEnemigas::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACreadorNavesEnemigas(Z_Construct_UClass_ACreadorNavesEnemigas, &ACreadorNavesEnemigas::StaticClass, TEXT("/Script/GalagaUSFX_LAB06"), TEXT("ACreadorNavesEnemigas"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACreadorNavesEnemigas);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

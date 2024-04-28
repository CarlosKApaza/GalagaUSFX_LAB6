// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GalagaUSFX_LAB06/CreadorNavesAereas.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCreadorNavesAereas() {}
// Cross Module References
	GALAGAUSFX_LAB06_API UClass* Z_Construct_UClass_ACreadorNavesAereas_NoRegister();
	GALAGAUSFX_LAB06_API UClass* Z_Construct_UClass_ACreadorNavesAereas();
	GALAGAUSFX_LAB06_API UClass* Z_Construct_UClass_ACreadorNaves();
	UPackage* Z_Construct_UPackage__Script_GalagaUSFX_LAB06();
// End Cross Module References
	void ACreadorNavesAereas::StaticRegisterNativesACreadorNavesAereas()
	{
	}
	UClass* Z_Construct_UClass_ACreadorNavesAereas_NoRegister()
	{
		return ACreadorNavesAereas::StaticClass();
	}
	struct Z_Construct_UClass_ACreadorNavesAereas_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACreadorNavesAereas_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACreadorNaves,
		(UObject* (*)())Z_Construct_UPackage__Script_GalagaUSFX_LAB06,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACreadorNavesAereas_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "CreadorNavesAereas.h" },
		{ "ModuleRelativePath", "CreadorNavesAereas.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACreadorNavesAereas_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACreadorNavesAereas>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACreadorNavesAereas_Statics::ClassParams = {
		&ACreadorNavesAereas::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ACreadorNavesAereas_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACreadorNavesAereas_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACreadorNavesAereas()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACreadorNavesAereas_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACreadorNavesAereas, 3400595547);
	template<> GALAGAUSFX_LAB06_API UClass* StaticClass<ACreadorNavesAereas>()
	{
		return ACreadorNavesAereas::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACreadorNavesAereas(Z_Construct_UClass_ACreadorNavesAereas, &ACreadorNavesAereas::StaticClass, TEXT("/Script/GalagaUSFX_LAB06"), TEXT("ACreadorNavesAereas"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACreadorNavesAereas);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

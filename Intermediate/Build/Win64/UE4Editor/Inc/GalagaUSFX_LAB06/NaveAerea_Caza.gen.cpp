// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GalagaUSFX_LAB06/NaveAerea_Caza.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNaveAerea_Caza() {}
// Cross Module References
	GALAGAUSFX_LAB06_API UClass* Z_Construct_UClass_ANaveAerea_Caza_NoRegister();
	GALAGAUSFX_LAB06_API UClass* Z_Construct_UClass_ANaveAerea_Caza();
	GALAGAUSFX_LAB06_API UClass* Z_Construct_UClass_ANaveEnemiga();
	UPackage* Z_Construct_UPackage__Script_GalagaUSFX_LAB06();
// End Cross Module References
	void ANaveAerea_Caza::StaticRegisterNativesANaveAerea_Caza()
	{
	}
	UClass* Z_Construct_UClass_ANaveAerea_Caza_NoRegister()
	{
		return ANaveAerea_Caza::StaticClass();
	}
	struct Z_Construct_UClass_ANaveAerea_Caza_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VelocidadYCaza_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VelocidadYCaza;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANaveAerea_Caza_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ANaveEnemiga,
		(UObject* (*)())Z_Construct_UPackage__Script_GalagaUSFX_LAB06,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveAerea_Caza_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "NaveAerea_Caza.h" },
		{ "ModuleRelativePath", "NaveAerea_Caza.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveAerea_Caza_Statics::NewProp_VelocidadYCaza_MetaData[] = {
		{ "Category", "Velocidad Nave Aerea Caza" },
		{ "Comment", "// Velocidad en el eje Y\n" },
		{ "ModuleRelativePath", "NaveAerea_Caza.h" },
		{ "ToolTip", "Velocidad en el eje Y" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANaveAerea_Caza_Statics::NewProp_VelocidadYCaza = { "VelocidadYCaza", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANaveAerea_Caza, VelocidadYCaza), METADATA_PARAMS(Z_Construct_UClass_ANaveAerea_Caza_Statics::NewProp_VelocidadYCaza_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveAerea_Caza_Statics::NewProp_VelocidadYCaza_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANaveAerea_Caza_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANaveAerea_Caza_Statics::NewProp_VelocidadYCaza,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANaveAerea_Caza_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANaveAerea_Caza>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANaveAerea_Caza_Statics::ClassParams = {
		&ANaveAerea_Caza::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ANaveAerea_Caza_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ANaveAerea_Caza_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ANaveAerea_Caza_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveAerea_Caza_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANaveAerea_Caza()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANaveAerea_Caza_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANaveAerea_Caza, 3761343740);
	template<> GALAGAUSFX_LAB06_API UClass* StaticClass<ANaveAerea_Caza>()
	{
		return ANaveAerea_Caza::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANaveAerea_Caza(Z_Construct_UClass_ANaveAerea_Caza, &ANaveAerea_Caza::StaticClass, TEXT("/Script/GalagaUSFX_LAB06"), TEXT("ANaveAerea_Caza"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANaveAerea_Caza);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

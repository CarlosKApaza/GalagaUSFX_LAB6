// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GalagaUSFX_LAB06/NaveTerrestre_Artilleria.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNaveTerrestre_Artilleria() {}
// Cross Module References
	GALAGAUSFX_LAB06_API UClass* Z_Construct_UClass_ANaveTerrestre_Artilleria_NoRegister();
	GALAGAUSFX_LAB06_API UClass* Z_Construct_UClass_ANaveTerrestre_Artilleria();
	GALAGAUSFX_LAB06_API UClass* Z_Construct_UClass_ANaveEnemiga();
	UPackage* Z_Construct_UPackage__Script_GalagaUSFX_LAB06();
// End Cross Module References
	void ANaveTerrestre_Artilleria::StaticRegisterNativesANaveTerrestre_Artilleria()
	{
	}
	UClass* Z_Construct_UClass_ANaveTerrestre_Artilleria_NoRegister()
	{
		return ANaveTerrestre_Artilleria::StaticClass();
	}
	struct Z_Construct_UClass_ANaveTerrestre_Artilleria_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VelocidadYArtilleria_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VelocidadYArtilleria;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANaveTerrestre_Artilleria_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ANaveEnemiga,
		(UObject* (*)())Z_Construct_UPackage__Script_GalagaUSFX_LAB06,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveTerrestre_Artilleria_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "NaveTerrestre_Artilleria.h" },
		{ "ModuleRelativePath", "NaveTerrestre_Artilleria.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveTerrestre_Artilleria_Statics::NewProp_VelocidadYArtilleria_MetaData[] = {
		{ "Category", "Velocidad Nave Terrestre Artilleria" },
		{ "Comment", "// Velocidad en el eje Y\n" },
		{ "ModuleRelativePath", "NaveTerrestre_Artilleria.h" },
		{ "ToolTip", "Velocidad en el eje Y" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANaveTerrestre_Artilleria_Statics::NewProp_VelocidadYArtilleria = { "VelocidadYArtilleria", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANaveTerrestre_Artilleria, VelocidadYArtilleria), METADATA_PARAMS(Z_Construct_UClass_ANaveTerrestre_Artilleria_Statics::NewProp_VelocidadYArtilleria_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveTerrestre_Artilleria_Statics::NewProp_VelocidadYArtilleria_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANaveTerrestre_Artilleria_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANaveTerrestre_Artilleria_Statics::NewProp_VelocidadYArtilleria,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANaveTerrestre_Artilleria_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANaveTerrestre_Artilleria>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANaveTerrestre_Artilleria_Statics::ClassParams = {
		&ANaveTerrestre_Artilleria::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ANaveTerrestre_Artilleria_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ANaveTerrestre_Artilleria_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ANaveTerrestre_Artilleria_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveTerrestre_Artilleria_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANaveTerrestre_Artilleria()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANaveTerrestre_Artilleria_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANaveTerrestre_Artilleria, 2564539247);
	template<> GALAGAUSFX_LAB06_API UClass* StaticClass<ANaveTerrestre_Artilleria>()
	{
		return ANaveTerrestre_Artilleria::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANaveTerrestre_Artilleria(Z_Construct_UClass_ANaveTerrestre_Artilleria, &ANaveTerrestre_Artilleria::StaticClass, TEXT("/Script/GalagaUSFX_LAB06"), TEXT("ANaveTerrestre_Artilleria"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANaveTerrestre_Artilleria);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

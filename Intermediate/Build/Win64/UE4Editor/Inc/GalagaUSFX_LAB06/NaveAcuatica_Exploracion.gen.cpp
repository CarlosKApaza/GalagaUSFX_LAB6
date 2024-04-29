// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GalagaUSFX_LAB06/NaveAcuatica_Exploracion.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNaveAcuatica_Exploracion() {}
// Cross Module References
	GALAGAUSFX_LAB06_API UClass* Z_Construct_UClass_ANaveAcuatica_Exploracion_NoRegister();
	GALAGAUSFX_LAB06_API UClass* Z_Construct_UClass_ANaveAcuatica_Exploracion();
	GALAGAUSFX_LAB06_API UClass* Z_Construct_UClass_ANaveEnemiga();
	UPackage* Z_Construct_UPackage__Script_GalagaUSFX_LAB06();
// End Cross Module References
	void ANaveAcuatica_Exploracion::StaticRegisterNativesANaveAcuatica_Exploracion()
	{
	}
	UClass* Z_Construct_UClass_ANaveAcuatica_Exploracion_NoRegister()
	{
		return ANaveAcuatica_Exploracion::StaticClass();
	}
	struct Z_Construct_UClass_ANaveAcuatica_Exploracion_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VelocidadYExploracion_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VelocidadYExploracion;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANaveAcuatica_Exploracion_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ANaveEnemiga,
		(UObject* (*)())Z_Construct_UPackage__Script_GalagaUSFX_LAB06,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveAcuatica_Exploracion_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "NaveAcuatica_Exploracion.h" },
		{ "ModuleRelativePath", "NaveAcuatica_Exploracion.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveAcuatica_Exploracion_Statics::NewProp_VelocidadYExploracion_MetaData[] = {
		{ "Category", "Velocidad Nave Acuatica Exploracion" },
		{ "Comment", "// Velocidad en el eje Y\n" },
		{ "ModuleRelativePath", "NaveAcuatica_Exploracion.h" },
		{ "ToolTip", "Velocidad en el eje Y" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANaveAcuatica_Exploracion_Statics::NewProp_VelocidadYExploracion = { "VelocidadYExploracion", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANaveAcuatica_Exploracion, VelocidadYExploracion), METADATA_PARAMS(Z_Construct_UClass_ANaveAcuatica_Exploracion_Statics::NewProp_VelocidadYExploracion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveAcuatica_Exploracion_Statics::NewProp_VelocidadYExploracion_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANaveAcuatica_Exploracion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANaveAcuatica_Exploracion_Statics::NewProp_VelocidadYExploracion,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANaveAcuatica_Exploracion_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANaveAcuatica_Exploracion>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANaveAcuatica_Exploracion_Statics::ClassParams = {
		&ANaveAcuatica_Exploracion::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ANaveAcuatica_Exploracion_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ANaveAcuatica_Exploracion_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ANaveAcuatica_Exploracion_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveAcuatica_Exploracion_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANaveAcuatica_Exploracion()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANaveAcuatica_Exploracion_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANaveAcuatica_Exploracion, 1538938362);
	template<> GALAGAUSFX_LAB06_API UClass* StaticClass<ANaveAcuatica_Exploracion>()
	{
		return ANaveAcuatica_Exploracion::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANaveAcuatica_Exploracion(Z_Construct_UClass_ANaveAcuatica_Exploracion, &ANaveAcuatica_Exploracion::StaticClass, TEXT("/Script/GalagaUSFX_LAB06"), TEXT("ANaveAcuatica_Exploracion"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANaveAcuatica_Exploracion);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

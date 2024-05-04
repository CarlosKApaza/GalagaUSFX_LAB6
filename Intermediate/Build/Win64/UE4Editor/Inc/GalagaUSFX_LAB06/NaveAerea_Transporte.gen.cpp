// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GalagaUSFX_LAB06/NaveAerea_Transporte.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNaveAerea_Transporte() {}
// Cross Module References
	GALAGAUSFX_LAB06_API UClass* Z_Construct_UClass_ANaveAerea_Transporte_NoRegister();
	GALAGAUSFX_LAB06_API UClass* Z_Construct_UClass_ANaveAerea_Transporte();
	GALAGAUSFX_LAB06_API UClass* Z_Construct_UClass_ANaveEnemiga();
	UPackage* Z_Construct_UPackage__Script_GalagaUSFX_LAB06();
// End Cross Module References
	void ANaveAerea_Transporte::StaticRegisterNativesANaveAerea_Transporte()
	{
	}
	UClass* Z_Construct_UClass_ANaveAerea_Transporte_NoRegister()
	{
		return ANaveAerea_Transporte::StaticClass();
	}
	struct Z_Construct_UClass_ANaveAerea_Transporte_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VelocidadYTransporte_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VelocidadYTransporte;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANaveAerea_Transporte_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ANaveEnemiga,
		(UObject* (*)())Z_Construct_UPackage__Script_GalagaUSFX_LAB06,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveAerea_Transporte_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "NaveAerea_Transporte.h" },
		{ "ModuleRelativePath", "NaveAerea_Transporte.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveAerea_Transporte_Statics::NewProp_VelocidadYTransporte_MetaData[] = {
		{ "Category", "Velocidad Nave Aerea Transporte" },
		{ "Comment", "// Velocidad en el eje Y\n" },
		{ "ModuleRelativePath", "NaveAerea_Transporte.h" },
		{ "ToolTip", "Velocidad en el eje Y" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANaveAerea_Transporte_Statics::NewProp_VelocidadYTransporte = { "VelocidadYTransporte", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANaveAerea_Transporte, VelocidadYTransporte), METADATA_PARAMS(Z_Construct_UClass_ANaveAerea_Transporte_Statics::NewProp_VelocidadYTransporte_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveAerea_Transporte_Statics::NewProp_VelocidadYTransporte_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANaveAerea_Transporte_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANaveAerea_Transporte_Statics::NewProp_VelocidadYTransporte,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANaveAerea_Transporte_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANaveAerea_Transporte>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANaveAerea_Transporte_Statics::ClassParams = {
		&ANaveAerea_Transporte::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ANaveAerea_Transporte_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ANaveAerea_Transporte_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ANaveAerea_Transporte_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveAerea_Transporte_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANaveAerea_Transporte()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANaveAerea_Transporte_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANaveAerea_Transporte, 861272518);
	template<> GALAGAUSFX_LAB06_API UClass* StaticClass<ANaveAerea_Transporte>()
	{
		return ANaveAerea_Transporte::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANaveAerea_Transporte(Z_Construct_UClass_ANaveAerea_Transporte, &ANaveAerea_Transporte::StaticClass, TEXT("/Script/GalagaUSFX_LAB06"), TEXT("ANaveAerea_Transporte"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANaveAerea_Transporte);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

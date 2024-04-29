// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GalagaUSFX_LAB06/NaveAcuatica_Espia.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNaveAcuatica_Espia() {}
// Cross Module References
	GALAGAUSFX_LAB06_API UClass* Z_Construct_UClass_ANaveAcuatica_Espia_NoRegister();
	GALAGAUSFX_LAB06_API UClass* Z_Construct_UClass_ANaveAcuatica_Espia();
	GALAGAUSFX_LAB06_API UClass* Z_Construct_UClass_ANaveEnemiga();
	UPackage* Z_Construct_UPackage__Script_GalagaUSFX_LAB06();
// End Cross Module References
	void ANaveAcuatica_Espia::StaticRegisterNativesANaveAcuatica_Espia()
	{
	}
	UClass* Z_Construct_UClass_ANaveAcuatica_Espia_NoRegister()
	{
		return ANaveAcuatica_Espia::StaticClass();
	}
	struct Z_Construct_UClass_ANaveAcuatica_Espia_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VelocidadYEspia_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VelocidadYEspia;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANaveAcuatica_Espia_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ANaveEnemiga,
		(UObject* (*)())Z_Construct_UPackage__Script_GalagaUSFX_LAB06,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveAcuatica_Espia_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "NaveAcuatica_Espia.h" },
		{ "ModuleRelativePath", "NaveAcuatica_Espia.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveAcuatica_Espia_Statics::NewProp_VelocidadYEspia_MetaData[] = {
		{ "Category", "Velocidad Nave Acuatica Espia" },
		{ "Comment", "// Velocidad en el eje Y\n" },
		{ "ModuleRelativePath", "NaveAcuatica_Espia.h" },
		{ "ToolTip", "Velocidad en el eje Y" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANaveAcuatica_Espia_Statics::NewProp_VelocidadYEspia = { "VelocidadYEspia", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANaveAcuatica_Espia, VelocidadYEspia), METADATA_PARAMS(Z_Construct_UClass_ANaveAcuatica_Espia_Statics::NewProp_VelocidadYEspia_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveAcuatica_Espia_Statics::NewProp_VelocidadYEspia_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANaveAcuatica_Espia_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANaveAcuatica_Espia_Statics::NewProp_VelocidadYEspia,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANaveAcuatica_Espia_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANaveAcuatica_Espia>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANaveAcuatica_Espia_Statics::ClassParams = {
		&ANaveAcuatica_Espia::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ANaveAcuatica_Espia_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ANaveAcuatica_Espia_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ANaveAcuatica_Espia_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveAcuatica_Espia_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANaveAcuatica_Espia()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANaveAcuatica_Espia_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANaveAcuatica_Espia, 298129549);
	template<> GALAGAUSFX_LAB06_API UClass* StaticClass<ANaveAcuatica_Espia>()
	{
		return ANaveAcuatica_Espia::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANaveAcuatica_Espia(Z_Construct_UClass_ANaveAcuatica_Espia, &ANaveAcuatica_Espia::StaticClass, TEXT("/Script/GalagaUSFX_LAB06"), TEXT("ANaveAcuatica_Espia"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANaveAcuatica_Espia);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

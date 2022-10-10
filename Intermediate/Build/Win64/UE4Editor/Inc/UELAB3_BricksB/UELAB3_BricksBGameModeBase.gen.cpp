// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UELAB3_BricksB/UELAB3_BricksBGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUELAB3_BricksBGameModeBase() {}
// Cross Module References
	UELAB3_BRICKSB_API UClass* Z_Construct_UClass_AUELAB3_BricksBGameModeBase_NoRegister();
	UELAB3_BRICKSB_API UClass* Z_Construct_UClass_AUELAB3_BricksBGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_UELAB3_BricksB();
// End Cross Module References
	void AUELAB3_BricksBGameModeBase::StaticRegisterNativesAUELAB3_BricksBGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AUELAB3_BricksBGameModeBase_NoRegister()
	{
		return AUELAB3_BricksBGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AUELAB3_BricksBGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUELAB3_BricksBGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_UELAB3_BricksB,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUELAB3_BricksBGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "//Game mode es en realidad las reglas de juego\n" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "UELAB3_BricksBGameModeBase.h" },
		{ "ModuleRelativePath", "UELAB3_BricksBGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "Game mode es en realidad las reglas de juego" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUELAB3_BricksBGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUELAB3_BricksBGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AUELAB3_BricksBGameModeBase_Statics::ClassParams = {
		&AUELAB3_BricksBGameModeBase::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AUELAB3_BricksBGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AUELAB3_BricksBGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUELAB3_BricksBGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AUELAB3_BricksBGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AUELAB3_BricksBGameModeBase, 3634556417);
	template<> UELAB3_BRICKSB_API UClass* StaticClass<AUELAB3_BricksBGameModeBase>()
	{
		return AUELAB3_BricksBGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AUELAB3_BricksBGameModeBase(Z_Construct_UClass_AUELAB3_BricksBGameModeBase, &AUELAB3_BricksBGameModeBase::StaticClass, TEXT("/Script/UELAB3_BricksB"), TEXT("AUELAB3_BricksBGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUELAB3_BricksBGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

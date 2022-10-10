// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UELAB3_BricksB/APW_Paddle.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAPW_Paddle() {}
// Cross Module References
	UELAB3_BRICKSB_API UClass* Z_Construct_UClass_AAPW_Paddle_NoRegister();
	UELAB3_BRICKSB_API UClass* Z_Construct_UClass_AAPW_Paddle();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_UELAB3_BricksB();
// End Cross Module References
	void AAPW_Paddle::StaticRegisterNativesAAPW_Paddle()
	{
	}
	UClass* Z_Construct_UClass_AAPW_Paddle_NoRegister()
	{
		return AAPW_Paddle::StaticClass();
	}
	struct Z_Construct_UClass_AAPW_Paddle_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAPW_Paddle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_UELAB3_BricksB,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAPW_Paddle_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "APW_Paddle.h" },
		{ "ModuleRelativePath", "APW_Paddle.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAPW_Paddle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAPW_Paddle>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAPW_Paddle_Statics::ClassParams = {
		&AAPW_Paddle::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAPW_Paddle_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAPW_Paddle_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAPW_Paddle()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAPW_Paddle_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAPW_Paddle, 1477110768);
	template<> UELAB3_BRICKSB_API UClass* StaticClass<AAPW_Paddle>()
	{
		return AAPW_Paddle::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAPW_Paddle(Z_Construct_UClass_AAPW_Paddle, &AAPW_Paddle::StaticClass, TEXT("/Script/UELAB3_BricksB"), TEXT("AAPW_Paddle"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAPW_Paddle);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

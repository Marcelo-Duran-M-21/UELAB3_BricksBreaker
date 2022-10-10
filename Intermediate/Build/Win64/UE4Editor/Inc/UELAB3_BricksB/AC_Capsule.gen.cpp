// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UELAB3_BricksB/AC_Capsule.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAC_Capsule() {}
// Cross Module References
	UELAB3_BRICKSB_API UClass* Z_Construct_UClass_AAC_Capsule_NoRegister();
	UELAB3_BRICKSB_API UClass* Z_Construct_UClass_AAC_Capsule();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_UELAB3_BricksB();
// End Cross Module References
	void AAC_Capsule::StaticRegisterNativesAAC_Capsule()
	{
	}
	UClass* Z_Construct_UClass_AAC_Capsule_NoRegister()
	{
		return AAC_Capsule::StaticClass();
	}
	struct Z_Construct_UClass_AAC_Capsule_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAC_Capsule_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_UELAB3_BricksB,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAC_Capsule_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AC_Capsule.h" },
		{ "ModuleRelativePath", "AC_Capsule.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAC_Capsule_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAC_Capsule>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAC_Capsule_Statics::ClassParams = {
		&AAC_Capsule::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AAC_Capsule_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAC_Capsule_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAC_Capsule()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAC_Capsule_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAC_Capsule, 411692886);
	template<> UELAB3_BRICKSB_API UClass* StaticClass<AAC_Capsule>()
	{
		return AAC_Capsule::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAC_Capsule(Z_Construct_UClass_AAC_Capsule, &AAC_Capsule::StaticClass, TEXT("/Script/UELAB3_BricksB"), TEXT("AAC_Capsule"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAC_Capsule);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TopDown2dUe4/TopDown2dUe4GameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTopDown2dUe4GameModeBase() {}
// Cross Module References
	TOPDOWN2DUE4_API UClass* Z_Construct_UClass_ATopDown2dUe4GameModeBase_NoRegister();
	TOPDOWN2DUE4_API UClass* Z_Construct_UClass_ATopDown2dUe4GameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_TopDown2dUe4();
// End Cross Module References
	void ATopDown2dUe4GameModeBase::StaticRegisterNativesATopDown2dUe4GameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ATopDown2dUe4GameModeBase_NoRegister()
	{
		return ATopDown2dUe4GameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ATopDown2dUe4GameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATopDown2dUe4GameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TopDown2dUe4,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATopDown2dUe4GameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "TopDown2dUe4GameModeBase.h" },
		{ "ModuleRelativePath", "TopDown2dUe4GameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATopDown2dUe4GameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATopDown2dUe4GameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATopDown2dUe4GameModeBase_Statics::ClassParams = {
		&ATopDown2dUe4GameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ATopDown2dUe4GameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATopDown2dUe4GameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATopDown2dUe4GameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATopDown2dUe4GameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATopDown2dUe4GameModeBase, 3443311437);
	template<> TOPDOWN2DUE4_API UClass* StaticClass<ATopDown2dUe4GameModeBase>()
	{
		return ATopDown2dUe4GameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATopDown2dUe4GameModeBase(Z_Construct_UClass_ATopDown2dUe4GameModeBase, &ATopDown2dUe4GameModeBase::StaticClass, TEXT("/Script/TopDown2dUe4"), TEXT("ATopDown2dUe4GameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATopDown2dUe4GameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

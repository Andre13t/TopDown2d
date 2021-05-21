// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TopDown2dUe4/LimitOfFieldComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLimitOfFieldComponent() {}
// Cross Module References
	TOPDOWN2DUE4_API UClass* Z_Construct_UClass_ULimitOfFieldComponent_NoRegister();
	TOPDOWN2DUE4_API UClass* Z_Construct_UClass_ULimitOfFieldComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_TopDown2dUe4();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	DEFINE_FUNCTION(ULimitOfFieldComponent::execSetupBoxToChangeCamera)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_widthMAP);
		P_GET_PROPERTY(FIntProperty,Z_Param_heightMAP);
		P_GET_STRUCT(FVector,Z_Param_BoxExtent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetupBoxToChangeCamera(Z_Param_widthMAP,Z_Param_heightMAP,Z_Param_BoxExtent);
		P_NATIVE_END;
	}
	void ULimitOfFieldComponent::StaticRegisterNativesULimitOfFieldComponent()
	{
		UClass* Class = ULimitOfFieldComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetupBoxToChangeCamera", &ULimitOfFieldComponent::execSetupBoxToChangeCamera },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULimitOfFieldComponent_SetupBoxToChangeCamera_Statics
	{
		struct LimitOfFieldComponent_eventSetupBoxToChangeCamera_Parms
		{
			int32 widthMAP;
			int32 heightMAP;
			FVector BoxExtent;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoxExtent;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_heightMAP;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_widthMAP;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULimitOfFieldComponent_SetupBoxToChangeCamera_Statics::NewProp_BoxExtent = { "BoxExtent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LimitOfFieldComponent_eventSetupBoxToChangeCamera_Parms, BoxExtent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULimitOfFieldComponent_SetupBoxToChangeCamera_Statics::NewProp_heightMAP = { "heightMAP", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LimitOfFieldComponent_eventSetupBoxToChangeCamera_Parms, heightMAP), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULimitOfFieldComponent_SetupBoxToChangeCamera_Statics::NewProp_widthMAP = { "widthMAP", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LimitOfFieldComponent_eventSetupBoxToChangeCamera_Parms, widthMAP), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULimitOfFieldComponent_SetupBoxToChangeCamera_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULimitOfFieldComponent_SetupBoxToChangeCamera_Statics::NewProp_BoxExtent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULimitOfFieldComponent_SetupBoxToChangeCamera_Statics::NewProp_heightMAP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULimitOfFieldComponent_SetupBoxToChangeCamera_Statics::NewProp_widthMAP,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULimitOfFieldComponent_SetupBoxToChangeCamera_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "LimitOfFieldComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULimitOfFieldComponent_SetupBoxToChangeCamera_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULimitOfFieldComponent, nullptr, "SetupBoxToChangeCamera", nullptr, nullptr, sizeof(LimitOfFieldComponent_eventSetupBoxToChangeCamera_Parms), Z_Construct_UFunction_ULimitOfFieldComponent_SetupBoxToChangeCamera_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULimitOfFieldComponent_SetupBoxToChangeCamera_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULimitOfFieldComponent_SetupBoxToChangeCamera_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULimitOfFieldComponent_SetupBoxToChangeCamera_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULimitOfFieldComponent_SetupBoxToChangeCamera()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULimitOfFieldComponent_SetupBoxToChangeCamera_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULimitOfFieldComponent_NoRegister()
	{
		return ULimitOfFieldComponent::StaticClass();
	}
	struct Z_Construct_UClass_ULimitOfFieldComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_newPoss4_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_newPoss4;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_newPoss3_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_newPoss3;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_newPoss2_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_newPoss2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_newPoss1_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_newPoss1;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULimitOfFieldComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TopDown2dUe4,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULimitOfFieldComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULimitOfFieldComponent_SetupBoxToChangeCamera, "SetupBoxToChangeCamera" }, // 1902433156
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULimitOfFieldComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "LimitOfFieldComponent.h" },
		{ "ModuleRelativePath", "LimitOfFieldComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULimitOfFieldComponent_Statics::NewProp_newPoss4_MetaData[] = {
		{ "Category", "LimitOfFieldComponent" },
		{ "ModuleRelativePath", "LimitOfFieldComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULimitOfFieldComponent_Statics::NewProp_newPoss4 = { "newPoss4", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULimitOfFieldComponent, newPoss4), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ULimitOfFieldComponent_Statics::NewProp_newPoss4_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULimitOfFieldComponent_Statics::NewProp_newPoss4_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULimitOfFieldComponent_Statics::NewProp_newPoss3_MetaData[] = {
		{ "Category", "LimitOfFieldComponent" },
		{ "ModuleRelativePath", "LimitOfFieldComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULimitOfFieldComponent_Statics::NewProp_newPoss3 = { "newPoss3", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULimitOfFieldComponent, newPoss3), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ULimitOfFieldComponent_Statics::NewProp_newPoss3_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULimitOfFieldComponent_Statics::NewProp_newPoss3_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULimitOfFieldComponent_Statics::NewProp_newPoss2_MetaData[] = {
		{ "Category", "LimitOfFieldComponent" },
		{ "ModuleRelativePath", "LimitOfFieldComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULimitOfFieldComponent_Statics::NewProp_newPoss2 = { "newPoss2", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULimitOfFieldComponent, newPoss2), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ULimitOfFieldComponent_Statics::NewProp_newPoss2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULimitOfFieldComponent_Statics::NewProp_newPoss2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULimitOfFieldComponent_Statics::NewProp_newPoss1_MetaData[] = {
		{ "Category", "LimitOfFieldComponent" },
		{ "ModuleRelativePath", "LimitOfFieldComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULimitOfFieldComponent_Statics::NewProp_newPoss1 = { "newPoss1", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULimitOfFieldComponent, newPoss1), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ULimitOfFieldComponent_Statics::NewProp_newPoss1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULimitOfFieldComponent_Statics::NewProp_newPoss1_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULimitOfFieldComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULimitOfFieldComponent_Statics::NewProp_newPoss4,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULimitOfFieldComponent_Statics::NewProp_newPoss3,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULimitOfFieldComponent_Statics::NewProp_newPoss2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULimitOfFieldComponent_Statics::NewProp_newPoss1,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULimitOfFieldComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULimitOfFieldComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULimitOfFieldComponent_Statics::ClassParams = {
		&ULimitOfFieldComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULimitOfFieldComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULimitOfFieldComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ULimitOfFieldComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULimitOfFieldComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULimitOfFieldComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULimitOfFieldComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULimitOfFieldComponent, 3553339214);
	template<> TOPDOWN2DUE4_API UClass* StaticClass<ULimitOfFieldComponent>()
	{
		return ULimitOfFieldComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULimitOfFieldComponent(Z_Construct_UClass_ULimitOfFieldComponent, &ULimitOfFieldComponent::StaticClass, TEXT("/Script/TopDown2dUe4"), TEXT("ULimitOfFieldComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULimitOfFieldComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "cpp_quickstartGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodecpp_quickstartGameModeBase() {}
// Cross Module References
	CPP_QUICKSTART_API UClass* Z_Construct_UClass_Acpp_quickstartGameModeBase_NoRegister();
	CPP_QUICKSTART_API UClass* Z_Construct_UClass_Acpp_quickstartGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_cpp_quickstart();
// End Cross Module References
	void Acpp_quickstartGameModeBase::StaticRegisterNativesAcpp_quickstartGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_Acpp_quickstartGameModeBase_NoRegister()
	{
		return Acpp_quickstartGameModeBase::StaticClass();
	}
	UClass* Z_Construct_UClass_Acpp_quickstartGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AGameModeBase,
				(UObject* (*)())Z_Construct_UPackage__Script_cpp_quickstart,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "cpp_quickstartGameModeBase.h" },
				{ "ModuleRelativePath", "cpp_quickstartGameModeBase.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<Acpp_quickstartGameModeBase>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&Acpp_quickstartGameModeBase::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900288u,
				nullptr, 0,
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(Acpp_quickstartGameModeBase, 1650792314);
	static FCompiledInDefer Z_CompiledInDefer_UClass_Acpp_quickstartGameModeBase(Z_Construct_UClass_Acpp_quickstartGameModeBase, &Acpp_quickstartGameModeBase::StaticClass, TEXT("/Script/cpp_quickstart"), TEXT("Acpp_quickstartGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(Acpp_quickstartGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

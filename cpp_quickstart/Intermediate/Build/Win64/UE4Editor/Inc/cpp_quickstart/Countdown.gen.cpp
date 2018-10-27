// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Countdown.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCountdown() {}
// Cross Module References
	CPP_QUICKSTART_API UClass* Z_Construct_UClass_ACountdown_NoRegister();
	CPP_QUICKSTART_API UClass* Z_Construct_UClass_ACountdown();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_cpp_quickstart();
// End Cross Module References
	void ACountdown::StaticRegisterNativesACountdown()
	{
	}
	UClass* Z_Construct_UClass_ACountdown_NoRegister()
	{
		return ACountdown::StaticClass();
	}
	UClass* Z_Construct_UClass_ACountdown()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AActor,
				(UObject* (*)())Z_Construct_UPackage__Script_cpp_quickstart,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Countdown.h" },
				{ "ModuleRelativePath", "Countdown.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ACountdown>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ACountdown::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
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
	IMPLEMENT_CLASS(ACountdown, 3596145565);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACountdown(Z_Construct_UClass_ACountdown, &ACountdown::StaticClass, TEXT("/Script/cpp_quickstart"), TEXT("ACountdown"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACountdown);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

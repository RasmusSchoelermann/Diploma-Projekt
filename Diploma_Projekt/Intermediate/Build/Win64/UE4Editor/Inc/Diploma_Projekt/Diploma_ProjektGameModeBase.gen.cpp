// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Diploma_ProjektGameModeBase.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDiploma_ProjektGameModeBase() {}
// Cross Module References
	DIPLOMA_PROJEKT_API UClass* Z_Construct_UClass_ADiploma_ProjektGameModeBase_NoRegister();
	DIPLOMA_PROJEKT_API UClass* Z_Construct_UClass_ADiploma_ProjektGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Diploma_Projekt();
// End Cross Module References
	void ADiploma_ProjektGameModeBase::StaticRegisterNativesADiploma_ProjektGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ADiploma_ProjektGameModeBase_NoRegister()
	{
		return ADiploma_ProjektGameModeBase::StaticClass();
	}
	UClass* Z_Construct_UClass_ADiploma_ProjektGameModeBase()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AGameModeBase();
			Z_Construct_UPackage__Script_Diploma_Projekt();
			OuterClass = ADiploma_ProjektGameModeBase::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20900288u;


				static TCppClassTypeInfo<TCppClassTypeTraits<ADiploma_ProjektGameModeBase> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("Diploma_ProjektGameModeBase.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Diploma_ProjektGameModeBase.h"));
				MetaData->SetValue(OuterClass, TEXT("ShowCategories"), TEXT("Input|MouseInput Input|TouchInput"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADiploma_ProjektGameModeBase, 2909612222);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADiploma_ProjektGameModeBase(Z_Construct_UClass_ADiploma_ProjektGameModeBase, &ADiploma_ProjektGameModeBase::StaticClass, TEXT("/Script/Diploma_Projekt"), TEXT("ADiploma_ProjektGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADiploma_ProjektGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION

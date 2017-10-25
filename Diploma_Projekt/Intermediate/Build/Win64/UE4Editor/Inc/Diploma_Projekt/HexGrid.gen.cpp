// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "HexGrid.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHexGrid() {}
// Cross Module References
	DIPLOMA_PROJEKT_API UClass* Z_Construct_UClass_AHexGrid_NoRegister();
	DIPLOMA_PROJEKT_API UClass* Z_Construct_UClass_AHexGrid();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Diploma_Projekt();
// End Cross Module References
	void AHexGrid::StaticRegisterNativesAHexGrid()
	{
	}
	UClass* Z_Construct_UClass_AHexGrid_NoRegister()
	{
		return AHexGrid::StaticClass();
	}
	UClass* Z_Construct_UClass_AHexGrid()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage__Script_Diploma_Projekt();
			OuterClass = AHexGrid::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20900080u;


				static TCppClassTypeInfo<TCppClassTypeTraits<AHexGrid> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("HexGrid.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("HexGrid.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AHexGrid, 1605865654);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHexGrid(Z_Construct_UClass_AHexGrid, &AHexGrid::StaticClass, TEXT("/Script/Diploma_Projekt"), TEXT("AHexGrid"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHexGrid);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION

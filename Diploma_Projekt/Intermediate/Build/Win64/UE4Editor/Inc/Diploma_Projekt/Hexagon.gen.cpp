// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Hexagon.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHexagon() {}
// Cross Module References
	DIPLOMA_PROJEKT_API UFunction* Z_Construct_UFunction_AHexagon_GetGridIndexi();
	DIPLOMA_PROJEKT_API UClass* Z_Construct_UClass_AHexagon();
	DIPLOMA_PROJEKT_API UFunction* Z_Construct_UFunction_AHexagon_GetGridIndexj();
	DIPLOMA_PROJEKT_API UClass* Z_Construct_UClass_AHexagon_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Diploma_Projekt();
	PROCEDURALMESHCOMPONENT_API UClass* Z_Construct_UClass_UProceduralMeshComponent_NoRegister();
// End Cross Module References
	void AHexagon::StaticRegisterNativesAHexagon()
	{
		UClass* Class = AHexagon::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "GetGridIndexi", (Native)&AHexagon::execGetGridIndexi },
			{ "GetGridIndexj", (Native)&AHexagon::execGetGridIndexj },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_AHexagon_GetGridIndexi()
	{
		struct Hexagon_eventGetGridIndexi_Parms
		{
			int32 ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_AHexagon();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetGridIndexi"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(Hexagon_eventGetGridIndexi_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UUnsizedIntProperty(CPP_PROPERTY_BASE(ReturnValue, Hexagon_eventGetGridIndexi_Parms), 0x0010000000000580);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("HexData"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Hexagon.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AHexagon_GetGridIndexj()
	{
		struct Hexagon_eventGetGridIndexj_Parms
		{
			int32 ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_AHexagon();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetGridIndexj"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(Hexagon_eventGetGridIndexj_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UUnsizedIntProperty(CPP_PROPERTY_BASE(ReturnValue, Hexagon_eventGetGridIndexj_Parms), 0x0010000000000580);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("HexData"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Hexagon.h"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AHexagon_NoRegister()
	{
		return AHexagon::StaticClass();
	}
	UClass* Z_Construct_UClass_AHexagon()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage__Script_Diploma_Projekt();
			OuterClass = AHexagon::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20900080u;

				OuterClass->LinkChild(Z_Construct_UFunction_AHexagon_GetGridIndexi());
				OuterClass->LinkChild(Z_Construct_UFunction_AHexagon_GetGridIndexj());

				UProperty* NewProp_mesh = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("mesh"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(mesh, AHexagon), 0x00400000000a0009, Z_Construct_UClass_UProceduralMeshComponent_NoRegister());
				UProperty* NewProp_j = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("j"), RF_Public|RF_Transient|RF_MarkAsNative) UUnsizedIntProperty(CPP_PROPERTY_BASE(j, AHexagon), 0x0010000000000001);
				UProperty* NewProp_i = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("i"), RF_Public|RF_Transient|RF_MarkAsNative) UUnsizedIntProperty(CPP_PROPERTY_BASE(i, AHexagon), 0x0010000000000001);
				UProperty* NewProp_Nachbarn = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Nachbarn"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Nachbarn, AHexagon), 0x0010000000000001, Z_Construct_UClass_AHexagon_NoRegister());
				NewProp_Nachbarn->ArrayDim = CPP_ARRAY_DIM(Nachbarn, AHexagon);
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AHexagon_GetGridIndexi(), "GetGridIndexi"); // 981822034
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AHexagon_GetGridIndexj(), "GetGridIndexj"); // 4218980431
				static TCppClassTypeInfo<TCppClassTypeTraits<AHexagon> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("Hexagon.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Hexagon.h"));
				MetaData->SetValue(NewProp_mesh, TEXT("Category"), TEXT("Hexagon"));
				MetaData->SetValue(NewProp_mesh, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_mesh, TEXT("ModuleRelativePath"), TEXT("Hexagon.h"));
				MetaData->SetValue(NewProp_j, TEXT("Category"), TEXT("Hexagon"));
				MetaData->SetValue(NewProp_j, TEXT("ModuleRelativePath"), TEXT("Hexagon.h"));
				MetaData->SetValue(NewProp_i, TEXT("Category"), TEXT("Hexagon"));
				MetaData->SetValue(NewProp_i, TEXT("ModuleRelativePath"), TEXT("Hexagon.h"));
				MetaData->SetValue(NewProp_Nachbarn, TEXT("Category"), TEXT("Hexagon"));
				MetaData->SetValue(NewProp_Nachbarn, TEXT("ModuleRelativePath"), TEXT("Hexagon.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AHexagon, 984152276);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHexagon(Z_Construct_UClass_AHexagon, &AHexagon::StaticClass, TEXT("/Script/Diploma_Projekt"), TEXT("AHexagon"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHexagon);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION

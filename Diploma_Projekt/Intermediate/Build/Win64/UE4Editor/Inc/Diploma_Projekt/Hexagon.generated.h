// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DIPLOMA_PROJEKT_Hexagon_generated_h
#error "Hexagon.generated.h already included, missing '#pragma once' in Hexagon.h"
#endif
#define DIPLOMA_PROJEKT_Hexagon_generated_h

#define Diploma_Projekt_Source_Diploma_Projekt_Hexagon_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetGridIndexj) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=this->GetGridIndexj(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGridIndexi) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=this->GetGridIndexi(); \
		P_NATIVE_END; \
	}


#define Diploma_Projekt_Source_Diploma_Projekt_Hexagon_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetGridIndexj) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=this->GetGridIndexj(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGridIndexi) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=this->GetGridIndexi(); \
		P_NATIVE_END; \
	}


#define Diploma_Projekt_Source_Diploma_Projekt_Hexagon_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHexagon(); \
	friend DIPLOMA_PROJEKT_API class UClass* Z_Construct_UClass_AHexagon(); \
public: \
	DECLARE_CLASS(AHexagon, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Diploma_Projekt"), NO_API) \
	DECLARE_SERIALIZER(AHexagon) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Diploma_Projekt_Source_Diploma_Projekt_Hexagon_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAHexagon(); \
	friend DIPLOMA_PROJEKT_API class UClass* Z_Construct_UClass_AHexagon(); \
public: \
	DECLARE_CLASS(AHexagon, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Diploma_Projekt"), NO_API) \
	DECLARE_SERIALIZER(AHexagon) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Diploma_Projekt_Source_Diploma_Projekt_Hexagon_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AHexagon(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AHexagon) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHexagon); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHexagon); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHexagon(AHexagon&&); \
	NO_API AHexagon(const AHexagon&); \
public:


#define Diploma_Projekt_Source_Diploma_Projekt_Hexagon_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHexagon(AHexagon&&); \
	NO_API AHexagon(const AHexagon&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHexagon); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHexagon); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AHexagon)


#define Diploma_Projekt_Source_Diploma_Projekt_Hexagon_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mesh() { return STRUCT_OFFSET(AHexagon, mesh); }


#define Diploma_Projekt_Source_Diploma_Projekt_Hexagon_h_10_PROLOG
#define Diploma_Projekt_Source_Diploma_Projekt_Hexagon_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Diploma_Projekt_Source_Diploma_Projekt_Hexagon_h_13_PRIVATE_PROPERTY_OFFSET \
	Diploma_Projekt_Source_Diploma_Projekt_Hexagon_h_13_RPC_WRAPPERS \
	Diploma_Projekt_Source_Diploma_Projekt_Hexagon_h_13_INCLASS \
	Diploma_Projekt_Source_Diploma_Projekt_Hexagon_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Diploma_Projekt_Source_Diploma_Projekt_Hexagon_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Diploma_Projekt_Source_Diploma_Projekt_Hexagon_h_13_PRIVATE_PROPERTY_OFFSET \
	Diploma_Projekt_Source_Diploma_Projekt_Hexagon_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Diploma_Projekt_Source_Diploma_Projekt_Hexagon_h_13_INCLASS_NO_PURE_DECLS \
	Diploma_Projekt_Source_Diploma_Projekt_Hexagon_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Diploma_Projekt_Source_Diploma_Projekt_Hexagon_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PRINCES_Plataforma_generated_h
#error "Plataforma.generated.h already included, missing '#pragma once' in Plataforma.h"
#endif
#define PRINCES_Plataforma_generated_h

#define Princes_Source_Princes_Plataforma_h_12_SPARSE_DATA
#define Princes_Source_Princes_Plataforma_h_12_RPC_WRAPPERS
#define Princes_Source_Princes_Plataforma_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Princes_Source_Princes_Plataforma_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlataforma(); \
	friend struct Z_Construct_UClass_APlataforma_Statics; \
public: \
	DECLARE_CLASS(APlataforma, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Princes"), NO_API) \
	DECLARE_SERIALIZER(APlataforma)


#define Princes_Source_Princes_Plataforma_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAPlataforma(); \
	friend struct Z_Construct_UClass_APlataforma_Statics; \
public: \
	DECLARE_CLASS(APlataforma, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Princes"), NO_API) \
	DECLARE_SERIALIZER(APlataforma)


#define Princes_Source_Princes_Plataforma_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlataforma(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlataforma) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlataforma); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlataforma); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlataforma(APlataforma&&); \
	NO_API APlataforma(const APlataforma&); \
public:


#define Princes_Source_Princes_Plataforma_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlataforma(APlataforma&&); \
	NO_API APlataforma(const APlataforma&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlataforma); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlataforma); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APlataforma)


#define Princes_Source_Princes_Plataforma_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PlataformaMesh() { return STRUCT_OFFSET(APlataforma, PlataformaMesh); } \
	FORCEINLINE static uint32 __PPO__Amplitude() { return STRUCT_OFFSET(APlataforma, Amplitude); } \
	FORCEINLINE static uint32 __PPO__Frequency() { return STRUCT_OFFSET(APlataforma, Frequency); }


#define Princes_Source_Princes_Plataforma_h_9_PROLOG
#define Princes_Source_Princes_Plataforma_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Princes_Source_Princes_Plataforma_h_12_PRIVATE_PROPERTY_OFFSET \
	Princes_Source_Princes_Plataforma_h_12_SPARSE_DATA \
	Princes_Source_Princes_Plataforma_h_12_RPC_WRAPPERS \
	Princes_Source_Princes_Plataforma_h_12_INCLASS \
	Princes_Source_Princes_Plataforma_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Princes_Source_Princes_Plataforma_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Princes_Source_Princes_Plataforma_h_12_PRIVATE_PROPERTY_OFFSET \
	Princes_Source_Princes_Plataforma_h_12_SPARSE_DATA \
	Princes_Source_Princes_Plataforma_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Princes_Source_Princes_Plataforma_h_12_INCLASS_NO_PURE_DECLS \
	Princes_Source_Princes_Plataforma_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PRINCES_API UClass* StaticClass<class APlataforma>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Princes_Source_Princes_Plataforma_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

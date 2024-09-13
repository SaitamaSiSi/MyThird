// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interface/HealthInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYTHIRD_HealthInterface_generated_h
#error "HealthInterface.generated.h already included, missing '#pragma once' in HealthInterface.h"
#endif
#define MYTHIRD_HealthInterface_generated_h

#define FID_MyThird_Source_MyThird_Public_Interface_HealthInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDeath); \
	DECLARE_FUNCTION(execDamage);


#define FID_MyThird_Source_MyThird_Public_Interface_HealthInterface_h_13_CALLBACK_WRAPPERS
#define FID_MyThird_Source_MyThird_Public_Interface_HealthInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MYTHIRD_API UHealthInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UHealthInterface(UHealthInterface&&); \
	UHealthInterface(const UHealthInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MYTHIRD_API, UHealthInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHealthInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHealthInterface) \
	MYTHIRD_API virtual ~UHealthInterface();


#define FID_MyThird_Source_MyThird_Public_Interface_HealthInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUHealthInterface(); \
	friend struct Z_Construct_UClass_UHealthInterface_Statics; \
public: \
	DECLARE_CLASS(UHealthInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/MyThird"), MYTHIRD_API) \
	DECLARE_SERIALIZER(UHealthInterface)


#define FID_MyThird_Source_MyThird_Public_Interface_HealthInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_MyThird_Source_MyThird_Public_Interface_HealthInterface_h_13_GENERATED_UINTERFACE_BODY() \
	FID_MyThird_Source_MyThird_Public_Interface_HealthInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_MyThird_Source_MyThird_Public_Interface_HealthInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IHealthInterface() {} \
public: \
	typedef UHealthInterface UClassType; \
	typedef IHealthInterface ThisClass; \
	static void Execute_Damage(UObject* O); \
	static void Execute_Death(UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_MyThird_Source_MyThird_Public_Interface_HealthInterface_h_10_PROLOG
#define FID_MyThird_Source_MyThird_Public_Interface_HealthInterface_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyThird_Source_MyThird_Public_Interface_HealthInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MyThird_Source_MyThird_Public_Interface_HealthInterface_h_13_CALLBACK_WRAPPERS \
	FID_MyThird_Source_MyThird_Public_Interface_HealthInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYTHIRD_API UClass* StaticClass<class UHealthInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MyThird_Source_MyThird_Public_Interface_HealthInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

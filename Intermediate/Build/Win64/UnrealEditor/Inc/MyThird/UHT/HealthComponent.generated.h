// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Component/HealthComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYTHIRD_HealthComponent_generated_h
#error "HealthComponent.generated.h already included, missing '#pragma once' in HealthComponent.h"
#endif
#define MYTHIRD_HealthComponent_generated_h

#define FID_MyThird_Source_MyThird_Public_Component_HealthComponent_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHealthComponent(); \
	friend struct Z_Construct_UClass_UHealthComponent_Statics; \
public: \
	DECLARE_CLASS(UHealthComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyThird"), NO_API) \
	DECLARE_SERIALIZER(UHealthComponent)


#define FID_MyThird_Source_MyThird_Public_Component_HealthComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UHealthComponent(UHealthComponent&&); \
	UHealthComponent(const UHealthComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHealthComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHealthComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UHealthComponent) \
	NO_API virtual ~UHealthComponent();


#define FID_MyThird_Source_MyThird_Public_Component_HealthComponent_h_10_PROLOG
#define FID_MyThird_Source_MyThird_Public_Component_HealthComponent_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyThird_Source_MyThird_Public_Component_HealthComponent_h_13_INCLASS_NO_PURE_DECLS \
	FID_MyThird_Source_MyThird_Public_Component_HealthComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYTHIRD_API UClass* StaticClass<class UHealthComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MyThird_Source_MyThird_Public_Component_HealthComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

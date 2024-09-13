// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HUD/HealthWidget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYTHIRD_HealthWidget_generated_h
#error "HealthWidget.generated.h already included, missing '#pragma once' in HealthWidget.h"
#endif
#define MYTHIRD_HealthWidget_generated_h

#define FID_MyThird_Source_MyThird_Public_HUD_HealthWidget_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHealthWidget(); \
	friend struct Z_Construct_UClass_UHealthWidget_Statics; \
public: \
	DECLARE_CLASS(UHealthWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MyThird"), NO_API) \
	DECLARE_SERIALIZER(UHealthWidget)


#define FID_MyThird_Source_MyThird_Public_HUD_HealthWidget_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHealthWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UHealthWidget(UHealthWidget&&); \
	UHealthWidget(const UHealthWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHealthWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHealthWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHealthWidget) \
	NO_API virtual ~UHealthWidget();


#define FID_MyThird_Source_MyThird_Public_HUD_HealthWidget_h_13_PROLOG
#define FID_MyThird_Source_MyThird_Public_HUD_HealthWidget_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyThird_Source_MyThird_Public_HUD_HealthWidget_h_16_INCLASS_NO_PURE_DECLS \
	FID_MyThird_Source_MyThird_Public_HUD_HealthWidget_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYTHIRD_API UClass* StaticClass<class UHealthWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MyThird_Source_MyThird_Public_HUD_HealthWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

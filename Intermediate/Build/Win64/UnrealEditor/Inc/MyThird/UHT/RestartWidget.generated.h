// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HUD/RestartWidget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYTHIRD_RestartWidget_generated_h
#error "RestartWidget.generated.h already included, missing '#pragma once' in RestartWidget.h"
#endif
#define MYTHIRD_RestartWidget_generated_h

#define FID_MyThird_Source_MyThird_Public_HUD_RestartWidget_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnExitxClicked); \
	DECLARE_FUNCTION(execOnRestartClicked);


#define FID_MyThird_Source_MyThird_Public_HUD_RestartWidget_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURestartWidget(); \
	friend struct Z_Construct_UClass_URestartWidget_Statics; \
public: \
	DECLARE_CLASS(URestartWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MyThird"), NO_API) \
	DECLARE_SERIALIZER(URestartWidget)


#define FID_MyThird_Source_MyThird_Public_HUD_RestartWidget_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URestartWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	URestartWidget(URestartWidget&&); \
	URestartWidget(const URestartWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URestartWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URestartWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URestartWidget) \
	NO_API virtual ~URestartWidget();


#define FID_MyThird_Source_MyThird_Public_HUD_RestartWidget_h_13_PROLOG
#define FID_MyThird_Source_MyThird_Public_HUD_RestartWidget_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyThird_Source_MyThird_Public_HUD_RestartWidget_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MyThird_Source_MyThird_Public_HUD_RestartWidget_h_16_INCLASS_NO_PURE_DECLS \
	FID_MyThird_Source_MyThird_Public_HUD_RestartWidget_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYTHIRD_API UClass* StaticClass<class URestartWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MyThird_Source_MyThird_Public_HUD_RestartWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

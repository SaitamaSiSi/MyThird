// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HUD/ThirdHUD.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYTHIRD_ThirdHUD_generated_h
#error "ThirdHUD.generated.h already included, missing '#pragma once' in ThirdHUD.h"
#endif
#define MYTHIRD_ThirdHUD_generated_h

#define FID_MyThird_Source_MyThird_Public_HUD_ThirdHUD_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAThirdHUD(); \
	friend struct Z_Construct_UClass_AThirdHUD_Statics; \
public: \
	DECLARE_CLASS(AThirdHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyThird"), NO_API) \
	DECLARE_SERIALIZER(AThirdHUD)


#define FID_MyThird_Source_MyThird_Public_HUD_ThirdHUD_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AThirdHUD(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AThirdHUD(AThirdHUD&&); \
	AThirdHUD(const AThirdHUD&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AThirdHUD); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AThirdHUD); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AThirdHUD) \
	NO_API virtual ~AThirdHUD();


#define FID_MyThird_Source_MyThird_Public_HUD_ThirdHUD_h_13_PROLOG
#define FID_MyThird_Source_MyThird_Public_HUD_ThirdHUD_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyThird_Source_MyThird_Public_HUD_ThirdHUD_h_16_INCLASS_NO_PURE_DECLS \
	FID_MyThird_Source_MyThird_Public_HUD_ThirdHUD_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYTHIRD_API UClass* StaticClass<class AThirdHUD>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MyThird_Source_MyThird_Public_HUD_ThirdHUD_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

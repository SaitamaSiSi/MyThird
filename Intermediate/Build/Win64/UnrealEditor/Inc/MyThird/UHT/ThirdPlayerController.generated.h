// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Game/ThirdPlayerController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYTHIRD_ThirdPlayerController_generated_h
#error "ThirdPlayerController.generated.h already included, missing '#pragma once' in ThirdPlayerController.h"
#endif
#define MYTHIRD_ThirdPlayerController_generated_h

#define FID_MyThird_Source_MyThird_Public_Game_ThirdPlayerController_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAThirdPlayerController(); \
	friend struct Z_Construct_UClass_AThirdPlayerController_Statics; \
public: \
	DECLARE_CLASS(AThirdPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyThird"), NO_API) \
	DECLARE_SERIALIZER(AThirdPlayerController)


#define FID_MyThird_Source_MyThird_Public_Game_ThirdPlayerController_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AThirdPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AThirdPlayerController(AThirdPlayerController&&); \
	AThirdPlayerController(const AThirdPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AThirdPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AThirdPlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AThirdPlayerController) \
	NO_API virtual ~AThirdPlayerController();


#define FID_MyThird_Source_MyThird_Public_Game_ThirdPlayerController_h_16_PROLOG
#define FID_MyThird_Source_MyThird_Public_Game_ThirdPlayerController_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyThird_Source_MyThird_Public_Game_ThirdPlayerController_h_19_INCLASS_NO_PURE_DECLS \
	FID_MyThird_Source_MyThird_Public_Game_ThirdPlayerController_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYTHIRD_API UClass* StaticClass<class AThirdPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MyThird_Source_MyThird_Public_Game_ThirdPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

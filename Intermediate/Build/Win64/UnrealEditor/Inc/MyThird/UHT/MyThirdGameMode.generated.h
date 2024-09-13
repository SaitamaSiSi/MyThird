// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MyThirdGameMode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYTHIRD_MyThirdGameMode_generated_h
#error "MyThirdGameMode.generated.h already included, missing '#pragma once' in MyThirdGameMode.h"
#endif
#define MYTHIRD_MyThirdGameMode_generated_h

#define FID_MyThird_Source_MyThird_MyThirdGameMode_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyThirdGameMode(); \
	friend struct Z_Construct_UClass_AMyThirdGameMode_Statics; \
public: \
	DECLARE_CLASS(AMyThirdGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyThird"), MYTHIRD_API) \
	DECLARE_SERIALIZER(AMyThirdGameMode)


#define FID_MyThird_Source_MyThird_MyThirdGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AMyThirdGameMode(AMyThirdGameMode&&); \
	AMyThirdGameMode(const AMyThirdGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MYTHIRD_API, AMyThirdGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyThirdGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyThirdGameMode) \
	MYTHIRD_API virtual ~AMyThirdGameMode();


#define FID_MyThird_Source_MyThird_MyThirdGameMode_h_9_PROLOG
#define FID_MyThird_Source_MyThird_MyThirdGameMode_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyThird_Source_MyThird_MyThirdGameMode_h_12_INCLASS_NO_PURE_DECLS \
	FID_MyThird_Source_MyThird_MyThirdGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYTHIRD_API UClass* StaticClass<class AMyThirdGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MyThird_Source_MyThird_MyThirdGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

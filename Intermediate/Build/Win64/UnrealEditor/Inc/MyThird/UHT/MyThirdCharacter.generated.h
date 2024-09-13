// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MyThirdCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYTHIRD_MyThirdCharacter_generated_h
#error "MyThirdCharacter.generated.h already included, missing '#pragma once' in MyThirdCharacter.h"
#endif
#define MYTHIRD_MyThirdCharacter_generated_h

#define FID_MyThird_Source_MyThird_MyThirdCharacter_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyThirdCharacter(); \
	friend struct Z_Construct_UClass_AMyThirdCharacter_Statics; \
public: \
	DECLARE_CLASS(AMyThirdCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyThird"), NO_API) \
	DECLARE_SERIALIZER(AMyThirdCharacter) \
	virtual UObject* _getUObject() const override { return const_cast<AMyThirdCharacter*>(this); }


#define FID_MyThird_Source_MyThird_MyThirdCharacter_h_26_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AMyThirdCharacter(AMyThirdCharacter&&); \
	AMyThirdCharacter(const AMyThirdCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyThirdCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyThirdCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyThirdCharacter) \
	NO_API virtual ~AMyThirdCharacter();


#define FID_MyThird_Source_MyThird_MyThirdCharacter_h_23_PROLOG
#define FID_MyThird_Source_MyThird_MyThirdCharacter_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyThird_Source_MyThird_MyThirdCharacter_h_26_INCLASS_NO_PURE_DECLS \
	FID_MyThird_Source_MyThird_MyThirdCharacter_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYTHIRD_API UClass* StaticClass<class AMyThirdCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MyThird_Source_MyThird_MyThirdCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

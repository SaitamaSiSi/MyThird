// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Projectile/BallProjectile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef MYTHIRD_BallProjectile_generated_h
#error "BallProjectile.generated.h already included, missing '#pragma once' in BallProjectile.h"
#endif
#define MYTHIRD_BallProjectile_generated_h

#define FID_MyThird_Source_MyThird_Public_Projectile_BallProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnHit);


#define FID_MyThird_Source_MyThird_Public_Projectile_BallProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABallProjectile(); \
	friend struct Z_Construct_UClass_ABallProjectile_Statics; \
public: \
	DECLARE_CLASS(ABallProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyThird"), NO_API) \
	DECLARE_SERIALIZER(ABallProjectile)


#define FID_MyThird_Source_MyThird_Public_Projectile_BallProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ABallProjectile(ABallProjectile&&); \
	ABallProjectile(const ABallProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABallProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABallProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABallProjectile) \
	NO_API virtual ~ABallProjectile();


#define FID_MyThird_Source_MyThird_Public_Projectile_BallProjectile_h_12_PROLOG
#define FID_MyThird_Source_MyThird_Public_Projectile_BallProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyThird_Source_MyThird_Public_Projectile_BallProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MyThird_Source_MyThird_Public_Projectile_BallProjectile_h_15_INCLASS_NO_PURE_DECLS \
	FID_MyThird_Source_MyThird_Public_Projectile_BallProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYTHIRD_API UClass* StaticClass<class ABallProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MyThird_Source_MyThird_Public_Projectile_BallProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

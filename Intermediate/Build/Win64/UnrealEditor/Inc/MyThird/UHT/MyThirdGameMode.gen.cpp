// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyThird/MyThirdGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyThirdGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
MYTHIRD_API UClass* Z_Construct_UClass_AMyThirdGameMode();
MYTHIRD_API UClass* Z_Construct_UClass_AMyThirdGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_MyThird();
// End Cross Module References

// Begin Class AMyThirdGameMode
void AMyThirdGameMode::StaticRegisterNativesAMyThirdGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyThirdGameMode);
UClass* Z_Construct_UClass_AMyThirdGameMode_NoRegister()
{
	return AMyThirdGameMode::StaticClass();
}
struct Z_Construct_UClass_AMyThirdGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "MyThirdGameMode.h" },
		{ "ModuleRelativePath", "MyThirdGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyThirdGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AMyThirdGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_MyThird,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyThirdGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyThirdGameMode_Statics::ClassParams = {
	&AMyThirdGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyThirdGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyThirdGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMyThirdGameMode()
{
	if (!Z_Registration_Info_UClass_AMyThirdGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyThirdGameMode.OuterSingleton, Z_Construct_UClass_AMyThirdGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMyThirdGameMode.OuterSingleton;
}
template<> MYTHIRD_API UClass* StaticClass<AMyThirdGameMode>()
{
	return AMyThirdGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMyThirdGameMode);
AMyThirdGameMode::~AMyThirdGameMode() {}
// End Class AMyThirdGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_MyThird_Source_MyThird_MyThirdGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMyThirdGameMode, AMyThirdGameMode::StaticClass, TEXT("AMyThirdGameMode"), &Z_Registration_Info_UClass_AMyThirdGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyThirdGameMode), 2843233150U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyThird_Source_MyThird_MyThirdGameMode_h_3651856631(TEXT("/Script/MyThird"),
	Z_CompiledInDeferFile_FID_MyThird_Source_MyThird_MyThirdGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyThird_Source_MyThird_MyThirdGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

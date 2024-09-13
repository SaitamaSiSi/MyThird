// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyThird/Public/HUD/ThirdHUD.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeThirdHUD() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AHUD();
MYTHIRD_API UClass* Z_Construct_UClass_AThirdHUD();
MYTHIRD_API UClass* Z_Construct_UClass_AThirdHUD_NoRegister();
MYTHIRD_API UClass* Z_Construct_UClass_UHealthWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_MyThird();
// End Cross Module References

// Begin Class AThirdHUD
void AThirdHUD::StaticRegisterNativesAThirdHUD()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AThirdHUD);
UClass* Z_Construct_UClass_AThirdHUD_NoRegister()
{
	return AThirdHUD::StaticClass();
}
struct Z_Construct_UClass_AThirdHUD_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "HUD/ThirdHUD.h" },
		{ "ModuleRelativePath", "Public/HUD/ThirdHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HealthWidgetClass_MetaData[] = {
		{ "Category", "HUD" },
		{ "ModuleRelativePath", "Public/HUD/ThirdHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HealthInstance_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HUD/ThirdHUD.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_HealthWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HealthInstance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AThirdHUD>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AThirdHUD_Statics::NewProp_HealthWidgetClass = { "HealthWidgetClass", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AThirdHUD, HealthWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UHealthWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HealthWidgetClass_MetaData), NewProp_HealthWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AThirdHUD_Statics::NewProp_HealthInstance = { "HealthInstance", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AThirdHUD, HealthInstance), Z_Construct_UClass_UHealthWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HealthInstance_MetaData), NewProp_HealthInstance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AThirdHUD_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThirdHUD_Statics::NewProp_HealthWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThirdHUD_Statics::NewProp_HealthInstance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AThirdHUD_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AThirdHUD_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AHUD,
	(UObject* (*)())Z_Construct_UPackage__Script_MyThird,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AThirdHUD_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AThirdHUD_Statics::ClassParams = {
	&AThirdHUD::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AThirdHUD_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AThirdHUD_Statics::PropPointers),
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AThirdHUD_Statics::Class_MetaDataParams), Z_Construct_UClass_AThirdHUD_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AThirdHUD()
{
	if (!Z_Registration_Info_UClass_AThirdHUD.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AThirdHUD.OuterSingleton, Z_Construct_UClass_AThirdHUD_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AThirdHUD.OuterSingleton;
}
template<> MYTHIRD_API UClass* StaticClass<AThirdHUD>()
{
	return AThirdHUD::StaticClass();
}
AThirdHUD::AThirdHUD(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AThirdHUD);
AThirdHUD::~AThirdHUD() {}
// End Class AThirdHUD

// Begin Registration
struct Z_CompiledInDeferFile_FID_MyThird_Source_MyThird_Public_HUD_ThirdHUD_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AThirdHUD, AThirdHUD::StaticClass, TEXT("AThirdHUD"), &Z_Registration_Info_UClass_AThirdHUD, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AThirdHUD), 989658168U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyThird_Source_MyThird_Public_HUD_ThirdHUD_h_2049643020(TEXT("/Script/MyThird"),
	Z_CompiledInDeferFile_FID_MyThird_Source_MyThird_Public_HUD_ThirdHUD_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyThird_Source_MyThird_Public_HUD_ThirdHUD_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

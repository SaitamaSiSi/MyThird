// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyThird/Public/Game/ThirdPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeThirdPlayerController() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
MYTHIRD_API UClass* Z_Construct_UClass_AThirdHUD_NoRegister();
MYTHIRD_API UClass* Z_Construct_UClass_AThirdPlayerController();
MYTHIRD_API UClass* Z_Construct_UClass_AThirdPlayerController_NoRegister();
MYTHIRD_API UClass* Z_Construct_UClass_UHealthWidget_NoRegister();
MYTHIRD_API UClass* Z_Construct_UClass_URestartWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_MyThird();
// End Cross Module References

// Begin Class AThirdPlayerController
void AThirdPlayerController::StaticRegisterNativesAThirdPlayerController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AThirdPlayerController);
UClass* Z_Construct_UClass_AThirdPlayerController_NoRegister()
{
	return AThirdPlayerController::StaticClass();
}
struct Z_Construct_UClass_AThirdPlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Game/ThirdPlayerController.h" },
		{ "ModuleRelativePath", "Public/Game/ThirdPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RestartWidgetClass_MetaData[] = {
		{ "Category", "ThirdPlayerController" },
		{ "ModuleRelativePath", "Public/Game/ThirdPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HealthWidgetClass_MetaData[] = {
		{ "Category", "ThirdPlayerController" },
		{ "ModuleRelativePath", "Public/Game/ThirdPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RestartWidget_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd4\xb4\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Game/ThirdPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd4\xb4\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HealthWidget_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xcc\xb6\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xca\xbe\xef\xbf\xbd\xef\xbf\xbd\xd2\xaa\xd2\xbb\xef\xbf\xbd\xef\xbf\xbd\xca\xbc\xef\xbf\xbd\xcd\xb4\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd0\xb4\xef\xbf\xbd\xef\xbf\xbdHUD\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcd\xa8\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xca\xbe\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Game/ThirdPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xcc\xb6\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xca\xbe\xef\xbf\xbd\xef\xbf\xbd\xd2\xaa\xd2\xbb\xef\xbf\xbd\xef\xbf\xbd\xca\xbc\xef\xbf\xbd\xcd\xb4\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd0\xb4\xef\xbf\xbd\xef\xbf\xbdHUD\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcd\xa8\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xca\xbe\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThirdHUD_MetaData[] = {
		{ "ModuleRelativePath", "Public/Game/ThirdPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_RestartWidgetClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_HealthWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RestartWidget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HealthWidget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ThirdHUD;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AThirdPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AThirdPlayerController_Statics::NewProp_RestartWidgetClass = { "RestartWidgetClass", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AThirdPlayerController, RestartWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_URestartWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RestartWidgetClass_MetaData), NewProp_RestartWidgetClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AThirdPlayerController_Statics::NewProp_HealthWidgetClass = { "HealthWidgetClass", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AThirdPlayerController, HealthWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UHealthWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HealthWidgetClass_MetaData), NewProp_HealthWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AThirdPlayerController_Statics::NewProp_RestartWidget = { "RestartWidget", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AThirdPlayerController, RestartWidget), Z_Construct_UClass_URestartWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RestartWidget_MetaData), NewProp_RestartWidget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AThirdPlayerController_Statics::NewProp_HealthWidget = { "HealthWidget", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AThirdPlayerController, HealthWidget), Z_Construct_UClass_UHealthWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HealthWidget_MetaData), NewProp_HealthWidget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AThirdPlayerController_Statics::NewProp_ThirdHUD = { "ThirdHUD", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AThirdPlayerController, ThirdHUD), Z_Construct_UClass_AThirdHUD_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThirdHUD_MetaData), NewProp_ThirdHUD_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AThirdPlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThirdPlayerController_Statics::NewProp_RestartWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThirdPlayerController_Statics::NewProp_HealthWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThirdPlayerController_Statics::NewProp_RestartWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThirdPlayerController_Statics::NewProp_HealthWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThirdPlayerController_Statics::NewProp_ThirdHUD,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AThirdPlayerController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AThirdPlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_MyThird,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AThirdPlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AThirdPlayerController_Statics::ClassParams = {
	&AThirdPlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AThirdPlayerController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AThirdPlayerController_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AThirdPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_AThirdPlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AThirdPlayerController()
{
	if (!Z_Registration_Info_UClass_AThirdPlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AThirdPlayerController.OuterSingleton, Z_Construct_UClass_AThirdPlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AThirdPlayerController.OuterSingleton;
}
template<> MYTHIRD_API UClass* StaticClass<AThirdPlayerController>()
{
	return AThirdPlayerController::StaticClass();
}
AThirdPlayerController::AThirdPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AThirdPlayerController);
AThirdPlayerController::~AThirdPlayerController() {}
// End Class AThirdPlayerController

// Begin Registration
struct Z_CompiledInDeferFile_FID_MyThird_Source_MyThird_Public_Game_ThirdPlayerController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AThirdPlayerController, AThirdPlayerController::StaticClass, TEXT("AThirdPlayerController"), &Z_Registration_Info_UClass_AThirdPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AThirdPlayerController), 2082794413U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyThird_Source_MyThird_Public_Game_ThirdPlayerController_h_203204411(TEXT("/Script/MyThird"),
	Z_CompiledInDeferFile_FID_MyThird_Source_MyThird_Public_Game_ThirdPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyThird_Source_MyThird_Public_Game_ThirdPlayerController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

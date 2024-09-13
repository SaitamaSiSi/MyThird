// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyThird/Public/Component/LookComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLookComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
MYTHIRD_API UClass* Z_Construct_UClass_ULookComponent();
MYTHIRD_API UClass* Z_Construct_UClass_ULookComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_MyThird();
// End Cross Module References

// Begin Class ULookComponent
void ULookComponent::StaticRegisterNativesULookComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULookComponent);
UClass* Z_Construct_UClass_ULookComponent_NoRegister()
{
	return ULookComponent::StaticClass();
}
struct Z_Construct_UClass_ULookComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Component/LookComponent.h" },
		{ "ModuleRelativePath", "Public/Component/LookComponent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULookComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ULookComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USceneComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_MyThird,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULookComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULookComponent_Statics::ClassParams = {
	&ULookComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULookComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_ULookComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULookComponent()
{
	if (!Z_Registration_Info_UClass_ULookComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULookComponent.OuterSingleton, Z_Construct_UClass_ULookComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULookComponent.OuterSingleton;
}
template<> MYTHIRD_API UClass* StaticClass<ULookComponent>()
{
	return ULookComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULookComponent);
ULookComponent::~ULookComponent() {}
// End Class ULookComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_MyThird_Source_MyThird_Public_Component_LookComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULookComponent, ULookComponent::StaticClass, TEXT("ULookComponent"), &Z_Registration_Info_UClass_ULookComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULookComponent), 2856387486U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyThird_Source_MyThird_Public_Component_LookComponent_h_3953940116(TEXT("/Script/MyThird"),
	Z_CompiledInDeferFile_FID_MyThird_Source_MyThird_Public_Component_LookComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyThird_Source_MyThird_Public_Component_LookComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

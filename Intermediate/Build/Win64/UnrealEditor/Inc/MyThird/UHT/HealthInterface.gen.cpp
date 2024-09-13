// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyThird/Public/Interface/HealthInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHealthInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
MYTHIRD_API UClass* Z_Construct_UClass_UHealthInterface();
MYTHIRD_API UClass* Z_Construct_UClass_UHealthInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_MyThird();
// End Cross Module References

// Begin Interface UHealthInterface Function Damage
void IHealthInterface::Damage()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_Damage instead.");
}
static FName NAME_UHealthInterface_Damage = FName(TEXT("Damage"));
void IHealthInterface::Execute_Damage(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UHealthInterface::StaticClass()));
	UFunction* const Func = O->FindFunction(NAME_UHealthInterface_Damage);
	if (Func)
	{
		O->ProcessEvent(Func, NULL);
	}
	else if (auto I = (IHealthInterface*)(O->GetNativeInterfaceAddress(UHealthInterface::StaticClass())))
	{
		I->Damage_Implementation();
	}
}
struct Z_Construct_UFunction_UHealthInterface_Damage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Health" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// damage\n" },
#endif
		{ "ModuleRelativePath", "Public/Interface/HealthInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "damage" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHealthInterface_Damage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHealthInterface, nullptr, "Damage", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthInterface_Damage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHealthInterface_Damage_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UHealthInterface_Damage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHealthInterface_Damage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IHealthInterface::execDamage)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Damage_Implementation();
	P_NATIVE_END;
}
// End Interface UHealthInterface Function Damage

// Begin Interface UHealthInterface Function Death
void IHealthInterface::Death()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_Death instead.");
}
static FName NAME_UHealthInterface_Death = FName(TEXT("Death"));
void IHealthInterface::Execute_Death(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UHealthInterface::StaticClass()));
	UFunction* const Func = O->FindFunction(NAME_UHealthInterface_Death);
	if (Func)
	{
		O->ProcessEvent(Func, NULL);
	}
	else if (auto I = (IHealthInterface*)(O->GetNativeInterfaceAddress(UHealthInterface::StaticClass())))
	{
		I->Death_Implementation();
	}
}
struct Z_Construct_UFunction_UHealthInterface_Death_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Health" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// death\n" },
#endif
		{ "ModuleRelativePath", "Public/Interface/HealthInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "death" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHealthInterface_Death_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHealthInterface, nullptr, "Death", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthInterface_Death_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHealthInterface_Death_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UHealthInterface_Death()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHealthInterface_Death_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IHealthInterface::execDeath)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Death_Implementation();
	P_NATIVE_END;
}
// End Interface UHealthInterface Function Death

// Begin Interface UHealthInterface
void UHealthInterface::StaticRegisterNativesUHealthInterface()
{
	UClass* Class = UHealthInterface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Damage", &IHealthInterface::execDamage },
		{ "Death", &IHealthInterface::execDeath },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHealthInterface);
UClass* Z_Construct_UClass_UHealthInterface_NoRegister()
{
	return UHealthInterface::StaticClass();
}
struct Z_Construct_UClass_UHealthInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interface/HealthInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UHealthInterface_Damage, "Damage" }, // 1776403869
		{ &Z_Construct_UFunction_UHealthInterface_Death, "Death" }, // 4073252460
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IHealthInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UHealthInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_MyThird,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHealthInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHealthInterface_Statics::ClassParams = {
	&UHealthInterface::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHealthInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UHealthInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHealthInterface()
{
	if (!Z_Registration_Info_UClass_UHealthInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHealthInterface.OuterSingleton, Z_Construct_UClass_UHealthInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHealthInterface.OuterSingleton;
}
template<> MYTHIRD_API UClass* StaticClass<UHealthInterface>()
{
	return UHealthInterface::StaticClass();
}
UHealthInterface::UHealthInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHealthInterface);
UHealthInterface::~UHealthInterface() {}
// End Interface UHealthInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_MyThird_Source_MyThird_Public_Interface_HealthInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHealthInterface, UHealthInterface::StaticClass, TEXT("UHealthInterface"), &Z_Registration_Info_UClass_UHealthInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHealthInterface), 3381779144U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyThird_Source_MyThird_Public_Interface_HealthInterface_h_3346290413(TEXT("/Script/MyThird"),
	Z_CompiledInDeferFile_FID_MyThird_Source_MyThird_Public_Interface_HealthInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyThird_Source_MyThird_Public_Interface_HealthInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

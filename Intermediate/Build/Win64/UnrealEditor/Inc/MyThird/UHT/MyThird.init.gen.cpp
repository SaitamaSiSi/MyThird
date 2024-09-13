// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyThird_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_MyThird;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_MyThird()
	{
		if (!Z_Registration_Info_UPackage__Script_MyThird.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/MyThird",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x6AE4DC17,
				0x551E40F7,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_MyThird.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_MyThird.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_MyThird(Z_Construct_UPackage__Script_MyThird, TEXT("/Script/MyThird"), Z_Registration_Info_UPackage__Script_MyThird, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x6AE4DC17, 0x551E40F7));
PRAGMA_ENABLE_DEPRECATION_WARNINGS

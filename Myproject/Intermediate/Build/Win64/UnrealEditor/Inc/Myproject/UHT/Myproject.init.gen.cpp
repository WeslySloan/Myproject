// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyproject_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Myproject;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Myproject()
	{
		if (!Z_Registration_Info_UPackage__Script_Myproject.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Myproject",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x5A5523CA,
				0x850CFD83,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Myproject.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Myproject.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Myproject(Z_Construct_UPackage__Script_Myproject, TEXT("/Script/Myproject"), Z_Registration_Info_UPackage__Script_Myproject, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x5A5523CA, 0x850CFD83));
PRAGMA_ENABLE_DEPRECATION_WARNINGS

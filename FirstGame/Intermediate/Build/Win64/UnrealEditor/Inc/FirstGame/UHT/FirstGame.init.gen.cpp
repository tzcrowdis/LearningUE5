// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFirstGame_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_FirstGame;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_FirstGame()
	{
		if (!Z_Registration_Info_UPackage__Script_FirstGame.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/FirstGame",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0xAE63E044,
				0xAEA91186,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_FirstGame.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_FirstGame.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_FirstGame(Z_Construct_UPackage__Script_FirstGame, TEXT("/Script/FirstGame"), Z_Registration_Info_UPackage__Script_FirstGame, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xAE63E044, 0xAEA91186));
PRAGMA_ENABLE_DEPRECATION_WARNINGS

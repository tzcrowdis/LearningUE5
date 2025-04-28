// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FirstGame/FirstGameGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFirstGameGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
FIRSTGAME_API UClass* Z_Construct_UClass_AFirstGameGameMode();
FIRSTGAME_API UClass* Z_Construct_UClass_AFirstGameGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_FirstGame();
// End Cross Module References

// Begin Class AFirstGameGameMode
void AFirstGameGameMode::StaticRegisterNativesAFirstGameGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFirstGameGameMode);
UClass* Z_Construct_UClass_AFirstGameGameMode_NoRegister()
{
	return AFirstGameGameMode::StaticClass();
}
struct Z_Construct_UClass_AFirstGameGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "FirstGameGameMode.h" },
		{ "ModuleRelativePath", "FirstGameGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFirstGameGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AFirstGameGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_FirstGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFirstGameGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFirstGameGameMode_Statics::ClassParams = {
	&AFirstGameGameMode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFirstGameGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AFirstGameGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AFirstGameGameMode()
{
	if (!Z_Registration_Info_UClass_AFirstGameGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFirstGameGameMode.OuterSingleton, Z_Construct_UClass_AFirstGameGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AFirstGameGameMode.OuterSingleton;
}
template<> FIRSTGAME_API UClass* StaticClass<AFirstGameGameMode>()
{
	return AFirstGameGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AFirstGameGameMode);
AFirstGameGameMode::~AFirstGameGameMode() {}
// End Class AFirstGameGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_FirstGame_Source_FirstGame_FirstGameGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFirstGameGameMode, AFirstGameGameMode::StaticClass, TEXT("AFirstGameGameMode"), &Z_Registration_Info_UClass_AFirstGameGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFirstGameGameMode), 1967128326U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FirstGame_Source_FirstGame_FirstGameGameMode_h_966908231(TEXT("/Script/FirstGame"),
	Z_CompiledInDeferFile_FID_FirstGame_Source_FirstGame_FirstGameGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FirstGame_Source_FirstGame_FirstGameGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

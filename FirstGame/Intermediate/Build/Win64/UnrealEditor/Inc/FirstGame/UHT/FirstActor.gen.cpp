// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FirstGame/FirstActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFirstActor() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
FIRSTGAME_API UClass* Z_Construct_UClass_AFirstActor();
FIRSTGAME_API UClass* Z_Construct_UClass_AFirstActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_FirstGame();
// End Cross Module References

// Begin Class AFirstActor
void AFirstActor::StaticRegisterNativesAFirstActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFirstActor);
UClass* Z_Construct_UClass_AFirstActor_NoRegister()
{
	return AFirstActor::StaticClass();
}
struct Z_Construct_UClass_AFirstActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "FirstActor.h" },
		{ "ModuleRelativePath", "FirstActor.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFirstActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AFirstActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_FirstGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFirstActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFirstActor_Statics::ClassParams = {
	&AFirstActor::StaticClass,
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
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFirstActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AFirstActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AFirstActor()
{
	if (!Z_Registration_Info_UClass_AFirstActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFirstActor.OuterSingleton, Z_Construct_UClass_AFirstActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AFirstActor.OuterSingleton;
}
template<> FIRSTGAME_API UClass* StaticClass<AFirstActor>()
{
	return AFirstActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AFirstActor);
AFirstActor::~AFirstActor() {}
// End Class AFirstActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_FirstGame_Source_FirstGame_FirstActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFirstActor, AFirstActor::StaticClass, TEXT("AFirstActor"), &Z_Registration_Info_UClass_AFirstActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFirstActor), 32601860U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FirstGame_Source_FirstGame_FirstActor_h_1476179775(TEXT("/Script/FirstGame"),
	Z_CompiledInDeferFile_FID_FirstGame_Source_FirstGame_FirstActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FirstGame_Source_FirstGame_FirstActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

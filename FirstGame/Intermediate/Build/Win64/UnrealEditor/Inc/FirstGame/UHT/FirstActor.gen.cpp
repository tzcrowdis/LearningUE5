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
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
FIRSTGAME_API UClass* Z_Construct_UClass_AFirstActor();
FIRSTGAME_API UClass* Z_Construct_UClass_AFirstActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_FirstGame();
// End Cross Module References

// Begin Class AFirstActor Function CheckLifeTime
struct Z_Construct_UFunction_AFirstActor_CheckLifeTime_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FirstActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFirstActor_CheckLifeTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFirstActor, nullptr, "CheckLifeTime", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFirstActor_CheckLifeTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFirstActor_CheckLifeTime_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AFirstActor_CheckLifeTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFirstActor_CheckLifeTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFirstActor::execCheckLifeTime)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CheckLifeTime();
	P_NATIVE_END;
}
// End Class AFirstActor Function CheckLifeTime

// Begin Class AFirstActor Function PrintLevel
static FName NAME_AFirstActor_PrintLevel = FName(TEXT("PrintLevel"));
void AFirstActor::PrintLevel()
{
	ProcessEvent(FindFunctionChecked(NAME_AFirstActor_PrintLevel),NULL);
}
struct Z_Construct_UFunction_AFirstActor_PrintLevel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FirstActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFirstActor_PrintLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFirstActor, nullptr, "PrintLevel", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFirstActor_PrintLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFirstActor_PrintLevel_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AFirstActor_PrintLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFirstActor_PrintLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AFirstActor Function PrintLevel

// Begin Class AFirstActor
void AFirstActor::StaticRegisterNativesAFirstActor()
{
	UClass* Class = AFirstActor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CheckLifeTime", &AFirstActor::execCheckLifeTime },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorLifetime_MetaData[] = {
		{ "Category", "Learning About Specifiers" },
		{ "ModuleRelativePath", "FirstActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorLevel_MetaData[] = {
		{ "Category", "Learning About Specifiers" },
		{ "ModuleRelativePath", "FirstActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FirstActorMesh_MetaData[] = {
		{ "Category", "Learning About Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FirstActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ActorLifetime;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ActorLevel;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FirstActorMesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AFirstActor_CheckLifeTime, "CheckLifeTime" }, // 3994534433
		{ &Z_Construct_UFunction_AFirstActor_PrintLevel, "PrintLevel" }, // 1799359121
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFirstActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFirstActor_Statics::NewProp_ActorLifetime = { "ActorLifetime", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFirstActor, ActorLifetime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorLifetime_MetaData), NewProp_ActorLifetime_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFirstActor_Statics::NewProp_ActorLevel = { "ActorLevel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFirstActor, ActorLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorLevel_MetaData), NewProp_ActorLevel_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFirstActor_Statics::NewProp_FirstActorMesh = { "FirstActorMesh", nullptr, (EPropertyFlags)0x00100000000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFirstActor, FirstActorMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FirstActorMesh_MetaData), NewProp_FirstActorMesh_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFirstActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstActor_Statics::NewProp_ActorLifetime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstActor_Statics::NewProp_ActorLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstActor_Statics::NewProp_FirstActorMesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFirstActor_Statics::PropPointers) < 2048);
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
	FuncInfo,
	Z_Construct_UClass_AFirstActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AFirstActor_Statics::PropPointers),
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
		{ Z_Construct_UClass_AFirstActor, AFirstActor::StaticClass, TEXT("AFirstActor"), &Z_Registration_Info_UClass_AFirstActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFirstActor), 3738874362U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FirstGame_Source_FirstGame_FirstActor_h_2494172807(TEXT("/Script/FirstGame"),
	Z_CompiledInDeferFile_FID_FirstGame_Source_FirstGame_FirstActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FirstGame_Source_FirstGame_FirstActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

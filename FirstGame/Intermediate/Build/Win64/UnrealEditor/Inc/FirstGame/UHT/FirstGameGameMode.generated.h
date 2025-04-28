// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FirstGameGameMode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FIRSTGAME_FirstGameGameMode_generated_h
#error "FirstGameGameMode.generated.h already included, missing '#pragma once' in FirstGameGameMode.h"
#endif
#define FIRSTGAME_FirstGameGameMode_generated_h

#define FID_FirstGame_Source_FirstGame_FirstGameGameMode_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFirstGameGameMode(); \
	friend struct Z_Construct_UClass_AFirstGameGameMode_Statics; \
public: \
	DECLARE_CLASS(AFirstGameGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/FirstGame"), FIRSTGAME_API) \
	DECLARE_SERIALIZER(AFirstGameGameMode)


#define FID_FirstGame_Source_FirstGame_FirstGameGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AFirstGameGameMode(AFirstGameGameMode&&); \
	AFirstGameGameMode(const AFirstGameGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(FIRSTGAME_API, AFirstGameGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFirstGameGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFirstGameGameMode) \
	FIRSTGAME_API virtual ~AFirstGameGameMode();


#define FID_FirstGame_Source_FirstGame_FirstGameGameMode_h_9_PROLOG
#define FID_FirstGame_Source_FirstGame_FirstGameGameMode_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_FirstGame_Source_FirstGame_FirstGameGameMode_h_12_INCLASS_NO_PURE_DECLS \
	FID_FirstGame_Source_FirstGame_FirstGameGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIRSTGAME_API UClass* StaticClass<class AFirstGameGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_FirstGame_Source_FirstGame_FirstGameGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

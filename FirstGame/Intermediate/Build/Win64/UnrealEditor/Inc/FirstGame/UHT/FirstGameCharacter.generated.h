// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FirstGameCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FIRSTGAME_FirstGameCharacter_generated_h
#error "FirstGameCharacter.generated.h already included, missing '#pragma once' in FirstGameCharacter.h"
#endif
#define FIRSTGAME_FirstGameCharacter_generated_h

#define FID_FirstGame_Source_FirstGame_FirstGameCharacter_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFirstGameCharacter(); \
	friend struct Z_Construct_UClass_AFirstGameCharacter_Statics; \
public: \
	DECLARE_CLASS(AFirstGameCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FirstGame"), NO_API) \
	DECLARE_SERIALIZER(AFirstGameCharacter)


#define FID_FirstGame_Source_FirstGame_FirstGameCharacter_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AFirstGameCharacter(AFirstGameCharacter&&); \
	AFirstGameCharacter(const AFirstGameCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFirstGameCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFirstGameCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFirstGameCharacter) \
	NO_API virtual ~AFirstGameCharacter();


#define FID_FirstGame_Source_FirstGame_FirstGameCharacter_h_18_PROLOG
#define FID_FirstGame_Source_FirstGame_FirstGameCharacter_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_FirstGame_Source_FirstGame_FirstGameCharacter_h_21_INCLASS_NO_PURE_DECLS \
	FID_FirstGame_Source_FirstGame_FirstGameCharacter_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIRSTGAME_API UClass* StaticClass<class AFirstGameCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_FirstGame_Source_FirstGame_FirstGameCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

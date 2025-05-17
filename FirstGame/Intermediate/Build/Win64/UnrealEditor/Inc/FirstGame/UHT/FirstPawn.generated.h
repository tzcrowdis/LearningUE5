// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FirstPawn.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FIRSTGAME_FirstPawn_generated_h
#error "FirstPawn.generated.h already included, missing '#pragma once' in FirstPawn.h"
#endif
#define FIRSTGAME_FirstPawn_generated_h

#define FID_FirstGame_Source_FirstGame_FirstPawn_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFirstPawn(); \
	friend struct Z_Construct_UClass_AFirstPawn_Statics; \
public: \
	DECLARE_CLASS(AFirstPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FirstGame"), NO_API) \
	DECLARE_SERIALIZER(AFirstPawn)


#define FID_FirstGame_Source_FirstGame_FirstPawn_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AFirstPawn(AFirstPawn&&); \
	AFirstPawn(const AFirstPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFirstPawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFirstPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFirstPawn) \
	NO_API virtual ~AFirstPawn();


#define FID_FirstGame_Source_FirstGame_FirstPawn_h_9_PROLOG
#define FID_FirstGame_Source_FirstGame_FirstPawn_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_FirstGame_Source_FirstGame_FirstPawn_h_12_INCLASS_NO_PURE_DECLS \
	FID_FirstGame_Source_FirstGame_FirstPawn_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIRSTGAME_API UClass* StaticClass<class AFirstPawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_FirstGame_Source_FirstGame_FirstPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

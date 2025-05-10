// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FirstActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FIRSTGAME_FirstActor_generated_h
#error "FirstActor.generated.h already included, missing '#pragma once' in FirstActor.h"
#endif
#define FIRSTGAME_FirstActor_generated_h

#define FID_FirstGame_Source_FirstGame_FirstActor_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFirstActor(); \
	friend struct Z_Construct_UClass_AFirstActor_Statics; \
public: \
	DECLARE_CLASS(AFirstActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FirstGame"), NO_API) \
	DECLARE_SERIALIZER(AFirstActor)


#define FID_FirstGame_Source_FirstGame_FirstActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AFirstActor(AFirstActor&&); \
	AFirstActor(const AFirstActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFirstActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFirstActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFirstActor) \
	NO_API virtual ~AFirstActor();


#define FID_FirstGame_Source_FirstGame_FirstActor_h_9_PROLOG
#define FID_FirstGame_Source_FirstGame_FirstActor_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_FirstGame_Source_FirstGame_FirstActor_h_12_INCLASS_NO_PURE_DECLS \
	FID_FirstGame_Source_FirstGame_FirstActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIRSTGAME_API UClass* StaticClass<class AFirstActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_FirstGame_Source_FirstGame_FirstActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

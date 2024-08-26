// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ActorBuilder.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAMBITWARRIORS_ActorBuilder_generated_h
#error "ActorBuilder.generated.h already included, missing '#pragma once' in ActorBuilder.h"
#endif
#define GAMBITWARRIORS_ActorBuilder_generated_h

#define FID_GambitWarriors_Source_GambitWarriors_Public_ActorBuilder_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUActorBuilder(); \
	friend struct Z_Construct_UClass_UActorBuilder_Statics; \
public: \
	DECLARE_CLASS(UActorBuilder, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GambitWarriors"), NO_API) \
	DECLARE_SERIALIZER(UActorBuilder)


#define FID_GambitWarriors_Source_GambitWarriors_Public_ActorBuilder_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UActorBuilder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UActorBuilder(UActorBuilder&&); \
	UActorBuilder(const UActorBuilder&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UActorBuilder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorBuilder); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActorBuilder) \
	NO_API virtual ~UActorBuilder();


#define FID_GambitWarriors_Source_GambitWarriors_Public_ActorBuilder_h_12_PROLOG
#define FID_GambitWarriors_Source_GambitWarriors_Public_ActorBuilder_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GambitWarriors_Source_GambitWarriors_Public_ActorBuilder_h_15_INCLASS_NO_PURE_DECLS \
	FID_GambitWarriors_Source_GambitWarriors_Public_ActorBuilder_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMBITWARRIORS_API UClass* StaticClass<class UActorBuilder>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GambitWarriors_Source_GambitWarriors_Public_ActorBuilder_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

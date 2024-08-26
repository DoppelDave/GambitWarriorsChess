// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BoardBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAMBITWARRIORS_BoardBase_generated_h
#error "BoardBase.generated.h already included, missing '#pragma once' in BoardBase.h"
#endif
#define GAMBITWARRIORS_BoardBase_generated_h

#define FID_GambitWarriors_Source_GambitWarriors_Public_BoardBase_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABoardBase(); \
	friend struct Z_Construct_UClass_ABoardBase_Statics; \
public: \
	DECLARE_CLASS(ABoardBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GambitWarriors"), NO_API) \
	DECLARE_SERIALIZER(ABoardBase) \
	virtual UObject* _getUObject() const override { return const_cast<ABoardBase*>(this); }


#define FID_GambitWarriors_Source_GambitWarriors_Public_BoardBase_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ABoardBase(ABoardBase&&); \
	ABoardBase(const ABoardBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABoardBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABoardBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABoardBase) \
	NO_API virtual ~ABoardBase();


#define FID_GambitWarriors_Source_GambitWarriors_Public_BoardBase_h_11_PROLOG
#define FID_GambitWarriors_Source_GambitWarriors_Public_BoardBase_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GambitWarriors_Source_GambitWarriors_Public_BoardBase_h_14_INCLASS_NO_PURE_DECLS \
	FID_GambitWarriors_Source_GambitWarriors_Public_BoardBase_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMBITWARRIORS_API UClass* StaticClass<class ABoardBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GambitWarriors_Source_GambitWarriors_Public_BoardBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

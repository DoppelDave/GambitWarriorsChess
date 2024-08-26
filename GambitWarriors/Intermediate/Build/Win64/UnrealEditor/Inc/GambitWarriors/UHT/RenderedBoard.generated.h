// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RenderedBoard.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAMBITWARRIORS_RenderedBoard_generated_h
#error "RenderedBoard.generated.h already included, missing '#pragma once' in RenderedBoard.h"
#endif
#define GAMBITWARRIORS_RenderedBoard_generated_h

#define FID_GambitWarriors_Source_GambitWarriors_Public_RenderedBoard_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARenderedBoard(); \
	friend struct Z_Construct_UClass_ARenderedBoard_Statics; \
public: \
	DECLARE_CLASS(ARenderedBoard, ABoardBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GambitWarriors"), NO_API) \
	DECLARE_SERIALIZER(ARenderedBoard)


#define FID_GambitWarriors_Source_GambitWarriors_Public_RenderedBoard_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ARenderedBoard(ARenderedBoard&&); \
	ARenderedBoard(const ARenderedBoard&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARenderedBoard); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARenderedBoard); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARenderedBoard) \
	NO_API virtual ~ARenderedBoard();


#define FID_GambitWarriors_Source_GambitWarriors_Public_RenderedBoard_h_12_PROLOG
#define FID_GambitWarriors_Source_GambitWarriors_Public_RenderedBoard_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GambitWarriors_Source_GambitWarriors_Public_RenderedBoard_h_15_INCLASS_NO_PURE_DECLS \
	FID_GambitWarriors_Source_GambitWarriors_Public_RenderedBoard_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMBITWARRIORS_API UClass* StaticClass<class ARenderedBoard>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GambitWarriors_Source_GambitWarriors_Public_RenderedBoard_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

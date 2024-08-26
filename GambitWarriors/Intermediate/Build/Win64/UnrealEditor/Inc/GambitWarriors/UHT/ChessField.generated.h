// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ChessField.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAMBITWARRIORS_ChessField_generated_h
#error "ChessField.generated.h already included, missing '#pragma once' in ChessField.h"
#endif
#define GAMBITWARRIORS_ChessField_generated_h

#define FID_GambitWarriors_Source_GambitWarriors_Public_ChessField_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAChessField(); \
	friend struct Z_Construct_UClass_AChessField_Statics; \
public: \
	DECLARE_CLASS(AChessField, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GambitWarriors"), NO_API) \
	DECLARE_SERIALIZER(AChessField)


#define FID_GambitWarriors_Source_GambitWarriors_Public_ChessField_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AChessField(AChessField&&); \
	AChessField(const AChessField&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AChessField); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AChessField); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AChessField) \
	NO_API virtual ~AChessField();


#define FID_GambitWarriors_Source_GambitWarriors_Public_ChessField_h_9_PROLOG
#define FID_GambitWarriors_Source_GambitWarriors_Public_ChessField_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GambitWarriors_Source_GambitWarriors_Public_ChessField_h_12_INCLASS_NO_PURE_DECLS \
	FID_GambitWarriors_Source_GambitWarriors_Public_ChessField_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMBITWARRIORS_API UClass* StaticClass<class AChessField>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GambitWarriors_Source_GambitWarriors_Public_ChessField_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

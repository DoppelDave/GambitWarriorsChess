// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BoardInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAMBITWARRIORS_BoardInterface_generated_h
#error "BoardInterface.generated.h already included, missing '#pragma once' in BoardInterface.h"
#endif
#define GAMBITWARRIORS_BoardInterface_generated_h

#define FID_GambitWarriors_Source_GambitWarriors_Public_BoardInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMBITWARRIORS_API UBoardInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBoardInterface(UBoardInterface&&); \
	UBoardInterface(const UBoardInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMBITWARRIORS_API, UBoardInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBoardInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBoardInterface) \
	GAMBITWARRIORS_API virtual ~UBoardInterface();


#define FID_GambitWarriors_Source_GambitWarriors_Public_BoardInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUBoardInterface(); \
	friend struct Z_Construct_UClass_UBoardInterface_Statics; \
public: \
	DECLARE_CLASS(UBoardInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/GambitWarriors"), GAMBITWARRIORS_API) \
	DECLARE_SERIALIZER(UBoardInterface)


#define FID_GambitWarriors_Source_GambitWarriors_Public_BoardInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_GambitWarriors_Source_GambitWarriors_Public_BoardInterface_h_13_GENERATED_UINTERFACE_BODY() \
	FID_GambitWarriors_Source_GambitWarriors_Public_BoardInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_GambitWarriors_Source_GambitWarriors_Public_BoardInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IBoardInterface() {} \
public: \
	typedef UBoardInterface UClassType; \
	typedef IBoardInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_GambitWarriors_Source_GambitWarriors_Public_BoardInterface_h_10_PROLOG
#define FID_GambitWarriors_Source_GambitWarriors_Public_BoardInterface_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GambitWarriors_Source_GambitWarriors_Public_BoardInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMBITWARRIORS_API UClass* StaticClass<class UBoardInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GambitWarriors_Source_GambitWarriors_Public_BoardInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

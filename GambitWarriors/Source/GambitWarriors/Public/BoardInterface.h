// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "BoardInterface.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UBoardInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class GAMBITWARRIORS_API IBoardInterface
{
	GENERATED_BODY()

public:

	/// virtual methods for Chessboards

	virtual void InitArray(void) = 0;
	virtual void GenerateFields(void) = 0;
};

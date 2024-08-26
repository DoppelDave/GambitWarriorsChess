// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BoardBase.h"
#include "RenderedBoard.generated.h"

/**
 * 
 */
UCLASS()
class GAMBITWARRIORS_API ARenderedBoard : public ABoardBase
{
	GENERATED_BODY()

public:

	ARenderedBoard();

private:

	void InitMeshComponent(void);


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:

	const FName MeshName = "Board";
	const FString MeshPath = TEXT("/Game/GambitWarriors/Art/Boards/S_Board_Classic_01");

	TObjectPtr<UStaticMeshComponent> MeshComponent = nullptr;
};

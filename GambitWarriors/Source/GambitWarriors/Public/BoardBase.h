// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BoardInterface.h"
#include "ChessField.h"
#include "BoardBase.generated.h"

UCLASS()
class GAMBITWARRIORS_API ABoardBase : public AActor, public IBoardInterface
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABoardBase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:
	// Inherited via IBoardInterface
	void InitArray(void) override;
	void GenerateFields(void) override;


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:

	AChessField* SpawnField();

	const int Size = 8;
	const int SpacingAmount = 10;
	const FName RootName = "Root";

	int CurrentRow = 0;
	int CurrentCol = 0;

	static const int NullIndex = 0;
	static const int TwoIndex = 2;

	TArray<TArray<AChessField*>> Fields;

};

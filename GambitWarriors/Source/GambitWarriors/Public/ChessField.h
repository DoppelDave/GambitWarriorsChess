// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ChessField.generated.h"

UCLASS()
class GAMBITWARRIORS_API AChessField : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AChessField();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:

	FVector CollisionBoxSize = FVector(5.0f, 5.0f, 5.0f);

	UPROPERTY(EditAnywhere)
	TObjectPtr<class UBoxComponent> CollisionBox = nullptr;
};

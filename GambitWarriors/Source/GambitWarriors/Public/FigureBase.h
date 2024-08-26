// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FigureBase.generated.h"

UCLASS()
class GAMBITWARRIORS_API AFigureBase : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFigureBase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:

	const FString MeshPath = TEXT("/Game/GambitWarriors/Art/Figures/S_Figure_Queen");

	void InitMesh(void);


	UPROPERTY(EditAnywhere,
		meta = (DisplayName = Mesh, Category = "Components"))
	TObjectPtr<UStaticMeshComponent> MeshComponent = nullptr;
};

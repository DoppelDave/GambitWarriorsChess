// Fill out your copyright notice in the Description page of Project Settings.


#include "ChessField.h"
#include "Components/BoxComponent.h"

// Sets default values
AChessField::AChessField()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	CollisionBox = CreateDefaultSubobject<UBoxComponent>("CollisionBox");
	CollisionBox->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
	if (CollisionBox)
	{
		RootComponent = CollisionBox;

		CollisionBox->SetHiddenInGame(false);
		CollisionBox->SetBoxExtent(CollisionBoxSize);
	}
}

// Called when the game starts or when spawned
void AChessField::BeginPlay()
{
	Super::BeginPlay();
	

}

// Called every frame
void AChessField::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


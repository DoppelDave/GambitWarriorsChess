// Fill out your copyright notice in the Description page of Project Settings.


#include "BoardBase.h"
#include "FigureBase.h"

// Sets default values
ABoardBase::ABoardBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
	
	RootComponent = CreateDefaultSubobject<USceneComponent>(RootName);
	InitArray();
	UE_LOG(LogTemp, Warning, TEXT("ChessBoard initialized"))
}

// Called when the game starts or when spawned
void ABoardBase::BeginPlay()
{
	Super::BeginPlay();

	
}

// Called every frame
void ABoardBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}


/// <summary>
/// Init Fields Array size
/// </summary>
/// <param name=""></param>
void ABoardBase::InitArray(void)
{
	// Init row
	Fields.Init(TArray<AChessField*>(), Size);

	// Init 64 size
	for (auto& Row : Fields)
	{
		Row.Init(nullptr, Size);
	}
}
/// <summary>
/// Generate 64 Fields in Array
/// </summary>
/// <param name=""></param>
void ABoardBase::GenerateFields(void)
{
	UE_LOG(LogTemp, Warning, TEXT("Board generating Fields"));
	// Spawn Fields 8x8
	for (int32 Col = NullIndex; Col < Size; Col++)
	{
		for (int32 Row = NullIndex; Row < Size; Row++)
		{
			AChessField* Field = SpawnField();

			if (Field)
			{
				Fields[Col][Row] = Field;
			}
		}
	}
}

/// <summary>
/// Spawn FieldActor in place
/// </summary>
/// <returns></returns>
AChessField* ABoardBase::SpawnField()
{
	// Calculate position from the middle
	FVector SpawnLocation = FVector(
		SpacingAmount * (Size / TwoIndex) + -SpacingAmount * CurrentCol,
		-SpacingAmount * (Size / TwoIndex) + SpacingAmount * CurrentRow,
		NullIndex
	);

	// Spawn Field

	if (GetWorld())
	{
		AChessField* Field = GetWorld()->SpawnActor<AChessField>(AChessField::StaticClass(), SpawnLocation, FRotator::ZeroRotator);

		if (Field)
		{
			// Attach to Board
			Field->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);

			// Start new Row
			++CurrentCol;

			if (CurrentCol >= Size)
			{
				++CurrentRow;
				CurrentCol = NullIndex;
			}
			return Field;
		}
		else return nullptr;
	}
	else return nullptr;
}

// Fill out your copyright notice in the Description page of Project Settings.


#include "FigureBase.h"
#include "ActorUtils.h"

// Sets default values
AFigureBase::AFigureBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	InitMesh();
}

// Called when the game starts or when spawned
void AFigureBase::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFigureBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AFigureBase::InitMesh(void)
{
	MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	RootComponent = MeshComponent;

	UStaticMesh* Mesh = FindObject<UStaticMesh>(*MeshPath);
	
	if (MeshComponent && Mesh)
	{
		MeshComponent->SetStaticMesh(Mesh);
	}

}


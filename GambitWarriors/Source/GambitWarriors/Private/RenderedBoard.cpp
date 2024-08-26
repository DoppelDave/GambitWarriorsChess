// Fill out your copyright notice in the Description page of Project Settings.


#include "RenderedBoard.h"
#include "ActorUtils.h"

ARenderedBoard::ARenderedBoard()
{
	InitMeshComponent();
}


void ARenderedBoard::InitMeshComponent(void)
{
	if (!MeshComponent) MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(MeshName);

	if (MeshComponent)
	{
		MeshComponent->SetupAttachment(RootComponent);

		UStaticMesh* Mesh = FindObject<UStaticMesh>(*MeshPath);

		if (Mesh)
		{
			MeshComponent->SetStaticMesh(Mesh);
		}
	}
}

void ARenderedBoard::BeginPlay()
{
	Super::BeginPlay();


}

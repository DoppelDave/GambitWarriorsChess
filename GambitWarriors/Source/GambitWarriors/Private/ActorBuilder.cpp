// Fill out your copyright notice in the Description page of Project Settings.


#include "ActorBuilder.h"
#include "ActorUtils.h"

UMeshComponent* UActorBuilder::BuildMesh(UStaticMeshComponent& a_Component, const FString a_sMeshPath, USceneComponent* a_Attachment)
{
	a_Component.SetupAttachment(a_Attachment);

	UStaticMesh* Mesh = FindObject<UStaticMesh>(*a_sMeshPath);

	if (Mesh)
	{
		a_Component.SetStaticMesh(Mesh);
	}
	return &a_Component;
}

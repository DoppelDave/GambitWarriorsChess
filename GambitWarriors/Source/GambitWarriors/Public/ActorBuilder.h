// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ActorBuilder.generated.h"

/**
 * 
 */
UCLASS()
class GAMBITWARRIORS_API UActorBuilder : public UObject
{
	GENERATED_BODY()

public:

	static UMeshComponent* BuildMesh(UStaticMeshComponent& a_Component, const FString a_sMeshPath, USceneComponent* Attachment);
};

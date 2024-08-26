// Fill out your copyright notice in the Description page of Project Settings.


#include "BoardInterface.h"

// Add default functionality here for any IBoardInterface functions that are not pure virtual.

void IBoardInterface::TestMethod(void)
{
	UE_LOG(LogTemp, Warning, TEXT("Hello from Interface"));
}

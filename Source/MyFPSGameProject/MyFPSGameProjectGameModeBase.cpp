// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.


#include "MyFPSGameProjectGameModeBase.h"
#include "MyFPSGameProject.h"
#include "Engine/Engine.h"

void AMyFPSGameProjectGameModeBase::StartPlay()
{
	Super::StartPlay();

	/** Global engine pointer. Can be 0 so don't use without checking. */
	if (GEngine)
	{
		// The -1 "Key" value indicates that we will never need to update or refresh this message
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, TEXT("Hello World, this is MyFPSGameMode!"));
	}
}

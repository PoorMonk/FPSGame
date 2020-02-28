// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "MyFPSGameProjectGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class MYFPSGAMEPROJECT_API AMyFPSGameProjectGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	
public:
	virtual void StartPlay() override;
};

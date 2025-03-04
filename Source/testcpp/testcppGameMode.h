// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Blueprint/UserWidget.h"
#include "testcppGameMode.generated.h"

UCLASS(minimalapi)
class AtestcppGameMode : public AGameModeBase
{
	GENERATED_BODY()

protected:
	AtestcppGameMode();
	virtual void BeginPlay() override;

public:
	UPROPERTY(EditDefaultsOnly, Category = UI)
	TSubclassOf<class UUserWidget> WidgetClass;

	UPROPERTY()
	UUserWidget* WidgetInstance;
};




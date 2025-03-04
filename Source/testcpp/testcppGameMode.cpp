// Copyright Epic Games, Inc. All Rights Reserved.

#include "testcppGameMode.h"
#include "testcppCharacter.h"
#include "UObject/ConstructorHelpers.h"

AtestcppGameMode::AtestcppGameMode() : Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}

void AtestcppGameMode::BeginPlay()
{
    Super::BeginPlay();
    if (WidgetClass)
    {
        WidgetInstance = CreateWidget<UUserWidget>(GetWorld(), WidgetClass);

        if (WidgetInstance)
        {
            WidgetInstance->AddToViewport();
        }
    }
}


// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Crosshair.generated.h"

/**
 * 
 */
UCLASS()
class TESTCPP_API UCrosshair : public UUserWidget
{
	GENERATED_BODY()

public:

	virtual void NativeConstruct() override;
};

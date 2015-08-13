// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/HUD.h"
#include "FireFallHUD.generated.h"


class UFont;

/**
 * 
 */
UCLASS()
class FIREFALL_API AFireFallHUD : public AHUD
{
	GENERATED_BODY()

	AFireFallHUD(const class FObjectInitializer& PCIP);

	virtual void DrawHUD() override;
	
private:
	UFont*	HUDFont;
};

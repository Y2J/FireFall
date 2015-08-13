// Fill out your copyright notice in the Description page of Project Settings.

#include "FireFall.h"
#include "FireFallHUD.h"
#include "Engine/Font.h"

AFireFallHUD::AFireFallHUD(const class FObjectInitializer& PCIP)
	: Super(PCIP)
{
	static ConstructorHelpers::FObjectFinder<UFont> HUDFontObj(TEXT("/Engine/Enginefonts/RobotoDistanceField"));
	HUDFont = HUDFontObj.Object;
}

void AFireFallHUD::DrawHUD()
{
	Super::DrawHUD();

	
	FString TestMessage = FString::Printf(TEXT("HI~ FireFall World~~"));
	DrawText(TestMessage, FColor::White, 50, 50, HUDFont);
}

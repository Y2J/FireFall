// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "FireFall.h"
#include "FireFallGameMode.h"
#include "FireFallCharacter.h"

AFireFallGameMode::AFireFallGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/Blueprints/MyFireFallCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

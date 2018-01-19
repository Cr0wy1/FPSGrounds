// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "FPSGroundsGameMode.h"
#include "FPSGroundsHUD.h"
#include "FPSGroundsCharacter.h"
#include "UObject/ConstructorHelpers.h"

AFPSGroundsGameMode::AFPSGroundsGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AFPSGroundsHUD::StaticClass();
}

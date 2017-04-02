// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "EstrPr2.h"
#include "EstrPr2GameMode.h"
#include "EstrPr2HUD.h"
#include "EstrPr2Character.h"

AEstrPr2GameMode::AEstrPr2GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AEstrPr2HUD::StaticClass();
}

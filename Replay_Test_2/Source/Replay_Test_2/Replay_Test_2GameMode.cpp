// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "Replay_Test_2GameMode.h"
#include "Replay_Test_2HUD.h"
#include "Replay_Test_2Character.h"
#include "UObject/ConstructorHelpers.h"

AReplay_Test_2GameMode::AReplay_Test_2GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AReplay_Test_2HUD::StaticClass();
}

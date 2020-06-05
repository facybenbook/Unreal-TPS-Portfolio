// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "TPS_TestGameMode.h"
#include "TPS_TestCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATPS_TestGameMode::ATPS_TestGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

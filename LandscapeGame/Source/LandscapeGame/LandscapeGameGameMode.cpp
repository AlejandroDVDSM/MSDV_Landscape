// Copyright Epic Games, Inc. All Rights Reserved.

#include "LandscapeGameGameMode.h"
#include "LandscapeGameCharacter.h"
#include "UObject/ConstructorHelpers.h"

ALandscapeGameGameMode::ALandscapeGameGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

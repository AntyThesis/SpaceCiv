// Copyright Epic Games, Inc. All Rights Reserved.

#include "SpaceCivGameMode.h"
#include "SpaceCivCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASpaceCivGameMode::ASpaceCivGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

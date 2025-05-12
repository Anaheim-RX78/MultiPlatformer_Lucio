// Copyright Epic Games, Inc. All Rights Reserved.

#include "MultiPlatformerGameMode.h"
#include "MultiPlatformerCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMultiPlatformerGameMode::AMultiPlatformerGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

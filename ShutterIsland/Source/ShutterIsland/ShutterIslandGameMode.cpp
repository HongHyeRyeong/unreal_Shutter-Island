// Copyright Epic Games, Inc. All Rights Reserved.

#include "ShutterIslandGameMode.h"
#include "ShutterIslandCharacter.h"
#include "UObject/ConstructorHelpers.h"

AShutterIslandGameMode::AShutterIslandGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

// Copyright Epic Games, Inc. All Rights Reserved.

#include "TryVersionControlGameMode.h"
#include "TryVersionControlCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATryVersionControlGameMode::ATryVersionControlGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}

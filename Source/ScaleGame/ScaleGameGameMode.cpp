// Copyright Epic Games, Inc. All Rights Reserved.

#include "ScaleGameGameMode.h"
#include "ScaleGameCharacter.h"
#include "UObject/ConstructorHelpers.h"

AScaleGameGameMode::AScaleGameGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}

// Copyright Epic Games, Inc. All Rights Reserved.

#include "TYP_13_01_24GameMode.h"
#include "TYP_13_01_24Character.h"
#include "UObject/ConstructorHelpers.h"

ATYP_13_01_24GameMode::ATYP_13_01_24GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}

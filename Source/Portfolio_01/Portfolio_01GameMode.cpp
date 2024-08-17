// Copyright Epic Games, Inc. All Rights Reserved.

#include "Portfolio_01GameMode.h"
#include "Portfolio_01Character.h"
#include "UObject/ConstructorHelpers.h"

APortfolio_01GameMode::APortfolio_01GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

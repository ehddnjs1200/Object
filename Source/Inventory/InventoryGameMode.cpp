// Copyright Epic Games, Inc. All Rights Reserved.

#include "InventoryGameMode.h"
#include "InventoryCharacter.h"
#include "GameFramework/GameStateBase.h"
#include "UObject/ConstructorHelpers.h"

AInventoryGameMode::AInventoryGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}

	// MyGameMode.cpp
	static ConstructorHelpers::FClassFinder<AGameStateBase> GameStateClassFinder(TEXT("/Game/MyGameState"));
	if (GameStateClassFinder.Succeeded())
	{
		GameStateClass = GameStateClassFinder.Class;
	}

}

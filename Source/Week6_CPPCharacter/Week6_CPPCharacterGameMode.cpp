// Copyright Epic Games, Inc. All Rights Reserved.

#include "Week6_CPPCharacterGameMode.h"
#include "Week6_CPPCharacterCharacter.h"
#include "UObject/ConstructorHelpers.h"

AWeek6_CPPCharacterGameMode::AWeek6_CPPCharacterGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

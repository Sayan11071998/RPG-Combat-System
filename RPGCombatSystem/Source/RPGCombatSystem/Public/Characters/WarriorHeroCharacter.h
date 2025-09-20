#pragma once

#include "CoreMinimal.h"
#include "Characters/WarriorBaseCharacter.h"
#include "WarriorHeroCharacter.generated.h"

UCLASS()
class RPGCOMBATSYSTEM_API AWarriorHeroCharacter : public AWarriorBaseCharacter
{
	GENERATED_BODY()

protected:
	virtual void BeginPlay() override;
};
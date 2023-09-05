// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "TeleporterSubsystem.generated.h"

/**
 * 
 */
UCLASS()
class VRTEMPLATE_API UTeleporterSubsystem : public UWorldSubsystem
{	
	GENERATED_BODY()
public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool hasTeleported = false;

};

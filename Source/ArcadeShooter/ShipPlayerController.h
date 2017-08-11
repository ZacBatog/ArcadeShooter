// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "ShipPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class ARCADESHOOTER_API AShipPlayerController : public APlayerController
{
	GENERATED_BODY()
	
	
	//RootComponent->ComponentVelocity = FVector(10.0f, 0.0f, 0.0f);
public:
	AShipPlayerController();


};

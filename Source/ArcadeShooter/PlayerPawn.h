// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Runtime/Engine/Classes/GameFramework/SpringArmComponent.h"
#include "Runtime/Engine/Classes/Camera/CameraComponent.h"
#include "Runtime/Engine/Classes/Components/MeshComponent.h"

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "PlayerPawn.generated.h"


UCLASS()
class ARCADESHOOTER_API APlayerPawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	APlayerPawn();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

protected:
	//Camera
	UPROPERTY(EditAnywhere)
	USpringArmComponent* PlayerCameraArm;
	UCameraComponent* PlayerCamera;

public:
	//Mesh
	UPROPERTY(EditAnywhere)
	USceneComponent* PlayerMesh;
	
protected:
	UPROPERTY(EditAnywhere)
	UActorComponent* GunMuzzle;

};

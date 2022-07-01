// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "BasePlayerController.generated.h"


/**
 * 
 */
UCLASS()
class OBSTACLERUNTUTORIAL_API ABasePlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ABasePlayerController();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
	// Called to bind functionality to input
	virtual void SetupInputComponent();
	
	// declaration of a function
	void MoveForward(float AxisValue);
	void MoveRight(float AxisValue);
	
private:
	

	//rotate camera info here? (pc only)
	
};

// Fill out your copyright notice in the Description page of Project Settings.


#include "BasePlayerController.h"
#include "BasePawn.h"
#include "GameFramework/Actor.h"

ABasePlayerController::ABasePlayerController()
{
	//things to do before start of game
}


void ABasePlayerController::BeginPlay()
{
	Super::BeginPlay();

	//first thing to do is to possess the pawn (Done in Editor on Pawn BP Details)
	
}

void ABasePlayerController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ABasePlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();
	//bind inputs here
	InputComponent->BindAxis("MoveForward", this, &ABasePlayerController::MoveForward);
	InputComponent->BindAxis("MoveRight", this, &ABasePlayerController::MoveRight);
}

//axis functions
void ABasePlayerController::MoveForward(float AxisValue)
{
	ABasePawn* ControlledPawn = Cast<ABasePawn>(GetPawn());
	UE_LOG(LogTemp, Warning, TEXT("MovingForward"));
	ControlledPawn->AddMovementInput(ControlledPawn->GetActorForwardVector() * AxisValue);
}

void ABasePlayerController::MoveRight(float AxisValue)
{
	//getting my pawn
	ABasePawn* ControlledPawn = Cast<ABasePawn>(GetPawn());
	UE_LOG(LogTemp, Warning, TEXT("MovingRight"));
	ControlledPawn->AddMovementInput(ControlledPawn->GetActorRightVector()*AxisValue);
}


//action functions



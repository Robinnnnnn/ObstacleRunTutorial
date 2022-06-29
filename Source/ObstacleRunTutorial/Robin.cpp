// Fill out your copyright notice in the Description page of Project Settings.


#include "Robin.h"

// Sets default values
ARobin::ARobin()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ARobin::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ARobin::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
// Called to bind functionality to input
void ARobin::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis("MoveForward", this, &ARobin::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &ARobin::MoveRight);

	

}

//axis functions - Declare what the functions will do in relation to the axis of the pawn called upon
void ARobin::MoveForward(float AxisValue) 
{
	//UE_LOG(LogTemp, Warning, TEXT("Pressed Forward"));
	AddMovementInput(GetActorForwardVector()*AxisValue);
}

void ARobin::MoveRight(float AxisValue)
{
	//UE_LOG(LogTemp, Warning, TEXT("Pressed MoveRight"));
	AddMovementInput(GetActorRightVector()*AxisValue);
}


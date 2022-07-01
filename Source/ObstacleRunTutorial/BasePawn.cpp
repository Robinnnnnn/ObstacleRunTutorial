// Fill out your copyright notice in the Description page of Project Settings.


#include "BasePawn.h"
#include "Components/CapsuleComponent.h"

// Sets default values
ABasePawn::ABasePawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
	
	//Create Components
	BaseSceneRoot = CreateDefaultSubobject<USceneComponent>("BaseSceneComponent");
	RootComponent = BaseSceneRoot;

	PlayerCapsuleComponent = CreateDefaultSubobject<UCapsuleComponent>("BasePlayerCapsuleComponent");
	PlayerCapsuleComponent->SetupAttachment(BaseSceneRoot);
	
	StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>("BaseStaticMesh");
	StaticMeshComponent->SetupAttachment(PlayerCapsuleComponent);

	

}

// Called when the game starts or when spawned
void ABasePawn::BeginPlay()
{
	Super::BeginPlay();
	//here we construct the basic of our pawn
	//remember, when we create our character, they will be a subset of this basepawn, called playerpawn
	
}

// Called every frame
void ABasePawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ABasePawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	

}

//axis functions - Declare what the functions will do in relation to the axis of the pawn called upon
void ABasePawn::MoveForward(float AxisValue) 
{
	
}

void ABasePawn::MoveRight(float AxisValue)
{
	
}
//action functions

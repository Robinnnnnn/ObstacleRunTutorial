// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "BasePawn.generated.h"

UCLASS()
class OBSTACLERUNTUTORIAL_API ABasePawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ABasePawn();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	//components
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
	class USceneComponent* BaseSceneRoot;

	UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
	class UCapsuleComponent* PlayerCapsuleComponent;
	
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
	class UStaticMeshComponent* StaticMeshComponent;


private:
	// declaration of a function
	void MoveForward(float AxisValue);
	void MoveRight(float AxisValue);

	//rotate camera info here? (pc only)

	
};

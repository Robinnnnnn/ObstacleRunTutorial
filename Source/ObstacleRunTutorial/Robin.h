// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Robin.generated.h"

UCLASS()
class OBSTACLERUNTUTORIAL_API ARobin : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ARobin();

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

// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Enemy.generated.h"

/*
*   BeginPlay中获取目标
*   在Tick中调用LineTrace检测，然后转向目标
*   Tick->LineTraceActor
*   Tick->LineTraceActor->CanSeeActor const
*/

class ULookComponent;
class ABallProjectile;

UCLASS()
class MYTHIRD_API AEnemy : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AEnemy();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere)
	TObjectPtr<ULookComponent> LookComponent;

	// SpawnActor
	UPROPERTY(EditAnywhere)
	TSubclassOf<ABallProjectile> BallProjectileClass;

	bool bCanSeePlayer = false;
	void Fire();

	// 延时演示
	bool bPreviousCanSeePlayer = false;
	FTimerHandle FireTimerHandle;
	float FireInterval = 3.f;
	float FireDelay = 0.5f;

private:
	TObjectPtr<ACharacter> TargetCharacter;

	UPROPERTY(EditAnywhere)
	TArray<FHitResult> TArrayResult;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};

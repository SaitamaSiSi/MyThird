// Fill out your copyright notice in the Description page of Project Settings.

#include "Enemy/Enemy.h"
#include <Kismet/GameplayStatics.h>
#include <Kismet/KismetMathLibrary.h>
#include <Component/LookComponent.h>
#include <Projectile/BallProjectile.h>
#include "GameFramework/ProjectileMovementComponent.h"

// 调试使用
#include <DrawDebugHelpers.h>

// Sets default values
AEnemy::AEnemy()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// 初始化发现目标组件，绑定到根组件上
	LookComponent = CreateDefaultSubobject<ULookComponent>(TEXT("Look Component"));
	LookComponent->SetupAttachment(RootComponent);
}

// Called when the game starts or when spawned
void AEnemy::BeginPlay()
{
	Super::BeginPlay();
	// 0:获取当前第一个角色
	TargetCharacter = UGameplayStatics::GetPlayerCharacter(this, 0);
	LookComponent->SetTarget(TargetCharacter);
}

void AEnemy::Fire()
{
	if (BallProjectileClass == nullptr)
	{
		return;
	}

	FVector ForwardVector = GetActorForwardVector();
	float SpawnDistance = 40.f;
	FVector SpawnLocation = GetActorLocation() + ForwardVector * SpawnDistance;
	//GetWorld()->SpawnActor<ABallProjectile>(BallProjectileClass, SpawnLocation, GetActorRotation());

	FTransform SpawnTransform(GetActorRotation(), SpawnLocation);
	// Projectile
	ABallProjectile* Projectile = GetWorld()->SpawnActorDeferred<ABallProjectile>(BallProjectileClass, SpawnTransform);

	Projectile->GetProjectileMovementComponent()->InitialSpeed = 2300.f;
	Projectile->FinishSpawning(SpawnTransform);
}

// Called every frame
void AEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	bCanSeePlayer = LookComponent->CanSeeTarget();
	if (bCanSeePlayer != bPreviousCanSeePlayer)
	{
		if (bCanSeePlayer)
		{
			GetWorldTimerManager().SetTimer(FireTimerHandle, this, &AEnemy::Fire, FireInterval, true, FireDelay);
		}
		else
		{
			GetWorldTimerManager().ClearTimer(FireTimerHandle);
		}
	}

	bPreviousCanSeePlayer = bCanSeePlayer;
}

// Called to bind functionality to input
void AEnemy::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}


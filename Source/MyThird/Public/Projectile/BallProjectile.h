// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BallProjectile.generated.h"

class USphereComponent;
class UProjectileMovementComponent;

UCLASS()
class MYTHIRD_API ABallProjectile : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ABallProjectile();

	// The Sound
	UPROPERTY(EditAnywhere, Category = "Sound")
	TObjectPtr<USoundBase> HitSound;
	// ����Զ��
	UPROPERTY(EditAnywhere, Category = "Sound")
	TObjectPtr<USoundAttenuation> HitSoundAttenuation;
	// ��Ч
	UPROPERTY(EditAnywhere, Category = "Sound")
	TObjectPtr<UParticleSystem> HitParticle;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, Category = "Damage")
	float Damage = 40.f;

private:
	// ��ײ���
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Ball", meta = (AllowPrivateAccess = "true"))
	TObjectPtr<USphereComponent> SphereComponent;

	// �ж��켣
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Ball", meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UProjectileMovementComponent> ProjectileMovement;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	FORCEINLINE UProjectileMovementComponent* GetProjectileMovementComponent() { return ProjectileMovement; }

	UFUNCTION()
	void OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
};

// Fill out your copyright notice in the Description page of Project Settings.


#include "Projectile/BallProjectile.h"
#include "Components/SphereComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "MyThird/MyThirdCharacter.h"
#include "Interface/HealthInterface.h"
#include "Component/HealthComponent.h"
#include <Kismet/GameplayStatics.h>

// Sets default values
ABallProjectile::ABallProjectile()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SphereComponent = CreateDefaultSubobject<USphereComponent>("Sphere Collision");
	SphereComponent->SetSphereRadius(50.f);
	// ��ײԤ�裬��ͼ��BlockAll�ĵط�
	SphereComponent->SetCollisionProfileName("Ball");
	// ģ��OnHit
	SphereComponent->SetSimulatePhysics(true);
	// ���ø���
	SphereComponent->SetNotifyRigidBodyCollision(true);
	// ������ײ��Ӧ����
	//SphereComponent->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	// ��OnHit��������������UFUNCTION()�����򲻻ᱻUE�ķ���ϵͳʶ��
	SphereComponent->OnComponentHit.AddDynamic(this, &ABallProjectile::OnHit);

	SetRootComponent(SphereComponent);

	ProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>("Projectile Movement");
	ProjectileMovement->InitialSpeed = 1300.f;
}

// Called when the game starts or when spawned
void ABallProjectile::BeginPlay()
{
	Super::BeginPlay();
	SetLifeSpan(4.f);
}

// Called every frame
void ABallProjectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABallProjectile::OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	UE_LOG(LogTemp, Warning, TEXT("ABallProjectile::OnHit"));

	if (HitSound != nullptr)
	{
		UGameplayStatics::PlaySoundAtLocation(this, HitSound, GetActorLocation(), 1, FMath::RandRange(0.4f, 1.3f), 0.f, HitSoundAttenuation);
	}

	AMyThirdCharacter* Player = Cast<AMyThirdCharacter>(OtherActor);;
	if (Player != nullptr)
	{
		UHealthComponent* HealthComponent = Player->FindComponentByClass<UHealthComponent>();
		if (HealthComponent != nullptr)
		{
			HealthComponent->LoseHealth(Damage);
		}
		if (HitParticle != nullptr)
		{
			UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), HitParticle, GetActorTransform());
		}
		Destroy();
	}
}


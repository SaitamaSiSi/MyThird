// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "ThirdHUD.generated.h"

class UHealthWidget;
/**
 *
 */
UCLASS()
class MYTHIRD_API AThirdHUD : public AHUD
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly, Category = "HUD")
	TSubclassOf<UHealthWidget> HealthWidgetClass;

	void CreateHealthWidget();
	void UpdateHealthWidget(float HealthPrecent);

private:
	UPROPERTY()
	TObjectPtr<UHealthWidget> HealthInstance;
};

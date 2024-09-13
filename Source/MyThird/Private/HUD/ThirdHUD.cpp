// Fill out your copyright notice in the Description page of Project Settings.


#include "HUD/ThirdHUD.h"
#include "HUD/HealthWidget.h"

void AThirdHUD::CreateHealthWidget()
{
	APlayerController* PlayerController = GetOwningPlayerController();
	if (HealthWidgetClass != nullptr)
	{
		HealthInstance = CreateWidget<UHealthWidget>(PlayerController, HealthWidgetClass);
		HealthInstance->AddToViewport();
	}
}

void AThirdHUD::UpdateHealthWidget(float HealthPrecent)
{
	if (HealthInstance != nullptr)
	{
		HealthInstance->UpdateHealthPercent(HealthPrecent);
	}
}

// Fill out your copyright notice in the Description page of Project Settings.


#include "Game/ThirdPlayerController.h"
#include "HUD/RestartWidget.h"
#include "HUD/HealthWidget.h"
#include <HUD/ThirdHUD.h>

void AThirdPlayerController::CreateRestartWidget()
{
	if (RestartWidgetClass != nullptr)
	{
		// ��ͣ
		SetPause(true);
		SetInputMode(FInputModeUIOnly());

		// ��ʾ���
		bShowMouseCursor = true;
		RestartWidget = CreateWidget<URestartWidget>(this, RestartWidgetClass);
		// ���뵯��
		RestartWidget->AddToViewport();
	}
}

void AThirdPlayerController::DestoryRestartWidget()
{
	RestartWidget->RemoveFromParent();
	RestartWidget->Destruct();
	SetPause(false);
	SetInputMode(FInputModeGameOnly());
	bShowMouseCursor = false;
}

void AThirdPlayerController::UpdateHealthPrecent(float HealthPrecent)
{
	/*if (HealthWidget != nullptr)
	{
		HealthWidget->UpdateHealthPercent(HealthPrecent);
	}*/
	if (ThirdHUD != nullptr)
	{
		ThirdHUD->UpdateHealthWidget(HealthPrecent);
	}
}

void AThirdPlayerController::BeginPlay()
{
	Super::BeginPlay();
	/*if (HealthWidgetClass != nullptr)
	{
		HealthWidget = CreateWidget<UHealthWidget>(this, HealthWidgetClass);
		HealthWidget->AddToViewport();
	}*/

	ThirdHUD = Cast<AThirdHUD>(GetHUD());
	if (ThirdHUD != nullptr)
	{
		ThirdHUD->CreateHealthWidget();
	}
}

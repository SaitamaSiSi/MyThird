// Fill out your copyright notice in the Description page of Project Settings.


#include "HUD/RestartWidget.h"
#include "Components/Button.h"
#include "Game/ThirdPlayerController.h"
#include <Kismet/GameplayStatics.h>

void URestartWidget::NativeOnInitialized()
{
	Super::NativeOnInitialized();
	if (RestartButton != nullptr)
	{
		RestartButton->OnClicked.AddDynamic(this, &URestartWidget::OnRestartClicked);
	}
	if (ExitButton != nullptr)
	{
		ExitButton->OnClicked.AddDynamic(this, &URestartWidget::OnExitxClicked);
	}
}

void URestartWidget::OnRestartClicked()
{
	AThirdPlayerController* PlayerController = Cast<AThirdPlayerController>(GetOwningPlayer());
	if (PlayerController != nullptr)
	{
		PlayerController->DestoryRestartWidget();
	}
	UGameplayStatics::OpenLevel(this, FName(*UGameplayStatics::GetCurrentLevelName(this)));
}

void URestartWidget::OnExitxClicked()
{
	UKismetSystemLibrary::QuitGame(this, nullptr, EQuitPreference::Quit, true);
}

// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "ThirdPlayerController.generated.h"

class URestartWidget;
class UHealthWidget;
class AThirdHUD;

/**
 *
 */
UCLASS()
class MYTHIRD_API AThirdPlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<URestartWidget> RestartWidgetClass;
	void CreateRestartWidget();
	void DestoryRestartWidget();

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UHealthWidget> HealthWidgetClass;

	void UpdateHealthPrecent(float HealthPrecent);

protected:
	virtual void BeginPlay() override;

private:
	// �������Դ�������
	UPROPERTY()
	TObjectPtr<URestartWidget> RestartWidget;

	// �̶���ʾ��Ҫһ��ʼ�ʹ���������д��HUD����ͨ����ʾ������������
	UPROPERTY()
	TObjectPtr<UHealthWidget> HealthWidget;

	UPROPERTY()
	TObjectPtr<AThirdHUD> ThirdHUD;
};

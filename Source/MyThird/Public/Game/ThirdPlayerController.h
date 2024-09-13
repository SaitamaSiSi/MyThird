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
	// 弹窗可以创建销毁
	UPROPERTY()
	TObjectPtr<URestartWidget> RestartWidget;

	// 固定显示需要一开始就创建，建议写入HUD，并通过显示和隐藏来控制
	UPROPERTY()
	TObjectPtr<UHealthWidget> HealthWidget;

	UPROPERTY()
	TObjectPtr<AThirdHUD> ThirdHUD;
};

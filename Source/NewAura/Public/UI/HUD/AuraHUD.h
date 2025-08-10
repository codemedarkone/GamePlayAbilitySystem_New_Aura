// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "AuraHUD.generated.h"

class UAuraUserWidget;

/**
 * 
 * We need a variable to store the overlay widget and the overlay widget class which we want to spawn
 */
UCLASS()
class NEWAURA_API AAuraHUD : public AHUD
{
	GENERATED_BODY()
	
public:

	//Variable that stores the overlaywidget
	UPROPERTY()
	TObjectPtr<UAuraUserWidget> OverlayWidget;


protected:
	// using this temporary to show overlay on the screen
	virtual void BeginPlay() override;

private:

	//We also need to know the UCLASS, the class of widget to create and spawn
	//Lets us set it from our hud blueprint(editanywhere)
	UPROPERTY(EditAnywhere)
	TSubclassOf<UAuraUserWidget> OverlayWidgetClass;

};

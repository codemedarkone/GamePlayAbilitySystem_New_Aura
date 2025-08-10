// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AuraWidgetController.generated.h"

class UAbilitySystemComponent;
class UAttributeSet;

/**
 * This AuraWidget is responsible for getting any data from the model
 * ex. ASC, Attributeset, character
 * Anything that really matters that relates to our data
 * it will be responsible for getting that data and broadcasting it ovefr to any widgets that have there controllers set to it
 * We need a set of variables which we will get data from
 * purpose of this project we need 4 main class
 * ASC, attributeset, playerstate, playercontroller
 * 
 */
UCLASS()
class NEWAURA_API UAuraWidgetController : public UObject
{
	GENERATED_BODY()
	
protected:
	UPROPERTY(BlueprintReadOnly, Category = "WidgetController")
	TObjectPtr<APlayerController> PlayerController; 

	UPROPERTY(BlueprintReadOnly, Category = "WidgetController")
	TObjectPtr<APlayerState> PlayerState;

	UPROPERTY(BlueprintReadOnly, Category = "WidgetController")
	TObjectPtr<UAbilitySystemComponent> AbilitySystemComponent;

	UPROPERTY(BlueprintReadOnly, Category = "Widgetcontroller")
	TObjectPtr<UAttributeSet> AttributeSet; 
};

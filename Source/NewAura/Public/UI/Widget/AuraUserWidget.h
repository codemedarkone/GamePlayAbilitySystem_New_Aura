// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "AuraUserWidget.generated.h"

/**
* User widgets are responsible for what the user widgets look like on the screen when they receive data.
*They are responsible for the visuals.
* 
* This class is used for all base functionality as base class
* need this class to have a member variable for its widgetcontroller.
* To have widgets have the concept of a widgetcontroller. 
* When widgetcontroller broadcasts data our widgets will reeive the data and respond to it.
* The dependency will be 1 way from aurauserwidghet to aurawidgetcontroller
* Widgetcontroller wont know what widgets they are associated with but widgets will know what there controller is.
* 
*/
UCLASS()
class NEWAURA_API UAuraUserWidget : public UUserWidget
{
	GENERATED_BODY()
	
public:
	/*
	*We need to associate setting the WidgetController with calling WidgetController, these need to be tied closely together
	* So we creat this function to set the widget controller below. 
	* We want to call it from blueprints so its blueprintcallable. 
	*/
	UFUNCTION(BlueprintCallable)
	void SetWidgetController(UObject* InWidgetController);

	/**The UObject could be any widgetcontroller, why is why we use the generic UObject. 
	Makes it versatile
	WidgetController needs to be accessed via blueprints since all controllers will be as well that use this C++ class as there base.
	UPROPERY lets us access but not set it directly.
	*/	
	UPROPERTY(BlueprintReadOnly)
	TObjectPtr<UObject> WidgetController;

protected:

	/*
	* Once we set the widgetcontroller for a giving widget we can call this function
	* Once we want to do anything in the blueprint, we will be able to do so with this function
	*
	*/
	UFUNCTION(BlueprintImplementableEvent)
	void WidgetControllerSet();
};

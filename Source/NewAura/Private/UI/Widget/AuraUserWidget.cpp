// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/Widget/AuraUserWidget.h"

//When we set the SetWidgetController we do it with a setter as below
void UAuraUserWidget::SetWidgetController(UObject* InWidgetController)
{
	WidgetController = InWidgetController;

	/*
	*This is kicked off when widgetcontroller is set in this function
	* This sets the below function which is a blueprintimplementable
	* We can assume once below controller is set in blueprint we know our widgetcontroller will be set which is above
	* WidgetController - InWidgetController
	*/
	WidgetControllerSet();
}

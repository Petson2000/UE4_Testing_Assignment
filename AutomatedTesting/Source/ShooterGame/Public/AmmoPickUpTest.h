#pragma once
#include "CoreMinimal.h"
#include "Tests/AutomationCommon.h"
#include "Tests/AutomationEditorCommon.h"
#include "ShooterPickup_Ammo.h"

const FObjectInitializer& plsWork();

//IMPLEMENT_SIMPLE_AUTOMATION_TEST(AShooterPickup_AmmoTest, "PickUps", EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)
//bool AShooterPickup_AmmoTest::RunTest(const FString& Parameters)
//{
//	AShooterPickup_Ammo AmmoPickUp(plsWork);
//
//	TestNotNull("Cant give null ammo pickup", AmmoPickUp);
//
//	TestEqual("1 + 1 is 2", 1 + 1, 2);
//
//	//TestTrue("Pickup can only be picked up by a valid pawn", AShooterPickup_AmmoTest::CanBePickedUp(nullptr));
//
//	return true;
//}


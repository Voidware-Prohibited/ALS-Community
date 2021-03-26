// Project:         Advanced Locomotion System V4 on C++
// Copyright:       Copyright (C) 2021 Doğa Can Yanıkoğlu
// License:         MIT License (http://www.opensource.org/licenses/mit-license.php)
// Source Code:     https://github.com/dyanikoglu/ALSV4_CPP
// Original Author: Jens Bjarne Myhre
// Contributors: Doğa Can Yanıkoğlu

#pragma once

#include "CoreMinimal.h"
#include "ALSCharacterEnumLibrary.h"

#include "ALSStructEnumLibrary.generated.h"


USTRUCT(BlueprintType)
struct FALSMovementState
{
	GENERATED_BODY()

private:
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = true))
	EALSMovementState State = EALSMovementState::None;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = true))
	bool None_ = true;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = true))
	bool Grounded_ = false;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = true))
	bool InAir_ = false;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = true))
	bool Mantling_ = false;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = true))
	bool Ragdoll_ = false;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = true))
	bool Climbing_ = false;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = true))
	bool Swimming_ = false;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = true))
	bool Vehicle_ = false;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = true))
	bool Sitting_ = false;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = true))
	bool Downed_ = false;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = true))
	bool Rope_ = false;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = true))
	bool Flying_ = false;

public:
	FALSMovementState()
	{
	}

	FALSMovementState(const EALSMovementState InitialState) { *this = InitialState; }

	const bool& None() const { return None_; }
	const bool& Grounded() const { return Grounded_; }
	const bool& InAir() const { return InAir_; }
	const bool& Mantling() const { return Mantling_; }
	const bool& Ragdoll() const { return Ragdoll_; }
	const bool& Climbing() const { return Climbing_; }
	const bool& Swimming() const { return Swimming_; }
	const bool& Vehicle() const { return Vehicle_; }
	const bool& Sitting() const { return Sitting_; }
	const bool& Downed() const { return Downed_; }
	const bool& Rope() const { return Rope_; }
	const bool& Flying() const { return Flying_; }

	operator EALSMovementState() const { return State; }

	void operator=(const EALSMovementState NewState)
	{
		State = NewState;
		None_ = State == EALSMovementState::None;
		Grounded_ = State == EALSMovementState::Grounded;
		InAir_ = State == EALSMovementState::InAir;
		Mantling_ = State == EALSMovementState::Mantling;
		Ragdoll_ = State == EALSMovementState::Ragdoll;
		Climbing_ = State == EALSMovementState::Climbing;
		Swimming_ = State == EALSMovementState::Swimming;
		Vehicle_ = State == EALSMovementState::Vehicle;
		Sitting_ = State == EALSMovementState::Sitting;
		Downed_ = State == EALSMovementState::Downed;
		Rope_ = State == EALSMovementState::Rope;
		Flying_ = State == EALSMovementState::Flying;
	}
};

USTRUCT(BlueprintType)
struct FALSStance
{
	GENERATED_BODY()

private:
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = true))
	EALSStance Stance = EALSStance::Standing;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = true))
	bool Standing_ = true;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = true))
	bool Crouching_ = false;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = true))
	bool Prone_ = false;


public:
	FALSStance()
	{
	}

	FALSStance(const EALSStance InitialStance) { *this = InitialStance; }

	const bool& Standing() const { return Standing_; }
	const bool& Crouching() const { return Crouching_; }
	const bool& Prone() const { return Prone_; }

	operator EALSStance() const { return Stance; }

	void operator=(const EALSStance NewStance)
	{
		Stance = NewStance;
		Standing_ = Stance == EALSStance::Standing;
		Crouching_ = Stance == EALSStance::Crouching;
		Prone_ = Stance == EALSStance::Prone;
	}
};

USTRUCT(BlueprintType)
struct FALSRotationMode
{
	GENERATED_BODY()

private:
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = true))
	EALSRotationMode RotationMode = EALSRotationMode::VelocityDirection;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = true))
	bool VelocityDirection_ = true;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = true))
	bool LookingDirection_ = false;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = true))
	bool Aiming_ = false;

public:
	FALSRotationMode()
	{
	}

	FALSRotationMode(const EALSRotationMode InitialRotationMode) { *this = InitialRotationMode; }

	const bool& VelocityDirection() const { return VelocityDirection_; }
	const bool& LookingDirection() const { return LookingDirection_; }
	const bool& Aiming() const { return Aiming_; }

	operator EALSRotationMode() const { return RotationMode; }

	void operator=(const EALSRotationMode NewRotationMode)
	{
		RotationMode = NewRotationMode;
		VelocityDirection_ = RotationMode == EALSRotationMode::VelocityDirection;
		LookingDirection_ = RotationMode == EALSRotationMode::LookingDirection;
		Aiming_ = RotationMode == EALSRotationMode::Aiming;
	}
};

USTRUCT(BlueprintType)
struct FALSMovementDirection
{
	GENERATED_BODY()

private:
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = true))
	EALSMovementDirection MovementDirection = EALSMovementDirection::Forward;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = true))
	bool Forward_ = true;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = true))
	bool Right_ = false;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = true))
	bool Left_ = false;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = true))
	bool Backward_ = false;

public:
	FALSMovementDirection()
	{
	}

	FALSMovementDirection(const EALSMovementDirection InitialMovementDirection)
	{
		*this = InitialMovementDirection;
	}

	const bool& Forward() const { return Forward_; }
	const bool& Right() const { return Right_; }
	const bool& Left() const { return Left_; }
	const bool& Backward() const { return Backward_; }

	operator EALSMovementDirection() const { return MovementDirection; }

	void operator=(const EALSMovementDirection NewMovementDirection)
	{
		MovementDirection = NewMovementDirection;
		Forward_ = MovementDirection == EALSMovementDirection::Forward;
		Right_ = MovementDirection == EALSMovementDirection::Right;
		Left_ = MovementDirection == EALSMovementDirection::Left;
		Backward_ = MovementDirection == EALSMovementDirection::Backward;
	}
};

USTRUCT(BlueprintType)
struct FALSMovementAction
{
	GENERATED_BODY()

private:
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = true))
	EALSMovementAction Action = EALSMovementAction::None;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = true))
	bool None_ = true;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = true))
	bool LowMantle_ = false;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = true))
	bool HighMantle_ = false;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = true))
	bool Rolling_ = false;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = true))
	bool GettingUp_ = false;

public:
	FALSMovementAction()
	{
	}

	FALSMovementAction(const EALSMovementAction InitialAction) { *this = InitialAction; }

	const bool& None() const { return None_; }
	const bool& LowMantle() const { return LowMantle_; }
	const bool& HighMantle() const { return HighMantle_; }
	const bool& Rolling() const { return Rolling_; }
	const bool& GettingUp() const { return GettingUp_; }

	operator EALSMovementAction() const { return Action; }

	void operator=(const EALSMovementAction NewAction)
	{
		Action = NewAction;
		None_ = Action == EALSMovementAction::None;
		LowMantle_ = Action == EALSMovementAction::LowMantle;
		HighMantle_ = Action == EALSMovementAction::HighMantle;
		Rolling_ = Action == EALSMovementAction::Rolling;
		GettingUp_ = Action == EALSMovementAction::GettingUp;
	}
};

USTRUCT(BlueprintType)
struct FALSGait
{
	GENERATED_BODY()

private:
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = true))
	EALSGait Gait = EALSGait::Walking;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = true))
	bool Walking_ = true;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = true))
	bool Running_ = false;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = true))
	bool Sprinting_ = false;

public:
	FALSGait()
	{
	}

	FALSGait(const EALSGait InitialGait) { *this = InitialGait; }

	const bool& Walking() const { return Walking_; }
	const bool& Running() const { return Running_; }
	const bool& Sprinting() const { return Sprinting_; }

	operator EALSGait() const { return Gait; }

	void operator=(const EALSGait NewGait)
	{
		Gait = NewGait;
		Walking_ = Gait == EALSGait::Walking;
		Running_ = Gait == EALSGait::Running;
		Sprinting_ = Gait == EALSGait::Sprinting;
	}
};

USTRUCT(BlueprintType)
struct FALSOverlayState
{
	GENERATED_BODY()

private:
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = true))
	EALSOverlayState State = EALSOverlayState::Default;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = true))
	bool Default_ = true;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = true))
	bool Masculine_ = false;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = true))
	bool Feminine_ = false;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = true))
	bool Injured_ = false;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = true))
	bool HandsTied_ = false;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = true))
	bool Rifle_ = false;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = true))
	bool PistolOneHanded_ = false;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = true))
	bool PistolTwoHanded_ = false;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = true))
	bool Bow_ = false;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = true))
	bool Torch_ = false;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = true))
	bool Binoculars_ = false;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = true))
	bool Box_ = false;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = true))
	bool Barrel_ = false;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = true))
	bool Flashlight_ = false;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = true))
	bool Blueprint_ = false;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = true))
	bool MeleeUnarmed_ = false;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = true))
	bool MeleeKnife_ = false;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = true))
	bool MeleeOneHanded_ = false;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = true))
	bool MeleeTwoHanded_ = false;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = true))
	bool MeleeKatana_ = false;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = true))
	bool RocketLauncher_ = false;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = true))
	bool ItemOneHanded_ = false;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = true))
	bool ItemTwoHanded_ = false;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = true))
	bool DeviceOneHanded_ = false;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = true))
	bool DeviceTwoHanded_ = false;


public:
	FALSOverlayState()
	{
	}

	FALSOverlayState(const EALSOverlayState InitialState) { *this = InitialState; }

	const bool& Default() const { return Default_; }
	const bool& Masculine() const { return Masculine_; }
	const bool& Feminine() const { return Feminine_; }
	const bool& Injured() const { return Injured_; }
	const bool& HandsTied() const { return HandsTied_; }
	const bool& Rifle() const { return Rifle_; }
	const bool& PistolOneHanded() const { return PistolOneHanded_; }
	const bool& PistolTwoHanded() const { return PistolTwoHanded_; }
	const bool& Bow() const { return Bow_; }
	const bool& Torch() const { return Torch_; }
	const bool& Binoculars() const { return Binoculars_; }
	const bool& Box() const { return Box_; }
	const bool& Barrel() const { return Barrel_; }
	const bool& Flashlight() const { return Flashlight_; }
	const bool& Blueprint() const { return Blueprint_; }
	const bool& MeleeUnarmed() const { return MeleeUnarmed_; }
	const bool& MeleeKnife() const { return MeleeKnife_; }
	const bool& MeleeOneHanded() const { return MeleeOneHanded_; }
	const bool& MeleeTwoHanded() const { return MeleeTwoHanded_; }
	const bool& MeleeKatana() const { return MeleeKatana_; }
	const bool& RocketLauncher() const { return RocketLauncher_; }
	const bool& ItemOneHanded() const { return ItemOneHanded_; }
	const bool& ItemTwoHanded() const { return ItemTwoHanded_; }
	const bool& DeviceOneHanded() const { return DeviceOneHanded_; }
	const bool& DeviceTwoHanded() const { return DeviceTwoHanded_; }


	operator EALSOverlayState() const { return State; }

	void operator=(const EALSOverlayState NewAction)
	{
		State = NewAction;
		Default_ = State == EALSOverlayState::Default;
		Masculine_ = State == EALSOverlayState::Masculine;
		Feminine_ = State == EALSOverlayState::Feminine;
		Injured_ = State == EALSOverlayState::Injured;
		HandsTied_ = State == EALSOverlayState::HandsTied;
		Rifle_ = State == EALSOverlayState::Rifle;
		PistolOneHanded_ = State == EALSOverlayState::PistolOneHanded;
		PistolTwoHanded_ = State == EALSOverlayState::PistolTwoHanded;
		Bow_ = State == EALSOverlayState::Bow;
		Torch_ = State == EALSOverlayState::Torch;
		Binoculars_ = State == EALSOverlayState::Binoculars;
		Box_ = State == EALSOverlayState::Box;
		Barrel_ = State == EALSOverlayState::Barrel;
		Flashlight_ = State == EALSOverlayState::Flashlight;
		Blueprint_ = State == EALSOverlayState::Blueprint;
		MeleeUnarmed_ = State == EALSOverlayState::MeleeUnarmed;
		MeleeKnife_ = State == EALSOverlayState::MeleeKnife;
		MeleeOneHanded_ = State == EALSOverlayState::MeleeOneHanded;
		MeleeTwoHanded_ = State == EALSOverlayState::MeleeTwoHanded;
		MeleeKatana_ = State == EALSOverlayState::MeleeKatana;
		RocketLauncher_ = State == EALSOverlayState::RocketLauncher;
		ItemOneHanded_ = State == EALSOverlayState::ItemOneHanded;
		ItemTwoHanded_ = State == EALSOverlayState::ItemTwoHanded;
		DeviceOneHanded_ = State == EALSOverlayState::DeviceOneHanded;
		DeviceTwoHanded_ = State == EALSOverlayState::DeviceTwoHanded;

	}
};

USTRUCT(BlueprintType)
struct FALSGroundedEntryState
{
	GENERATED_BODY()

private:
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = true))
	EALSGroundedEntryState State = EALSGroundedEntryState::None;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = true))
	bool None_ = true;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = true))
	bool Roll_ = false;

public:
	FALSGroundedEntryState()
	{
	}

	FALSGroundedEntryState(const EALSGroundedEntryState InitialState) { *this = InitialState; }

	const bool& None() const { return None_; }
	const bool& Roll() const { return Roll_; }

	operator EALSGroundedEntryState() const { return State; }

	void operator=(const EALSGroundedEntryState NewState)
	{
		State = NewState;
		None_ = State == EALSGroundedEntryState::None;
		Roll_ = State == EALSGroundedEntryState::Roll;
	}
};

// Fill out your copyright notice in the Description page of Project Settings.


#include "MainAnimInstance.h"
#include "MainCharacter.h"
#include "GameFramework/Pawn.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/KismetMathLibrary.h"

void UMainAnimInstance::NativeInitializeAnimation()
{
	Super::NativeInitializeAnimation();

	if (Pawn == nullptr)
	{
		Pawn = TryGetPawnOwner();
		if (Pawn)
		{
			Main = Cast<AMainCharacter>(Pawn);
		}
	}
}

void UMainAnimInstance::UpdateAnimationProperties(float DeltaTime)
{
	if (Pawn == nullptr)
		Pawn = TryGetPawnOwner();

	if (Pawn)
	{
		FVector Speed = Pawn->GetVelocity();
		FVector LateralSpeed = FVector(Speed.X, Speed.Y, 0.f);
		MovementSpeed = LateralSpeed.Size();

		bIsInAir = Pawn->GetMovementComponent()->IsFalling();

		// handles leaning animation
		FRotator Rotation = Pawn->GetActorRotation();
		FRotator Delta = UKismetMathLibrary::NormalizedDeltaRotator(RotationLastFrame, Rotation);
		float Target = Delta.Yaw / DeltaTime;
		float Interp = FMath::FInterpTo(YawDelta, Target, DeltaTime, 6.f);
		YawDelta = FMath::Clamp(Interp, -90.f, 90.f);
		RotationLastFrame = Rotation;

		if (Main == nullptr)
			Main = Cast<AMainCharacter>(Pawn);

		if (Main)
		{
			if (Main->GetCharacterMovement()->GetCurrentAcceleration().Size() > 0)
				bIsAccelerating = true;
			else
				bIsAccelerating = false;
		}
	}
}
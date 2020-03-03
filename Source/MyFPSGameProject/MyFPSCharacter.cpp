// Fill out your copyright notice in the Description page of Project Settings.


#include "MyFPSCharacter.h"
#include "Camera/CameraComponent.h"
#include "MyFPSProjectile.h"
#include "Engine/World.h"
#include "Components/SkeletalMeshComponent.h"
#include "Engine/Engine.h"
#include "GameFramework/Actor.h"

// Sets default values
AMyFPSCharacter::AMyFPSCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MyFPSCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("MyCamera"));
	MyFPSCameraComponent->SetupAttachment((USceneComponent*)GetCapsuleComponent());
	MyFPSCameraComponent->SetRelativeLocation(FVector(0.0f, 0.0f, 50.0f + BaseEyeHeight));
	// Allow the pawn to control camera rotation
	MyFPSCameraComponent->bUsePawnControlRotation = true;

	MyFPSMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("FirstPersonMesh"));
	MyFPSMesh->SetOnlyOwnerSee(true);
	MyFPSMesh->SetupAttachment(MyFPSCameraComponent);
	// 禁用环境阴影
	MyFPSMesh->bCastDynamicShadow = false;
	MyFPSMesh->CastShadow = false;
	 
	// 设置玩家看不见身体模型（？没看到效果） GetMesh返回绑定在character类中的骨骼模型
	GetMesh()->SetOwnerNoSee(true);
}

// Called when the game starts or when spawned
void AMyFPSCharacter::BeginPlay()
{
	Super::BeginPlay();
	
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("We are using MyFPSCharacter"));
	}
}

// Called every frame
void AMyFPSCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMyFPSCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis("MoveForward", this, &AMyFPSCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &AMyFPSCharacter::MoveRight);
	PlayerInputComponent->BindAxis("Turn", this, &AMyFPSCharacter::AddControllerYawInput);
	PlayerInputComponent->BindAxis("LookUp", this, &AMyFPSCharacter::AddControllerPitchInput);

	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &AMyFPSCharacter::StartJump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &AMyFPSCharacter::StopJump);
	PlayerInputComponent->BindAction("Fire", IE_Pressed, this, &AMyFPSCharacter::Fire);
}

void AMyFPSCharacter::MoveForward(float AxisValue)
{
	FVector Direction = FRotationMatrix(Controller->GetControlRotation()).GetScaledAxis(EAxis::X);
	AddMovementInput(Direction, AxisValue);
}

void AMyFPSCharacter::MoveRight(float AxisValue)
{
	FVector Direction = FRotationMatrix(Controller->GetControlRotation()).GetScaledAxis(EAxis::Y);
	AddMovementInput(Direction, AxisValue);
}

void AMyFPSCharacter::StartJump()
{
	bPressedJump = true;
}

void AMyFPSCharacter::StopJump()
{
	bPressedJump = false;
}

void AMyFPSCharacter::Fire()
{
	if (ProjectileClass)
	{
		FVector CameraLocation;
		FRotator CameraRotation;
		GetActorEyesViewPoint(CameraLocation, CameraRotation);

		FVector MuzzleLocation = CameraLocation + FTransform(CameraRotation).TransformVector(MuzzleOffset);
		FRotator MuzzleRotation = CameraRotation;

		MuzzleRotation.Pitch += 10.0f;
		UWorld* World = GetWorld();
		if (World)
		{
			FActorSpawnParameters SpawnParams;
			SpawnParams.Owner = this;
			SpawnParams.Instigator = Instigator;
			AMyFPSProjectile* Projectile = World->SpawnActor<AMyFPSProjectile>(ProjectileClass, MuzzleLocation, MuzzleRotation, SpawnParams);
			if (Projectile)
			{
				FVector launchDirection = MuzzleRotation.Vector();
				Projectile->FireInDirection(launchDirection);
			}
		}
	}
}


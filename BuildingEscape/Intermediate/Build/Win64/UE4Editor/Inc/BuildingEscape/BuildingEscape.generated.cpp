// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "BuildingEscape.h"
#include "BuildingEscape.generated.dep.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCode1BuildingEscape() {}
#if USE_COMPILED_IN_NATIVES
// Cross Module References
	ENGINE_API class UClass* Z_Construct_UClass_AGameModeBase();
	ENGINE_API class UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API class UClass* Z_Construct_UClass_ATriggerVolume_NoRegister();

	BUILDINGESCAPE_API class UClass* Z_Construct_UClass_ABuildingEscapeGameModeBase_NoRegister();
	BUILDINGESCAPE_API class UClass* Z_Construct_UClass_ABuildingEscapeGameModeBase();
	BUILDINGESCAPE_API class UClass* Z_Construct_UClass_UGrabber_NoRegister();
	BUILDINGESCAPE_API class UClass* Z_Construct_UClass_UGrabber();
	BUILDINGESCAPE_API class UFunction* Z_Construct_UDelegateFunction_BuildingEscape_DoorEvent__DelegateSignature();
	BUILDINGESCAPE_API class UClass* Z_Construct_UClass_UOpenDoor_NoRegister();
	BUILDINGESCAPE_API class UClass* Z_Construct_UClass_UOpenDoor();
	BUILDINGESCAPE_API class UClass* Z_Construct_UClass_UPositionReporter_NoRegister();
	BUILDINGESCAPE_API class UClass* Z_Construct_UClass_UPositionReporter();
	BUILDINGESCAPE_API class UPackage* Z_Construct_UPackage__Script_BuildingEscape();
	void ABuildingEscapeGameModeBase::StaticRegisterNativesABuildingEscapeGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ABuildingEscapeGameModeBase_NoRegister()
	{
		return ABuildingEscapeGameModeBase::StaticClass();
	}
	UClass* Z_Construct_UClass_ABuildingEscapeGameModeBase()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AGameModeBase();
			Z_Construct_UPackage__Script_BuildingEscape();
			OuterClass = ABuildingEscapeGameModeBase::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900288;


				static TCppClassTypeInfo<TCppClassTypeTraits<ABuildingEscapeGameModeBase> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("BuildingEscapeGameModeBase.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("BuildingEscapeGameModeBase.h"));
				MetaData->SetValue(OuterClass, TEXT("ShowCategories"), TEXT("Input|MouseInput Input|TouchInput"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABuildingEscapeGameModeBase, 4068982692);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABuildingEscapeGameModeBase(Z_Construct_UClass_ABuildingEscapeGameModeBase, &ABuildingEscapeGameModeBase::StaticClass, TEXT("/Script/BuildingEscape"), TEXT("ABuildingEscapeGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABuildingEscapeGameModeBase);
	void UGrabber::StaticRegisterNativesUGrabber()
	{
	}
	UClass* Z_Construct_UClass_UGrabber_NoRegister()
	{
		return UGrabber::StaticClass();
	}
	UClass* Z_Construct_UClass_UGrabber()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UActorComponent();
			Z_Construct_UPackage__Script_BuildingEscape();
			OuterClass = UGrabber::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20B00080;


				static TCppClassTypeInfo<TCppClassTypeTraits<UGrabber> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintSpawnableComponent"), TEXT(""));
				MetaData->SetValue(OuterClass, TEXT("ClassGroupNames"), TEXT("Custom"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("Grabber.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Grabber.h"));
				MetaData->SetValue(OuterClass, TEXT("ToolTip"), TEXT("#include \"PhysicsEngine/PhysicsHandleComponent.h\""));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGrabber, 3144236850);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGrabber(Z_Construct_UClass_UGrabber, &UGrabber::StaticClass, TEXT("/Script/BuildingEscape"), TEXT("UGrabber"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGrabber);
	UFunction* Z_Construct_UDelegateFunction_BuildingEscape_DoorEvent__DelegateSignature()
	{
		UObject* Outer=Z_Construct_UPackage__Script_BuildingEscape();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("DoorEvent__DelegateSignature"), RF_Public|RF_Transient|RF_MarkAsNative) UDelegateFunction(FObjectInitializer(), NULL, 0x00130000, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("OpenDoor.h"));
#endif
		}
		return ReturnFunction;
	}
	void UOpenDoor::StaticRegisterNativesUOpenDoor()
	{
	}
	UClass* Z_Construct_UClass_UOpenDoor_NoRegister()
	{
		return UOpenDoor::StaticClass();
	}
	UClass* Z_Construct_UClass_UOpenDoor()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UActorComponent();
			Z_Construct_UPackage__Script_BuildingEscape();
			OuterClass = UOpenDoor::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20B00080;


PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_TriggerMass = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("TriggerMass"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(TriggerMass, UOpenDoor), 0x0040000000000001);
				UProperty* NewProp_PressurePlate = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("PressurePlate"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(PressurePlate, UOpenDoor), 0x0040000000000001, Z_Construct_UClass_ATriggerVolume_NoRegister());
				UProperty* NewProp_OnClose = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("OnClose"), RF_Public|RF_Transient|RF_MarkAsNative) UMulticastDelegateProperty(CPP_PROPERTY_BASE(OnClose, UOpenDoor), 0x0010000010080000, Z_Construct_UDelegateFunction_BuildingEscape_DoorEvent__DelegateSignature());
				UProperty* NewProp_OnOpen = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("OnOpen"), RF_Public|RF_Transient|RF_MarkAsNative) UMulticastDelegateProperty(CPP_PROPERTY_BASE(OnOpen, UOpenDoor), 0x0010000010080000, Z_Construct_UDelegateFunction_BuildingEscape_DoorEvent__DelegateSignature());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				static TCppClassTypeInfo<TCppClassTypeTraits<UOpenDoor> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintSpawnableComponent"), TEXT(""));
				MetaData->SetValue(OuterClass, TEXT("ClassGroupNames"), TEXT("Custom"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("OpenDoor.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("OpenDoor.h"));
				MetaData->SetValue(NewProp_TriggerMass, TEXT("Category"), TEXT("OpenDoor"));
				MetaData->SetValue(NewProp_TriggerMass, TEXT("ModuleRelativePath"), TEXT("OpenDoor.h"));
				MetaData->SetValue(NewProp_PressurePlate, TEXT("Category"), TEXT("OpenDoor"));
				MetaData->SetValue(NewProp_PressurePlate, TEXT("ModuleRelativePath"), TEXT("OpenDoor.h"));
				MetaData->SetValue(NewProp_OnClose, TEXT("ModuleRelativePath"), TEXT("OpenDoor.h"));
				MetaData->SetValue(NewProp_OnOpen, TEXT("ModuleRelativePath"), TEXT("OpenDoor.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOpenDoor, 4096711819);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOpenDoor(Z_Construct_UClass_UOpenDoor, &UOpenDoor::StaticClass, TEXT("/Script/BuildingEscape"), TEXT("UOpenDoor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOpenDoor);
	void UPositionReporter::StaticRegisterNativesUPositionReporter()
	{
	}
	UClass* Z_Construct_UClass_UPositionReporter_NoRegister()
	{
		return UPositionReporter::StaticClass();
	}
	UClass* Z_Construct_UClass_UPositionReporter()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UActorComponent();
			Z_Construct_UPackage__Script_BuildingEscape();
			OuterClass = UPositionReporter::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20B00080;


				static TCppClassTypeInfo<TCppClassTypeTraits<UPositionReporter> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintSpawnableComponent"), TEXT(""));
				MetaData->SetValue(OuterClass, TEXT("ClassGroupNames"), TEXT("Custom"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("PositionReporter.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("PositionReporter.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPositionReporter, 4042277270);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPositionReporter(Z_Construct_UClass_UPositionReporter, &UPositionReporter::StaticClass, TEXT("/Script/BuildingEscape"), TEXT("UPositionReporter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPositionReporter);
	UPackage* Z_Construct_UPackage__Script_BuildingEscape()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			ReturnPackage = CastChecked<UPackage>(StaticFindObjectFast(UPackage::StaticClass(), nullptr, FName(TEXT("/Script/BuildingEscape")), false, false));
			ReturnPackage->SetPackageFlags(PKG_CompiledIn | 0x00000000);
			FGuid Guid;
			Guid.A = 0x5B5DDC8B;
			Guid.B = 0xF91E102F;
			Guid.C = 0x00000000;
			Guid.D = 0x00000000;
			ReturnPackage->SetGuid(Guid);

			Z_Construct_UDelegateFunction_BuildingEscape_DoorEvent__DelegateSignature();
		}
		return ReturnPackage;
	}
#endif
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION

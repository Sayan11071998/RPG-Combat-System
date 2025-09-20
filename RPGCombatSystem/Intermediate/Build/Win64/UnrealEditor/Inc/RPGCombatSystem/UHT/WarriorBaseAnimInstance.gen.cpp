// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RPGCombatSystem/Public/AnimInstances/WarriorBaseAnimInstance.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWarriorBaseAnimInstance() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
RPGCOMBATSYSTEM_API UClass* Z_Construct_UClass_UWarriorBaseAnimInstance();
RPGCOMBATSYSTEM_API UClass* Z_Construct_UClass_UWarriorBaseAnimInstance_NoRegister();
UPackage* Z_Construct_UPackage__Script_RPGCombatSystem();
// End Cross Module References

// Begin Class UWarriorBaseAnimInstance
void UWarriorBaseAnimInstance::StaticRegisterNativesUWarriorBaseAnimInstance()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWarriorBaseAnimInstance);
UClass* Z_Construct_UClass_UWarriorBaseAnimInstance_NoRegister()
{
	return UWarriorBaseAnimInstance::StaticClass();
}
struct Z_Construct_UClass_UWarriorBaseAnimInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "AnimInstances/WarriorBaseAnimInstance.h" },
		{ "ModuleRelativePath", "Public/AnimInstances/WarriorBaseAnimInstance.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWarriorBaseAnimInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UWarriorBaseAnimInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_RPGCombatSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWarriorBaseAnimInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWarriorBaseAnimInstance_Statics::ClassParams = {
	&UWarriorBaseAnimInstance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWarriorBaseAnimInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UWarriorBaseAnimInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWarriorBaseAnimInstance()
{
	if (!Z_Registration_Info_UClass_UWarriorBaseAnimInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWarriorBaseAnimInstance.OuterSingleton, Z_Construct_UClass_UWarriorBaseAnimInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWarriorBaseAnimInstance.OuterSingleton;
}
template<> RPGCOMBATSYSTEM_API UClass* StaticClass<UWarriorBaseAnimInstance>()
{
	return UWarriorBaseAnimInstance::StaticClass();
}
UWarriorBaseAnimInstance::UWarriorBaseAnimInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWarriorBaseAnimInstance);
UWarriorBaseAnimInstance::~UWarriorBaseAnimInstance() {}
// End Class UWarriorBaseAnimInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_sayan_Projects_RPG_Combat_System_RPGCombatSystem_Source_RPGCombatSystem_Public_AnimInstances_WarriorBaseAnimInstance_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWarriorBaseAnimInstance, UWarriorBaseAnimInstance::StaticClass, TEXT("UWarriorBaseAnimInstance"), &Z_Registration_Info_UClass_UWarriorBaseAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWarriorBaseAnimInstance), 2155040218U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sayan_Projects_RPG_Combat_System_RPGCombatSystem_Source_RPGCombatSystem_Public_AnimInstances_WarriorBaseAnimInstance_h_744895585(TEXT("/Script/RPGCombatSystem"),
	Z_CompiledInDeferFile_FID_Users_sayan_Projects_RPG_Combat_System_RPGCombatSystem_Source_RPGCombatSystem_Public_AnimInstances_WarriorBaseAnimInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_sayan_Projects_RPG_Combat_System_RPGCombatSystem_Source_RPGCombatSystem_Public_AnimInstances_WarriorBaseAnimInstance_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

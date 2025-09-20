// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RPGCombatSystem/Public/AnimInstances/Hero/WarriorHeroCharacterAnimInstance.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWarriorHeroCharacterAnimInstance() {}

// Begin Cross Module References
RPGCOMBATSYSTEM_API UClass* Z_Construct_UClass_UWarriorCharacterAnimInstance();
RPGCOMBATSYSTEM_API UClass* Z_Construct_UClass_UWarriorHeroCharacterAnimInstance();
RPGCOMBATSYSTEM_API UClass* Z_Construct_UClass_UWarriorHeroCharacterAnimInstance_NoRegister();
UPackage* Z_Construct_UPackage__Script_RPGCombatSystem();
// End Cross Module References

// Begin Class UWarriorHeroCharacterAnimInstance
void UWarriorHeroCharacterAnimInstance::StaticRegisterNativesUWarriorHeroCharacterAnimInstance()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWarriorHeroCharacterAnimInstance);
UClass* Z_Construct_UClass_UWarriorHeroCharacterAnimInstance_NoRegister()
{
	return UWarriorHeroCharacterAnimInstance::StaticClass();
}
struct Z_Construct_UClass_UWarriorHeroCharacterAnimInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "AnimInstances/Hero/WarriorHeroCharacterAnimInstance.h" },
		{ "ModuleRelativePath", "Public/AnimInstances/Hero/WarriorHeroCharacterAnimInstance.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWarriorHeroCharacterAnimInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UWarriorHeroCharacterAnimInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWarriorCharacterAnimInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_RPGCombatSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWarriorHeroCharacterAnimInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWarriorHeroCharacterAnimInstance_Statics::ClassParams = {
	&UWarriorHeroCharacterAnimInstance::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWarriorHeroCharacterAnimInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UWarriorHeroCharacterAnimInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWarriorHeroCharacterAnimInstance()
{
	if (!Z_Registration_Info_UClass_UWarriorHeroCharacterAnimInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWarriorHeroCharacterAnimInstance.OuterSingleton, Z_Construct_UClass_UWarriorHeroCharacterAnimInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWarriorHeroCharacterAnimInstance.OuterSingleton;
}
template<> RPGCOMBATSYSTEM_API UClass* StaticClass<UWarriorHeroCharacterAnimInstance>()
{
	return UWarriorHeroCharacterAnimInstance::StaticClass();
}
UWarriorHeroCharacterAnimInstance::UWarriorHeroCharacterAnimInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWarriorHeroCharacterAnimInstance);
UWarriorHeroCharacterAnimInstance::~UWarriorHeroCharacterAnimInstance() {}
// End Class UWarriorHeroCharacterAnimInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_sayan_Projects_RPG_Combat_System_RPGCombatSystem_Source_RPGCombatSystem_Public_AnimInstances_Hero_WarriorHeroCharacterAnimInstance_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWarriorHeroCharacterAnimInstance, UWarriorHeroCharacterAnimInstance::StaticClass, TEXT("UWarriorHeroCharacterAnimInstance"), &Z_Registration_Info_UClass_UWarriorHeroCharacterAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWarriorHeroCharacterAnimInstance), 1604916201U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sayan_Projects_RPG_Combat_System_RPGCombatSystem_Source_RPGCombatSystem_Public_AnimInstances_Hero_WarriorHeroCharacterAnimInstance_h_1267309374(TEXT("/Script/RPGCombatSystem"),
	Z_CompiledInDeferFile_FID_Users_sayan_Projects_RPG_Combat_System_RPGCombatSystem_Source_RPGCombatSystem_Public_AnimInstances_Hero_WarriorHeroCharacterAnimInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_sayan_Projects_RPG_Combat_System_RPGCombatSystem_Source_RPGCombatSystem_Public_AnimInstances_Hero_WarriorHeroCharacterAnimInstance_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

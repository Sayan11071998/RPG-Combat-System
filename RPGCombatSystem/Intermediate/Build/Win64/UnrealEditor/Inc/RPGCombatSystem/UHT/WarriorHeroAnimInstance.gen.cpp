// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RPGCombatSystem/Public/AnimInstances/Hero/WarriorHeroAnimInstance.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWarriorHeroAnimInstance() {}

// Begin Cross Module References
RPGCOMBATSYSTEM_API UClass* Z_Construct_UClass_UWarriorCharacterAnimInstance();
RPGCOMBATSYSTEM_API UClass* Z_Construct_UClass_UWarriorHeroAnimInstance();
RPGCOMBATSYSTEM_API UClass* Z_Construct_UClass_UWarriorHeroAnimInstance_NoRegister();
UPackage* Z_Construct_UPackage__Script_RPGCombatSystem();
// End Cross Module References

// Begin Class UWarriorHeroAnimInstance
void UWarriorHeroAnimInstance::StaticRegisterNativesUWarriorHeroAnimInstance()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWarriorHeroAnimInstance);
UClass* Z_Construct_UClass_UWarriorHeroAnimInstance_NoRegister()
{
	return UWarriorHeroAnimInstance::StaticClass();
}
struct Z_Construct_UClass_UWarriorHeroAnimInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "AnimInstances/Hero/WarriorHeroAnimInstance.h" },
		{ "ModuleRelativePath", "Public/AnimInstances/Hero/WarriorHeroAnimInstance.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWarriorHeroAnimInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UWarriorHeroAnimInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWarriorCharacterAnimInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_RPGCombatSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWarriorHeroAnimInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWarriorHeroAnimInstance_Statics::ClassParams = {
	&UWarriorHeroAnimInstance::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWarriorHeroAnimInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UWarriorHeroAnimInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWarriorHeroAnimInstance()
{
	if (!Z_Registration_Info_UClass_UWarriorHeroAnimInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWarriorHeroAnimInstance.OuterSingleton, Z_Construct_UClass_UWarriorHeroAnimInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWarriorHeroAnimInstance.OuterSingleton;
}
template<> RPGCOMBATSYSTEM_API UClass* StaticClass<UWarriorHeroAnimInstance>()
{
	return UWarriorHeroAnimInstance::StaticClass();
}
UWarriorHeroAnimInstance::UWarriorHeroAnimInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWarriorHeroAnimInstance);
UWarriorHeroAnimInstance::~UWarriorHeroAnimInstance() {}
// End Class UWarriorHeroAnimInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_sayan_Projects_RPG_Combat_System_RPGCombatSystem_Source_RPGCombatSystem_Public_AnimInstances_Hero_WarriorHeroAnimInstance_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWarriorHeroAnimInstance, UWarriorHeroAnimInstance::StaticClass, TEXT("UWarriorHeroAnimInstance"), &Z_Registration_Info_UClass_UWarriorHeroAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWarriorHeroAnimInstance), 3833026479U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sayan_Projects_RPG_Combat_System_RPGCombatSystem_Source_RPGCombatSystem_Public_AnimInstances_Hero_WarriorHeroAnimInstance_h_3346760429(TEXT("/Script/RPGCombatSystem"),
	Z_CompiledInDeferFile_FID_Users_sayan_Projects_RPG_Combat_System_RPGCombatSystem_Source_RPGCombatSystem_Public_AnimInstances_Hero_WarriorHeroAnimInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_sayan_Projects_RPG_Combat_System_RPGCombatSystem_Source_RPGCombatSystem_Public_AnimInstances_Hero_WarriorHeroAnimInstance_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

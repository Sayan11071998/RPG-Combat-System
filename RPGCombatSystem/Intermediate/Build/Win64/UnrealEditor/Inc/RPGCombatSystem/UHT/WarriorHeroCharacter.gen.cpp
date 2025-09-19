// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RPGCombatSystem/Public/Characters/WarriorHeroCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWarriorHeroCharacter() {}

// Begin Cross Module References
RPGCOMBATSYSTEM_API UClass* Z_Construct_UClass_AWarriorBaseCharacter();
RPGCOMBATSYSTEM_API UClass* Z_Construct_UClass_AWarriorHeroCharacter();
RPGCOMBATSYSTEM_API UClass* Z_Construct_UClass_AWarriorHeroCharacter_NoRegister();
UPackage* Z_Construct_UPackage__Script_RPGCombatSystem();
// End Cross Module References

// Begin Class AWarriorHeroCharacter
void AWarriorHeroCharacter::StaticRegisterNativesAWarriorHeroCharacter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWarriorHeroCharacter);
UClass* Z_Construct_UClass_AWarriorHeroCharacter_NoRegister()
{
	return AWarriorHeroCharacter::StaticClass();
}
struct Z_Construct_UClass_AWarriorHeroCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Characters/WarriorHeroCharacter.h" },
		{ "ModuleRelativePath", "Public/Characters/WarriorHeroCharacter.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWarriorHeroCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AWarriorHeroCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AWarriorBaseCharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_RPGCombatSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWarriorHeroCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AWarriorHeroCharacter_Statics::ClassParams = {
	&AWarriorHeroCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWarriorHeroCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AWarriorHeroCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AWarriorHeroCharacter()
{
	if (!Z_Registration_Info_UClass_AWarriorHeroCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWarriorHeroCharacter.OuterSingleton, Z_Construct_UClass_AWarriorHeroCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AWarriorHeroCharacter.OuterSingleton;
}
template<> RPGCOMBATSYSTEM_API UClass* StaticClass<AWarriorHeroCharacter>()
{
	return AWarriorHeroCharacter::StaticClass();
}
AWarriorHeroCharacter::AWarriorHeroCharacter() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AWarriorHeroCharacter);
AWarriorHeroCharacter::~AWarriorHeroCharacter() {}
// End Class AWarriorHeroCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_sayan_Projects_RPG_Combat_System_RPGCombatSystem_Source_RPGCombatSystem_Public_Characters_WarriorHeroCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AWarriorHeroCharacter, AWarriorHeroCharacter::StaticClass, TEXT("AWarriorHeroCharacter"), &Z_Registration_Info_UClass_AWarriorHeroCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWarriorHeroCharacter), 2422426250U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sayan_Projects_RPG_Combat_System_RPGCombatSystem_Source_RPGCombatSystem_Public_Characters_WarriorHeroCharacter_h_2251005705(TEXT("/Script/RPGCombatSystem"),
	Z_CompiledInDeferFile_FID_Users_sayan_Projects_RPG_Combat_System_RPGCombatSystem_Source_RPGCombatSystem_Public_Characters_WarriorHeroCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_sayan_Projects_RPG_Combat_System_RPGCombatSystem_Source_RPGCombatSystem_Public_Characters_WarriorHeroCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

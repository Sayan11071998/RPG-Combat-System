// SayanNandi

using UnrealBuildTool;
using System.Collections.Generic;

public class RPGCombatSystemEditorTarget : TargetRules
{
	public RPGCombatSystemEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V5;

		ExtraModuleNames.AddRange( new string[] { "RPGCombatSystem" } );
	}
}

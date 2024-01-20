//Crit Failure Effects here
DialogueSuccessType
{
	  Type = "CriticalFailure";
},
TagEffect
{
	Filter = "Source.hasNotTag.LoveDebuff";
	ApplyTo = "Self";
	Tags = array{"LoveDebuff"};
	Duration = 2400.0;
},
VisualEffect
{
	ApplyTo = "Target";
	VisualName = "Insulted";
	Duration = 5.0;
},
ModifierEffect
{
	ApplyTo = "Source";
	Tags = array{"StartRomance","LoveDebuff"};
	ActorValue = "Charisma";
	Mod = -2;
	Duration = 600.0;
	Recover = true;
},
DisplayEffect
{
	Tags = array{"Rejected","LoveDebuff"};
	ApplyTo = "Source";
	DisplayGroup = "wound";
	DisplayName = "$effect.rejected";
	Duration = 600.0;
};
FunctionTriggerAction
{
	Filter = "!IsControlledByHuman";
	ApplyTo = "Source";
	Actions = array{"NPCDynRandomFollowUpShort"};
};
FunctionTriggerAction
{
	Filter = "!IsControlledByHuman";
	ApplyTo = "Target";
	Actions = array{"NPCRandomFollowUpShort"};
};

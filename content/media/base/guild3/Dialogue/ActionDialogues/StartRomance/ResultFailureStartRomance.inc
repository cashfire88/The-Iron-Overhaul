//Failure Effects Here
DialogueSuccessType
{
	  Type = "Failure";
},
VisualEffect
{
	ApplyTo = "Target";
	VisualName = "Insulted";
	Duration = 5.0;
},
TagEffect
{
	Filter = "Source.hasNotTag.LoveDebuff";
	ApplyTo = "Self";
	Tags = array{"LoveDebuff"};
	Duration = 2400.0;
},
ModifierEffect
{
	ApplyTo = "Source";
	Tags = array{"StartRomance","LoveDebuff"};
	ActorValue = "Charisma";
	Mod = -1;
	Duration = 2400.0;
	Recover = true;
},
ModifierEffect
{
	ApplyTo = "Source";
	Tags = array{"StartRomance","LoveDebuff"};
	ActorValue = "Intelligence";
	Mod = -1;
	Duration = 2400.0;
	Recover = true;
},
ModifierEffect
{
	ApplyTo = "Source";
	Tags = array{"StartRomance","LoveDebuff"};
	ActorValue = "Perception";
	Mod = -1;
	Duration = 2400.0;
	Recover = true;
},
DisplayEffect
{
	Tags = array{"Rejected"};
	ApplyTo = "Source";
	DisplayGroup = "wound";
	DisplayName = "$effect.rejected";
	Duration = 2400.0;
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

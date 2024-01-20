//Failure Effects Here
DialogueSuccessType
{
	  Type = "Failure";
},
FunctionUpdateRelationship
{
	AffectLiaison = "-15 * ((0.75 * hasTag.BuffEasy) + (1 * hasTag.BuffNormal) + (1.25 * hasTag.BuffHard) + (1.5 * hasTag.BuffImpossible))";
},				
FunctionApplyResults
{
	ResultObjectIds = array{"RomPref.Nothing"};
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
	Mod = -2;
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
ModifierEffect
{
	ApplyTo = "Source";
	Tags = array{"StartRomance","LoveDebuff"};
	ActorValue = "Intelligence";
	Mod = -1;
	Duration = 2400.0;
	Recover = true;
},
DisplayEffect
{
	Tags = array{"Rejected","LoveDebuff"};
	ApplyTo = "Source";
	DisplayGroup = "wound";
	DisplayName = "$effect.rejected";
	Duration = 2400.0;
},
FunctionSendMessage
{
	ApplyTo = "Source";
	Description = "StartLiaisonActionFailed";
},
FunctionTriggerAction
{
	Filter = "!IsControlledByHuman";
	ApplyTo = "Source";
	Actions = array{"NPCDynRandomFollowUpShort"};
},
FunctionTriggerAction
{
	Filter = "!IsControlledByHuman";
	ApplyTo = "Target";
	Actions = array{"NPCRandomFollowUpShort"};
},

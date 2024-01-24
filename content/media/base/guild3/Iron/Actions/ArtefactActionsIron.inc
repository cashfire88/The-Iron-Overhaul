"ApplyAuDeToilette" = G3ActionTemplate //Paralysis poison
{
	UICategory = "Artifact";
	ActionClassName = "UseArtefactAction";
	GUIPresent = true;
	GUIData = array
	{
		ActionGUIData
		{
			IsCharacter = 1;
			BelongsToOwnFamily = 1;
		},
		@base/AllNeutralNPCs
	};
	UsableBy = array{ "$loca.key.anyone" };

    IconName = "AuDeToilette",

	ActionActor = "Character";
	TargetActor = "Character";
	
	SourceScoreFormula = "0.2 * (Strength + Dexterity + Perception + Charisma + Intelligence) + Dexterity + (Stealth / 2)";
	TargetScoreFormula = "0.2 * (Strength + Dexterity + Perception + Charisma + Intelligence) + Perception + Target.hasTag.eventbuffSenseForDanger * 10";	

	DesiredProfiles = array
	{
		TargetProfileCharacter
		{
			IsSourceHuman = 3;

			Adult = 3;
			CloseToActor = 1;
			Boat = -3;
			FamilyProfile = TargetProfileFamily
			{
				MyFamily = -3;
				Alliance = -2;
				Feud = 2;
				GoodRelationWithMe = -2;
				HigherRank = 1;
				PoliticalImportance = -1;
				SocialHigher = 1;
			};
			CurrentBuildingProfiles = array
			{
				TargetProfileBuilding // somewhere in the world
				{
					Exists = -3;
				},
			};
		},
		TargetProfileCharacter
		{
			IsSourceHuman = -3;

			Adult = 3;
			CloseToActor = 1;
			Boat = -3;
			FamilyProfile = TargetProfileFamily
			{
				MyFamily = -3;
				Alliance = -3;
				Feud = 2;
				GoodRelationWithMe = -2;
				HigherRank = 1;
				PoliticalImportance = -1;
				SocialHigher = 1;
			};
			CurrentBuildingProfiles = array
			{
				TargetProfileBuilding // somewhere in the world
				{
					Exists = -3;
				},
			};
		}
	};
	
	ArtefactName = "AuDeToilette";
	BaseRewardXP = 22;
	Cooldown = 0.04167; //1 hour

	ActionName = "ApplyAuDeToilette";
	DisplayName = "$AuDeToilette.iron.name";
	Description = "$AuDeToilette.iron.desc";
	Instruction = "$callToAction.CharacterAdultNotEmployeeNotPlayers";

	CanFail = true;
	IsAggression = true;
	IsImmediatelyKnownByTarget = false;

	MoralAlignmentShift = 0.2;
	MoralAlignment = MoralAlignment
	{
		Values = array{-0.1,-0.1,-0.1};
	};

	CustomAnimationPool = array
	{
		CustomAnimationInfo = array {"throwing_bomb", 0, -1, -1};
	};
	AnimationProps = array
	{
		PropSpawnDesc { PropNames = array { "vinecup/vinecup" }; };
	};
   
   
	DistanceFromTarget = 35;
	DistanceFromTargetMin = 35;
	CriticalFactor = 1; // "0" chance for critical successes and critical failures

	SuccessResult = array
	{
		FunctionTriggerAction
		{
			ApplyTo = "Source";
			Actions = array{"ApplyAuDeToiletteEffect"};
		},
		FunctionTrackObjectiveProgress
		{
			Amount = 5;
			ObjectiveTypename = "IncreaseSecurity";
		},
		FunctionAffectNeeds
		{
			ApplyTo = "Target";
			ProductType = 6;
			Amount = -0.06;
		},
		FunctionAffectNeeds
		{
			ApplyTo = "Target";
			ProductType = 7;
			Amount = 0.05;
		},
	};
	
	FailureResult = array
	{				
		VisualEffect
		{
			ApplyTo = "Target";
			VisualName = "Insulted";
			Duration = 10.0;
		};

		DisplayEffect
		{
			Tags = array{"Alerted"};
			ApplyTo = "Target";
			DisplayGroup = "alarm";
			DisplayName = "$effect.CrimeVictim";
			Duration = 540.0;
		};
		
		ModifierEffect
		{
			Tags = array{"Alerted"};
			ApplyTo = "Target";
			DisplayName = "$effect.CrimeVictim";
			ActorValue = "Perception";
			Mod = 2.0;
			Duration = 540.0; // 1 tick = 1 second in real time, while 45 ticks are 1 ingame hour (based on NormalYearTime = 1080)
			Recover = true;
		},

		FunctionUpdateRelationship
		{
			AffectTarget = "-15";
			AffectTargetAllies = "-6";
			AffectTargetEnemies = "6";
			AffectLiaison = "-25";
		};
	};
};

"SmokeJoint" = G3ActionTemplate //Wheat beer
{
	ActionClassName = "UseArtefactAction";

	GUIPresent = true;
	GUIData = array
	{
		ActionGUIData
		{
			IsCharacter = 1;
			IsFamilyMember = 1;
			BelongsToOwnFamily = 1;
			IsAdult = 1;
			IsControlledByHuman = 1;
		},
		ActionGUIData
		{
			IsCharacter = 1;
			IsFamilyMember = 1;
			BelongsToOwnFamily = 1;
			IsAdult = 1;
			IsControlledByHuman = -1;
			DoesNotHaveTag = "NoDrinking";
		}
	};
	UsableBy = array{ "$gui.item.UsableByAdultFamilyMembers" };

	ActionActor = "Character";
	UICategory = "Artifact";
	Cooldown = 1.0;     //24 hours

	ArtefactName = "Joint";
	ActionName = "SmokeJoint";
	DisplayName = "$Joint.iron.name";
	Description = "$Joint.iron.desc";

	// FailureResult and CriticalFailureResult only
	// because 0 is still a tiny chance for a success, we keep CriticalSuccessResult and SuccessResult...
	SourceScoreFormula = "0.2 * (Strength + Dexterity + Perception + Charisma + Intelligence) + Strength";
	TargetScoreFormula = "8";
	CanFail = true;
	CriticalFactor = 0.8;

	EnterBuilding = "TryEnter";
	
	MoralAlignmentShift = 0;
	MoralAlignment = MoralAlignment
	{
		Values = array{0, 0, 0};
	};

	// Animation Character
	CustomAnimationPool = array
	{
		CustomAnimationInfo = array {"choc_react1", 0, -1, -1};
	};
	// Animation Props
	AnimationProps = array
	{
		PropSpawnDesc { PropNames = array { "beaker/beaker" }; };
	};

	OnEndResult = array
	{
		TagEffect
		{
			ApplyTo = "Self";
			Tags = array{"NoSmoking"};
			Duration = 450.0;
		},
	};
	SuccessResult = array
	{
		VisualEffect
		{
			ApplyTo = "Self";
			VisualName = "Inebriate";
			Duration = 10.0;
		},
		DisplayEffect
		{
			Tags = array{"High"};
			ApplyTo = "Self";
			DisplayGroup = "drunk";
			DisplayName = "$Joint.iron.name";
			Duration = 200.0;
		},
		FunctionAffectNeeds
		{
			ApplyTo = "Target";
			ProductType = 2;
			Amount = -0.01;
		},
		DisplayEffect
		{
			Tags = array{"High"};
			ApplyTo = "Self";
			DisplayGroup = "drunk";
			DisplayName = "$Joint.iron.name";
			Duration = 200.0;
		},
		ModifierEffect
		{
			Tags = array{"High"};
			ApplyTo = "Self";
			ActorValue = "MovementSpeedMult";
			Mod = -0.25;
			Duration = 200.0;
			Recover = true;
		},
	};
	CriticalSuccessResult = array
	{
		FunctionTriggerAction
		{
			ApplyTo = "Source";
			Actions = array{"Drunk"};
		},
		DisplayEffect
		{
			Tags = array{"High"};
			ApplyTo = "Self";
			DisplayGroup = "drunk";
			DisplayName = "$High.iron.desc";
			Duration = 200.0;
		},
		VisualEffect
		{
			ApplyTo = "Self";
			Tags = array{"High"};
			VisualName = "Poisoned";
			Duration = 200.0;
		},
		DisplayEffect
		{
			Tags = array{"High"};
			ApplyTo = "Self";
			DisplayGroup = "drunk";
			DisplayName = "$Joint.iron.name";
			Duration = 200.0;
		},
		ModifierEffect
		{
			Tags = array{"Slow","High"};
			ApplyTo = "Self";
			ActorValue = "MovementSpeedMult";
			Mod = -0.5;
			Duration = 200.0;
			Recover = true;
		},
	};
	FailureResult = array
	{
		VisualEffect
		{
			ApplyTo = "Self";
			VisualName = "Inebriate";
			Duration = 1.0;
		},
		DisplayEffect
		{
			Tags = array{"Drunk", "High"};
			ApplyTo = "Self";
			DisplayGroup = "drunk";
			DisplayName = "$Joint.iron.name";
			Duration = 200.0;
		},
		FunctionAffectNeeds
		{
			ApplyTo = "Target";
			ProductType = 2;
			Amount = -0.01;
		},
		DisplayEffect
		{
			Tags = array{"Drunk", "High"};
			ApplyTo = "Self";
			DisplayGroup = "drunk";
			DisplayName = "$Joint.iron.name";
			Duration = 200.0;
		},
		ModifierEffect
		{
			Tags = array{"Slow","High"};
			ApplyTo = "Self";
			ActorValue = "MovementSpeedMult";
			Mod = -0.25;
			Duration = 200.0;
			Recover = true;
		},
	};
	CriticalFailureResult = array
	{
		FunctionTriggerAction
		{
			ApplyTo = "Source";
			Actions = array{"Drunk"};
		},
		DisplayEffect
		{
			Tags = array{"Endurance", "UncontrollablyDrunk", "Drunk"};
			ApplyTo = "Self";
			DisplayGroup = "drunk";
			DisplayName = "$Inebriated";
			Duration = 200.0;
		},
		VisualEffect
		{
			ApplyTo = "Self";
			Tags = array{"Endurance", "UncontrollablyDrunk"};
			VisualName = "Poisoned";
			Duration = 200.0;
		},
		DisplayEffect
		{
			Tags = array{"Drunk", "High"};
			ApplyTo = "Self";
			DisplayGroup = "drunk";
			DisplayName = "$WheatBeer";
			Duration = 200.0;
		},
		ModifierEffect
		{
			Tags = array{"Slow","High"};
			ApplyTo = "Self";
			ActorValue = "MovementSpeedMult";
			Mod = -0.5;
			Duration = 200.0;
			Recover = true;
		},
	};
};
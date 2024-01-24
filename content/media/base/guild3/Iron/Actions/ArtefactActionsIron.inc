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
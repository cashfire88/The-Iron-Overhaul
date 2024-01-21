"DonateSimpleFeast" = G3ActionTemplate //Boast about your achievements
{
	ActionClassName = "UseArtefactAction";
	GUIPresent = true;
	UICategory = "Artifact";
	GUIData = array
	{
		@base/OwnFamilyAdults
	};
	UsableBy = array{ "$gui.item.UsableByAdultFamilyMembers" };

	RequiredBuildings = array
	{
		RequiredBuilding = array { "CountryHouse", 1 },
		RequiredBuilding = array { "PoorHouse", 1 },
		RequiredBuilding = array { "CityHouse", 1 },
		RequiredBuilding = array { "Mansion", 1 }
	};
	ArtefactName = "SimpleFeast";
	
	ActionName = "DonateSimpleFeast";
	DisplayName = "$action.SimpleFeast";
	Description = "$action.SimpleFeastDesc";
	Instruction = "$callToAction.StreetArea";

	ActionActor = "Character";
	TargetActor = "Coordinate";
	
	BaseRewardXP = 30;
	BaseRewardPrestige = 15;
	
	Duration = 0.04;
	SourceRun = false;
	IconName = "SimpleFeast";
	
	CustomAnimationPool = array
	{
		CustomAnimationInfo = array {"talk1", 0, -1, -1};
	};  

	DestinationsPointOfInterestType = "DonateFeast";
	
	CanFail = false;
	
	SourceScoreFormula = "Intelligence * 0.5 + Charisma * 0.5";
	
	DesiredProfiles = array
	{
		TargetProfileNeighborhood
		{
			GoodRelationWithMe = -2;
			CloseToActor = 2;
			OnStreet = 3;
			QuarterSurrounding = -2;
			QuarterVillage = 2;
			QuarterCity = 2;
		}
	};
	
	MoralAlignmentShift = 0.02;
	MoralAlignment = MoralAlignment
	{
		Values = array{0.1,0.3,0.3};
	};

	CriticalFactor = 0.75;
	
	CriticalSuccessResult = array
	{
		FunctionTransferPrestige
		{
			Receiver = "Source";
			Amount = 10;
		},
		SpreadEffect
		{
			ApplyTo = "Self";
			UniqueTag = "Boast";
			Tags = array{"Boast"};
			SpreadResult = "BoastResult";
			Radius = 300.0;
			Duration = 1;
			SpreadChance = 1;
			SpreadToEveryone = true;
			TickOnce = true;
			SpreadTargetRules = array
			{
				SpreadTargetRule
				{
					TargetType = "Character";
					TargetProperties = array{"Outside", "NotMyFamily", "IsConscious", "NotInCombat", "NotFleeing"};
					TargetScoreFormula = "Intelligence*0.25";
				}
			}; 
		}
	};
	
	SuccessResult = array
	{
		SpreadEffect
		{
			ApplyTo = "Self";
			UniqueTag = "Boast";
			Tags = array{"Boast"};
			SpreadResult = "BoastResult";
			Radius = 300.0;
			Duration = 1;
			SpreadChance = 1;
			SpreadToEveryone = true;
			TickOnce = true;
			SpreadTargetRules = array
			{
				SpreadTargetRule
				{
					TargetType = "Character";
					TargetProperties = array{"Outside", "NotMyFamily", "IsConscious", "NotInCombat", "NotFleeing"};
					TargetScoreFormula = "Intelligence*0.25";
				}
			}; 
		}
	};
	
};

"PromoteYourBusinessesIron" = G3ActionTemplate //Promote your businesses
{
	GUIPresent = true;
	UICategory = "Rogue";
	OrderIndex = 15;
	
	GUIData = array
	{
		@base/OwnFamilyAdults,
		ActionGUIData // Employee in the action bar
		{
			IsCharacter = 1;
			HasProfession = "Gleeman";
			BelongsToOwnFamily = 1;
			IsAdult = 1;
		},
		@base/AdultNeutralNPCs
	};
	UsableBy = array{ "$gui.item.UsableByAdultFamilyMembers", "$profession.Gleeman" };

	RequiredBuildings = array
	{
		RequiredBuilding = array { "Gleeman", 1 }
	};
	
	ActionName = "PromoteYourBusinessesIron";
	DisplayName = "$action.PromoteYourBusinessesIron";
	Description = "$action.PromoteYourBusinessesIronDesc";
	Instruction = "$callToAction.PlayerBusiness";
	IconName = "PromoteBusinessWithMusicIron";
	ActionClassName = "SimpleExecutionAction";

	ActionActor = "Character";
	TargetActor = "Building";

	TargetTags = array{"PromoteOwnBusinessIron"};
	DesiredProfiles = array
	{
		TargetProfileBuilding
		{
			ExcludedTypes = array{"Statue", "Stage", "Warehouse", "Warehouse_Country"};
			Business = 3;
			ResourceProducer = -3;
			MatchTargetTags = -3;
			FamilyProfile = TargetProfileFamily
			{
				MyFamily = 3;
			};
			
			EvaluateWhileInProgress = false;
		},
		TargetProfileBuilding
		{
			ExcludedTypes = array{"Statue", "Stage", "Warehouse", "Warehouse_Country"};
			Business = 3;
			ResourceProducer = -3;
			FamilyProfile = TargetProfileFamily
			{
				MyFamily = 3;
			};
			
			EvaluateByDefault = false;
			EvaluateWhileInProgress = true;
		}				
	};

	Cooldown = 0.0;
	Duration = 0.064; // 0.000011574 = 1 ingame sec | 0.00069444 = 1 ingame min | 0,0416664 = 1 ingame hour !(1 real sec = 0.016666667 ticks)!

	SourceScoreFormula = "1";
	TargetScoreFormula = "0";

	CanFail = false;
	ShowCombatText = true;
	CriticalFactor = 1.0;
	
	MoralAlignmentShift = 0.05;
	MoralAlignment = MoralAlignment
	{
		Values = array{0.4,-0.3,0.2};
	};

	DistanceFromTarget = 125;
	DistanceFromTargetMin = 100;
	EnterBuilding = "No";

	InteractionPriority = 5;

	CustomAnimationPool = array
	{
		CustomAnimationInfo = array {"gleeman_shawm", 0, -1, -1};
		CustomAnimationInfo = array {"gleeman_fiddle", 0, -1, -1};
		CustomAnimationInfo = array {"gleeman_drum", 0, -1, -1};
		CustomAnimationInfo = array {"gleeman_bagpipe", 0, -1, -1};
		CustomAnimationInfo = array {"gleeman_fiddle2", 0, -1, -1};
		CustomAnimationInfo = array {"gleeman_drum2", 0, -1, -1};
	}; 

//	Dialogue = array {"ACTION_MONOLOGUE", "d.act.PromoteOwnBusiness"}; // Category, id		

	OnStartResult = array
	{
		TagEffect
		{
			ApplyTo = "Target";
			Tags = array{"PromoteOwnBusinessIron"};
		},
	};
	OnDestinationReachedResult = array
	{
		FunctionRemoveEffect
		{
			ApplyTo = "Target";
			MatchAny = true;
			Tags = array {"PromoteOwnBusinessIron"};
		},

		// building has a front store
		DisplayEffect
		{
			Filter = "!Target.hasTag.NoFrontStore";
			Tags = array{"PromoteOwnBusinessIron"};
			ApplyTo = "Target";
			DisplayGroup = "buffed";
			DisplayName = "$effect.promotedBusinessIron";
			Duration = 360.0;
		},
		ModifierEffect // $effect.promotedBusiness
		{
			Filter = "!Target.hasTag.NoFrontStore";
			ApplyTo = "Target";
			Tags = array{"PromoteOwnBusinessIron"};
			ActorValue = "Attractiveness";
			Mod = 35;
			Duration = 360;
			Recover = true;
		},

		// building has NO front store
		DisplayEffect
		{
			Filter = "Target.hasTag.NoFrontStore";
			Tags = array{"PromoteOwnBusinessIron"};
			ApplyTo = "Target";
			DisplayGroup = "buffed";
			DisplayName = "$action.MotivatedWorkersIron";
			Duration = 360.0;
		},
		ForwardEffect
		{
			Filter = "Target.hasTag.NoFrontStore";
			ApplyTo = "Target";
			Tags = array{"PromoteOwnBusinessIron"};
			Relation = "Self";
			Duration = 360;
			ResultObjectId = "PromoteOwnBusinessForewardIron";
		},
	};
	OnEndResult = array
	{
		FunctionRemoveForward
		{
			Filter = "Target.hasTag.NoFrontStore";
			ApplyTo = "Target";
			Relation = "Self";
			ResultObjectId = "PromoteOwnBusinessForewardIron";
			RemoveTemporaryOnEnd = true;
		},
		FunctionRemoveEffect
		{
			ApplyTo = "Target";
			MatchAny = true;
			Tags = array{"PromoteOwnBusinessIron"};
			RemoveTemporaryOnEnd = true;
		}
	};

	SuccessResult = array
	{
	};
};

"PromoteYourBusinessesWithPrayersIron" = G3ActionTemplate //Promote your businesses
{
	UICategory = "Religion";
	GUIPresent = true;
	OrderIndex = 10;
	GUIData = array
	{
		@base/OwnFamilyAdults,
		ActionGUIData // Employee
		{
			IsCharacter = 1;
			BelongsToOwnFamily = 1;
			HasProfession = "Preacher";
			IsAdult = 1;
		},
		@base/AdultNeutralNPCs
	};
	UsableBy = array{ "$gui.item.UsableByAdultFamilyMembers", "$profession.Preacher" };

	RequiredBuildings = array
	{
		RequiredBuilding = array { "Preacher", 1 }
	};
	
	ActionName = "PromoteYourBusinessesWithPrayersIron";
	DisplayName = "$action.PromoteYourBusinesses.WithPrayers.Iron";
	Description = "$action.PromoteYourBusinesses.WithPrayers.IronDesc";
	Instruction = "$callToAction.PlayerBusiness";
	IconName = "PromoteBusinessWithPrayerIron";
	ActionClassName = "SimpleExecutionAction";

	ActionActor = "Character";
	TargetActor = "Building";

	TargetTags = array{"PromoteYourBusinessesWithPrayersIron"};
	DesiredProfiles = array
	{
		TargetProfileBuilding
		{
			ExcludedTypes = array{"Statue", "Stage", "Warehouse", "Warehouse_Country"};
			Business = 3;
			ResourceProducer = -3;
			MatchTargetTags = -3;
			FamilyProfile = TargetProfileFamily
			{
				MyFamily = 3;
			};
			
			EvaluateWhileInProgress = false;
		},
		TargetProfileBuilding
		{
			ExcludedTypes = array{"Statue", "Stage", "Warehouse", "Warehouse_Country"};
			Business = 3;
			ResourceProducer = -3;
			FamilyProfile = TargetProfileFamily
			{
				MyFamily = 3;
			};
			
			EvaluateByDefault = false;
			EvaluateWhileInProgress = true;
		}				
	};

	Cooldown = 0.03;
	Duration = 0.034; // 0.000011574 = 1 ingame sec | 0.00069444 = 1 ingame min | 0,0416664 = 1 ingame hour !(1 real sec = 0.016666667 ticks)!

	SourceScoreFormula = "1";
	TargetScoreFormula = "0";

	CanFail = false;
	ShowCombatText = true;
	CriticalFactor = 1.0;
	
	MoralAlignmentShift = 0.05;
	MoralAlignment = MoralAlignment
	{
		Values = array{0.4,-0.3,0.2};
	};

	DistanceFromTarget = 125;
	DistanceFromTargetMin = 100;
	EnterBuilding = "No";

	InteractionPriority = 5;

	CustomAnimationPool = array
	{
		CustomAnimationInfo = array {"read_bible", 0, -1, -1};
	}; 

//	Dialogue = array {"ACTION_MONOLOGUE", "d.act.PromoteOwnBusiness"}; // Category, id		

	OnStartResult = array
	{
		TagEffect
		{
			ApplyTo = "Target";
			Tags = array{"PromoteYourBusinessesWithPrayersIron"};
		},
	};

	SuccessResult = array
	{
		FunctionRemoveEffect
		{
			ApplyTo = "Target";
			MatchAny = true;
			Tags = array {"PromoteYourBusinessesWithPrayersIron"};
		},

		// building has a front store
		DisplayEffect
		{
			Filter = "!Target.hasTag.NoFrontStore";
			Tags = array{"PromoteYourBusinessesWithPrayersIron"};
			ApplyTo = "Target";
			DisplayGroup = "buffed";
			DisplayName = "$effect.promotedBusinessIron";
			Duration = 360.0;
		},
		ModifierEffect // $effect.promotedBusiness
		{
			Filter = "!Target.hasTag.NoFrontStore";
			ApplyTo = "Target";
			Tags = array{"PromoteYourBusinessesWithPrayersIron"};
			ActorValue = "Attractiveness";
			Mod = 35;
			Duration = 360;
			Recover = true;
		},

		// building has NO front store
		DisplayEffect
		{
			Filter = "Target.hasTag.NoFrontStore";
			Tags = array{"PromoteYourBusinessesWithPrayersIron"};
			ApplyTo = "Target";
			DisplayGroup = "buffed";
			DisplayName = "$action.MotivatedWorkersIron";
			Duration = 360.0;
		},
		ForwardEffect
		{
			Filter = "Target.hasTag.NoFrontStore";
			ApplyTo = "Target";
			Tags = array{"PromoteYourBusinessesWithPrayersIron"};
			Relation = "Self";
			Duration = 360;
			ResultObjectId = "PromoteOwnBusinessWithPrayersForewardIron";
		},
	};
};
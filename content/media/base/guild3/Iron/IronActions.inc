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
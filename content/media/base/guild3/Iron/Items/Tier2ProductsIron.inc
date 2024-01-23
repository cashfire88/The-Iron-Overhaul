"RomanHelmet" = G3Item
{
	Type = 1;
	SubType = 6;

	DisplayName = "$RomanHelmet.iron.name";
	Description = "$RomanHelmet.iron.desc";
	DisplayCategories = array("All", "WeaponArmor");

	IconName = "RomanHelmet";

	Tier = 2;
	SocialClass = 1;
	BuildTime = 90;
	Production = 1;
	
	EquipmentType = 4; //jewellry
	EquipmentAdultsOnly = true;
	UsableBy = array{ "$characters.Age.Adult" };
	
	Results = array
	{
		ModifierEffect
		{
			ActorValue = "Armor";
			Mod = 5;
			Recover = true;
		},
		ModifierEffect
		{
			ActorValue = "Intimidation";
			Mod = 1;
			Recover = true;
		},
		ModifierEffect
		{
			ActorValue = "DefensePower";
			Mod = -1;
			Recover = true;
		},
	};

	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Copper";
			Number = 2;
		};
		comp1 extends G3ItemComponent
		{
			Name = "Leather";
			Number = 2;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Tinker", 1 }
	};
};

"BronceFlail" = G3Item
{
	Type = 1;
	SubType = 3;

	DisplayName = "$BronceFlail.iron.name";
	Description = "$BronceFlail.iron.desc";
	DisplayCategories = array("All", "WeaponArmor");

	Tier = 1;
	SocialClass = 0;
	BuildTime = 50;
	Production = 1;

	IconName = "BronceFlail";
	
	VisualActorName = "dagger/dagger";

	EquipmentType = 2;
	EquipmentAdultsOnly = true;
	UsableBy = array{ "$characters.Age.Adult" };

	Results = array
	{
		ModifierEffect
		{
			ActorValue = "AttackPower";
			Mod = 2;
			Recover = true;
		},
		ModifierEffect
		{
			ActorValue = "Damage";
			Mod = 10;
			Recover = true;
		}
	};

	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Copper";
			Number = 2;
		};
		comp2 extends G3ItemComponent
		{
			Name = "CrudeWeaponHilt";
			Number = 1;
		};
		comp2 extends G3ItemComponent
		{
			Name = "PinewoodPlank";
			Number = 1;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Tinker", 1 }
	};
};

"BucketOfFruits" = G3Item
{
	Type = 1;
	SubType = 8;

	DisplayName = "$BucketOfFruits.iron.name";
	Description = "$BucketOfFruits.iron.description";
	DisplayCategories = array( "All", "Food");
	IconName = "BucketOfFruits";

	Production = 1;
	BuildTime = 50.00;
	Tier = 2;
	SocialClass = 0;
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Bucket";
			Number = 1;
		};
		comp2 extends G3ItemComponent
		{
			Name = "Berry";
			Number = 5;
		};
		comp3 extends G3ItemComponent
		{
			Name = "Fruit";
			Number = 5;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Orchardist", 1 }
	};

	Results = array
	{
		UnlockEffect
		{
			Names = array {"DonateSimpleFeast"};
		}
	};
};

"FlowerPot" = G3Item
{
	Type = 1;
	SubType = 8;

	DisplayName = "$FlowerPot.iron.name";
	Description = "$FlowerPot.iron.description";
	DisplayCategories = array("All", "Food");
	IconName = "FlowerPot";

	Production = 1;
	BuildTime = 42.00;
	Tier = 1;
	SocialClass = 1;
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Cauldron";
			Number = 1;
		};
		comp2 extends G3ItemComponent
		{
			Name = "Jasmin";
			Number = 1;
		};
		comp3 extends G3ItemComponent
		{
			Name = "StoneLily";
			Number = 1;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Orchardist", 1 }
	};

	Results = array
	{
		UnlockEffect
			{
				Names = array {"GiveFlowers"};
			}
	};
};

"GrindedBlackPepper" = G3Item
{
	Type = 1;
	SubType = 8;

	DisplayName = "$GrindedBlackPepper.iron.name";
	Description = "$GrindedBlackPepper.iron.description";
	DisplayCategories = array("All", "Food");
	IconName = "GrindedBlackPepper";

	Production = 1;
	BuildTime = 62.00;
	Tier = 1;
	SocialClass = 1;
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "BlackPepperPlant";
			Number = 10;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Miller", 1 }
	};
};

"SackOfFlours" = G3Item
{
	Type = 1;
	SubType = 8;

	DisplayName = "$SackOfFlours.iron.name";
	Description = "$SackOfFlours.iron.desc";
	DisplayCategories = array("All", "Food");
	IconName = "SackOfFlours";

	Production = 1;
	BuildTime = 200.00;
	Tier = 1;
	SocialClass = 1;
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "WheatFlour";
			Number = 5;
		};
		comp2 extends G3ItemComponent
		{
			Name = "BarleyFlour";
			Number = 5;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Miller", 1 }
	};
};
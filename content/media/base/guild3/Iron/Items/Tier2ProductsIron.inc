"RomanHelmet" = G3Item
{
	Type = 1;
	SubType = 6;

	DisplayName = "$RomanHelmet.iron.name";
	Description = "$RomanHelmet.iron.desc";
	DisplayCategories = array("All", "WeaponArmor");

	IconName = "RomanHelmet";

	Tier = 2;
	SocialClass = 0;
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
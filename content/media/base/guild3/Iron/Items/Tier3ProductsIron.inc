"DuckMeat" = G3Item
{
	Type = 1;
	SubType = 2;

	DisplayName = "$DuckMeat.iron.name";
	Description = "$DuckMeat.iron.desc";
	DisplayCategories = array("All", "Food");
	IconName = "DuckMeat";

	Tier = 3;
	SocialClass = 1;
	Production = 2;
	BuildTime = 30;
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Duck";
			Number = 1;
		};
		comp2 extends G3ItemComponent
		{
			Name = "LesserQualitySalt";
			Number = 3;
		};
	};
	
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Butcher", 1 }
	};
};

"LesserQualitySalt" = G3Item
{
	Type = 1;
	SubType = 2;

	DisplayName = "$LesserQualitySalt.iron.name";
	Description = "$LesserQualitySalt.iron.desc";
	DisplayCategories = array("All", "Food");
	IconName = "LesserQualitySalt";

	Tier = 3;
	SocialClass = 1;
	BuildTime = 45;
	Production = 4;
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "LesserQualitySaltStone";
			Number = 1;
		}
	};

	Results = array
	{
		ModifierEffect
		{
			ActorValue = "Productivity";
			Mod = 0.04;
			Recover = true;
		}
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "StoneMasonShop", 1 }
	};
};

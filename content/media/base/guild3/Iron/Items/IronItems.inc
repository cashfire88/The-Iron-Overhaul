"SimpleFeast" = G3Item
{
	Type = 3;
    IconName = "SimpleFeast";
	DisplayName = "$SimpleFeast";
	Description = "$SimpleFeast.description";
	DisplayCategories = array("All");
	UsableBy = array{ "$qs.charactertype.0" };
	
	
	Production = 3;
	BuildTime = 20;
	Tier = 0;
	

	SoldAtMarket = false;
	BoughtByMarket = true;
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "FriedTrout";
			Number = 5;
		},
        comp1 extends G3ItemComponent
		{
			Name = "SmokedPerch";
			Number = 5;
		},
        comp1 extends G3ItemComponent
		{
			Name = "Fruit";
			Number = 5;
		},
        comp1 extends G3ItemComponent
		{
			Name = "BucketOfWater";
			Number = 10;
		}
	};
	
	Results = array
	{
		UnlockEffect
		{
			Names = array {"DonateSimpleFeast"};
		}
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "CountryHouse", 1 },
		RequiredBuilding = array { "PoorHouse", 1 },
		RequiredBuilding = array { "CityHouse", 1 },
		RequiredBuilding = array { "Mansion", 1 },
	};
};

"IngredientsSmokedPerch" = G3Item
{
	Type = 1;
	SubType = 2;

	DisplayName = "$IngredientsSmokedPerch.iron.name";
	Description = "$IngredientsSmokedPerch.iron.title";
	DisplayCategories = array("All", "RawMaterial");

	Tier = 1;
	SocialClass = 0;
	BuildTime = 15.0;
	Production = 1;

	IconName = "IngredientsSmokedPerch";
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Perch";
			Number = 1;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "FishingHut", 1 }
	};

	Results = array
	{
		UnlockEffect
		{
			Names = array {"CookSmokedPerch"};
		}
	};
};

"DeliciousCookedPerch" = G3Item
{
	Type = 1;
	SubType = 2;

	DisplayName = "$DeliciousCookedPerch.iron.name";
	Description = "$DeliciousCookedPerch.iron.desc";
	DisplayCategories = array("All", "RawMaterial");
	IconName = "DeliciousCookedPerch";

	Tier = 1;
	SocialClass = 0;
	BuildTime = 40.0;
	Production = 1;
	
	SoldAtMarket = false;
	BoughtByMarket = true;

};
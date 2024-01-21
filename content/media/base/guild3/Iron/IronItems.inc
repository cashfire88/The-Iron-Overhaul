"SimpleFeast" = G3Item
{
	Type = 3;
    IconName = "SimpleFeast";
	DisplayName = "$SimpleFeast";
	Description = "$SimpleFeast.description";
	DisplayCategories = array("All");
	UsableBy = array{ "$qs.charactertype.0" };
	
	Production = 3;
	BuildTime = 6;
	Tier = 0;
	

	SoldAtMarket = true;
	BoughtByMarket = true;
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Wheat";
			Number = 1;
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
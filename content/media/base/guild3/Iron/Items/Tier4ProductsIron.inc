"Antibiotics" = G3Item
{
	Type = 1;
	SubType = 7;

	DisplayName = "$Antibiotics.iron.name";
	Description = "$Antibiotics.iron.desc";
	DisplayCategories = array("All", "Tinctures");

    IconName = "Antibiotics";

	Tier = 4;
	SocialClass = 2;
	BuildTime = 75;
	Production = 4;


	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "CowLiver";
			Number = 1;
		};
		comp2 extends G3ItemComponent
		{
			Name = "Onion";
			Number = 1;
		};
		comp3 extends G3ItemComponent
		{
			Name = "Alcohol";
			Number = 1;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Apothecary", 2 }
	};
};

"Fertilizer" = G3Item
{
	Type = 1;
	SubType = 5;

	DisplayName = "$Fertilizer.iron.name";
	Description = "$Fertilizer.iron.desc";
	DisplayCategories = array("All", "Trinkets");

    IconName = "Fertilizer";

	Tier = 3;
	SocialClass = 1;
	BuildTime = 40.25;
	Production = 5;
	

	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "BoneDust";
			Number = 2;
		};
		comp2 extends G3ItemComponent
		{
			Name = "BatBlood";
			Number = 1;
		};
		comp3 extends G3ItemComponent
		{
			Name = "Sand";
			Number = 4;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "AlchemistShop", 1 }
	};
};

"CowLiver" = G3Item
{
	Type = 1;
	SubType = 2;

	DisplayName = "$CowLiver.iron.name";
	Description = "$CowLiver.iron.desc";
	DisplayCategories = array("All", "Food");

    IconName = "CowLiver";

	Tier = 4;
	SocialClass = 2;
	BuildTime = 30;
	Production = 2;

	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Cattle";
			Number = 1;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Butcher", 1 }
	};
};

"Onion" = G3Item
{
	Type = 1;
	SubType = 2;

	DisplayName = "$Onion.iron.name";
	Description = "$Onion.iron.desc";
	DisplayCategories = array("All", "Food");

    IconName = "Onion";

	Production = 3;
	BuildTime = 20.5;
	
	Tier = 4;
	SocialClass = 1;
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "BucketOfWater";
			Number = 2;
		};
        comp2 extends G3ItemComponent
		{
			Name = "Fertilizer";
			Number = 1;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Farm", 1 }
	};
};
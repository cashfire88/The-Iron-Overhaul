//------- ORCHARDIST --------
"BerryJuice" = G3Item
{
	Type = 1;
	SubType = 2;

	DisplayName = "$BerryJuice.iron.name";
	Description = "$BerryJuice.iron.desc";
	DisplayCategories = array("All", "Food");

	Tier = 1;
	SocialClass = 0;
	BuildTime = 11;
	Production = 1;

	IconName = "BerryJuice";

	UsableBy = array{ "$qs.charactertype.0" };
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Berry";
			Number = 1;
		};
		comp1 extends G3ItemComponent
		{
			Name = "BucketOfWater";
			Number = 1;
		};
	};

	Results = array
	{
		UnlockEffect
		{
			Names = array {"DrinkJuice"};
		}
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Orchardist", 1 }
	};
};

"Pipe" = G3Item
{
	Type = 1;
	SubType = 8;

	DisplayName = "$Pipe.iron.name";
	Description = "$Pipe.iron.description";
	DisplayCategories = array("All", "Components");
	IconName = "Pipe";

	Production = 1;
	BuildTime = 8.00;
	Tier = 1;
	SocialClass = 0;
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
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

"Bucket" = G3Item
{
	Type = 1;
	SubType = 8;

	DisplayName = "$Bucket.iron.name";
	Description = "$Bucket.iron.description";
	DisplayCategories = array("All", "Components");
	IconName = "Bucket";

	Production = 1;
	BuildTime = 37.00;
	Tier = 1;
	SocialClass = 0;
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "PinewoodPlank";
			Number = 1;
		};
		comp2 extends G3ItemComponent
		{
			Name = "Fittings";
			Number = 2;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Tinker", 1 }
	};
};
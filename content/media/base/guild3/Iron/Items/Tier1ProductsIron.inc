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

	IconName = "BerryJuice"

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
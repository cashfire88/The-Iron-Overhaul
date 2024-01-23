//---------- QUARRY -------------
"LesserQualitySaltStone" = G3Item
{
	Type = 1;
	SubType = 1;

	DisplayName = "$LesserQualitySaltStone.iron.name";
	Description = "$LesserQualitySaltStone.iron.desc";
	DisplayCategories = array("All", "RawMaterial");

	IconName = "Saltblock";

	Production = 1;
	BuildTime = 10; //originally 8
	Price = 3;

	RequiredBuildings = array{
		RequiredBuilding = array { "Quarry", 1 }
	};

	SeasonAvailability = array{1, 1, 1, 1};
};

//---------- LUMBER YARD -------------


//---------- MINE -------------

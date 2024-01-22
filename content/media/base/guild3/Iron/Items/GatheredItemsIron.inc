"Berry" = G3Item
{
	Type = 1;
	SubType = 1;

	DisplayName = "$Berry.iron.name";
	Description = "$Berry.iron.desc";
	DisplayCategories = array("All", "RawMaterial");

	IconName = "Berry"

	Production = 2;
	BuildTime = 6.0;
	Tier = 1;
	SocialClass = 0;

	SeasonAvailability = array{1, 1, 1, 1};

	RequiredBuildings = array{
		RequiredBuilding = array { "Orchardist", 1 }
	};

	GatheringBuilding = "Grove";
};

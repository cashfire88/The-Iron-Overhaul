ResultObject
{
    Id = "WellRested"; // This is referenced from code, don't change the name!
    DisplayName = "$effect.rested";
    Results = array
    {
        DisplayEffect
        {
            Tags = array{"Rested"};
            ApplyTo = "Self";
            DisplayGroup = "buffed";
            DisplayName = "$effect.rested";
            Duration = 1200.0;
        },
        ModifierEffect
        {
            ApplyTo = "Self";
            ActorValue = "Productivity";
            Mod = 0.05;
            Recover = true;
            Duration = 1200.0;
        },
        ModifierEffect
        {
            ApplyTo = "Self";
            ActorValue = "Perception";
            Mod = 1;
            Recover = true;
            Duration = 1200.0;
        },
        FunctionRemoveEffect
        {
            MatchAny = true;
            Tags = array{"High"};
            ApplyTo = "Self";
        },
        FunctionSendMessage
        {
            ApplyTo = "Self";
            Description = "WellRestedMessage";
        }
    };
},

ResultObject
{
    Id = "ApprenticeTest";
    DisplayName = "$Schooling";
    Results = array
    {
        DisplayEffect
        {
            Tags = array{"Apprentice"};
            ApplyTo = "Self";
            DisplayGroup = "buffed";
            DisplayName = "$effect.iron.apprentice";
            Duration = 0.0;
        },
        TagEffect
		{
			Tags = array{"Apprentice"};
            ApplyTo = "Self";
            Duration = 0.0;
		},
        ModifierEffect
        {
            ApplyTo = "Self";
            Tags = array{"Apprentice"};
            ActorValue = "Productivity";
            Mod = 0.1;
            Recover = true;
            Duration = 0.0;
        }
    };
},
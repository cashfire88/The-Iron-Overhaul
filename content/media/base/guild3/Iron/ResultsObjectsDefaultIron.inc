ResultObject
{
    Id = "DonateFeast";
    Results = array
    {
        FunctionPickRandom
        {
            Filter = "Target.SocialCaste == 1"; // poor
            ApplyTo ="Source";
            ResultObjectIds = array{ "BoastNothing", "BoastNothing", "BoastCitizen" };
        },
        FunctionPickRandom
        {
            Filter = "Target.SocialCaste == 2"; // citizen
            ApplyTo ="Source";
            ResultObjectIds = array{ "BoastFail", "BoastNothing", "BoastCitizen", "BoastCitizen" };
        },
        FunctionPickRandom
        {
            Filter = "Target.SocialCaste == 3"; // rich
            ApplyTo ="Source";
            ResultObjectIds = array{ "BoastFail", "BoastCitizen", "BoastRich", "BoastRich" };
        },
    };
},
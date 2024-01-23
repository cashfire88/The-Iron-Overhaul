TagEffect
{
    Filter = "Source.hasNotTag.LoveDebuff";
    ApplyTo = "Self";
    Tags = array{"LoveDebuff"};
    Duration = 2400.0;
},
ModifierEffect
{
    ApplyTo = "Self";
    Tags = array{"SweetTalk","LoveDebuff"};
    ActorValue = "Charisma";
    Mod = -1;
    Duration = 2400.0;
    Recover = true;
},
ModifierEffect
{
    ApplyTo = "Self";
    Tags = array{"SweetTalk","LoveDebuff"};
    ActorValue = "Perception";
    Mod = -1;
    Duration = 2400.0;
    Recover = true;
},
ModifierEffect
{
    ApplyTo = "Self";
    Tags = array{"SweetTalk","LoveDebuff"};
    ActorValue = "Intelligence";
    Mod = -1;
    Duration = 2400.0;
    Recover = true;
},
DisplayEffect
{
    Tags = array{"Rejected"};
    ApplyTo = "Self";
    DisplayGroup = "wound";
    DisplayName = "$effect.rejected";
    Duration = 2400.0;
},
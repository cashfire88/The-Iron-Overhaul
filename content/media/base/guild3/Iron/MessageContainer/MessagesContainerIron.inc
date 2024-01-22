"SweetTalkIronSuccess" = MessageDescription
{
	Title = "$iron.messageContainer.sweetTalk.success.title";
	Body = "$iron.messageContainer.sweetTalk.success.body";
	Effect = "";
	Icon = "Character";
	Type = "Neutral";
	IsUrgent = false;
    Duration = 60;
	SFX = 33;
	OnClickReactions = array
	{
		FunctionOpenUI
		{
			UIName = "MessageLog";
			ShowOnTop = true;
			PlaySound = true;	
		};
	};	
};
"SweetTalkIronFailure" = MessageDescription
{
	Title = "$iron.messageContainer.sweetTalk.failure.title";
	Body = "$iron.messageContainer.sweetTalk.failure.body";
	Effect = "";
	Icon = "Character";
	Type = "Neutral";
	IsUrgent = false;
    Duration = 60;
	SFX = 33;
	OnClickReactions = array
	{
		FunctionOpenUI
		{
			UIName = "MessageLog";
			ShowOnTop = true;
			PlaySound = true;	
		};
	};	
};
"WellRestedMessage" = MessageDescription
{
    Title = "$iron.buff.wellRested.title";
    Body = "$iron.buff.wellRested.body";
    Effect = "";
    Icon = "Character";
    Type = "Positive";
    IsUrgent = false;
    Duration = 60;
    SFX = 33;
    OnClickReactions = array
    {
        FunctionOpenUI
        {
            UIName = "MessageLog";
            ShowOnTop = true;
            PlaySound = true;	
        };
    };	
};
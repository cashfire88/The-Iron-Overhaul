//Option 3 (rb) formulas
Replacements = map
{    
	"SourceScoreFormula" = "Source.ReputationBonus * 10 + Source.Charisma";	
	"TargetScoreFormula" = "2 / (Target.Intelligence+Target.Charisma)";
	"CritFactor" = "1.0"; // (1 - CriticalFactor)
};	
DisplayChance = "EvaluateActionScore.SourceScoreFormula.TargetScoreFormula";
OptionSubtext = array { "$gui.Char.ReputationBonus", "$gui.Char.Charisma" };
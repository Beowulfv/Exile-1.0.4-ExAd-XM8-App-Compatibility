class CfgXM8 
{
	extraApps[] = {"BRAmaRecipes"};
	
	class BRAmaRecipes 
	{
		controlID = 107000;
		title = "Recipies";		
		logo = "xm8Apps\BRAmaRecipes\BRAma.paa";
		config = "xm8Apps\BRAmaRecipes\config.sqf";
		onLoad = "xm8Apps\BRAmaRecipes\onLoad.sqf";
		onOpen = "xm8Apps\BRAmaRecipes\onOpen.sqf";
	};
};

class XM8_App05_Button: RscExileXM8AppButton1x1
{
    textureNoShortcut = "xm8Apps\BRAmaRecipes\BRAma.paa";
    text = "Recipies";
    onButtonClick = "['BRAmaRecipes', 0] call ExileClient_gui_xm8_slide";
    resource = "";
};

class CfgExileCustomCode 
{
	//xm8
	ExileClient_gui_xm8_slide = "xm8Apps\CustomCode\ExileClient_gui_xm8_slide.sqf";
	ExileClient_gui_xm8_show = "xm8Apps\CustomCode\ExileClient_gui_xm8_show.sqf";
};
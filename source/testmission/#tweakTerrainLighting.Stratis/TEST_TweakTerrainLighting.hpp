
#include "A3_BaseClasses.hpp"

class Test_TweakTerrainLightingDialog
{
	idd = 4711;//TEST_IDD_TWEAKTERRAINLIGHTINGDIALOG;
	movingEnable = false;
	onLoad = "['onLoad',_this,'Test_TweakTerrainLightingDialog'] spawn test_fnc_initDialog;";
	controlsBackGround[] =
	{
		LeftBackground,
		TopBackground,
		BottomBackground,
		Top_01_Text,Top_01_Value,Top_02_Text,Top_02_Value,Top_03_Text,Top_03_Value,Top_04_Text,Top_05_Value,Top_06_Text,
		Top_01_Slider,Top_02_Slider,Top_07_Text,Top_07_Slider,
		Top_01_01_MinValue,Top_01_02_MaxValue,Top_02_01_Value,Top_02_02_Value,Top_02_03_Value,Top_02_04_Value,Top_02_05_Value,Top_02_06_Value,Top_02_07_Value,Top_02_08_Value,Top_02_09_Value,Top_07_01_MinValue,Top_07_02_MaxValue,
		LeftBox_01_CheckBox,LeftBox_01_Title,LeftBox_01_TemperaturePreview,LeftBox_01_Red_Text,LeftBox_01_Red_Value,LeftBox_01_Green_Text,LeftBox_01_Green_Value,LeftBox_01_Blue_Text,LeftBox_01_Blue_Value,LeftBox_01_Luminance_Text,LeftBox_01_Luminance_Value,LeftBox_01_TemperatureSlider,
		LeftBox_02_CheckBox,LeftBox_02_Title,LeftBox_02_TemperaturePreview,LeftBox_02_Red_Text,LeftBox_02_Red_Value,LeftBox_02_Green_Text,LeftBox_02_Green_Value,LeftBox_02_Blue_Text,LeftBox_02_Blue_Value,LeftBox_02_Luminance_Text,LeftBox_02_Luminance_Value,LeftBox_02_TemperatureSlider,
		LeftBox_03_CheckBox,LeftBox_03_Title,LeftBox_03_TemperaturePreview,LeftBox_03_Red_Text,LeftBox_03_Red_Value,LeftBox_03_Green_Text,LeftBox_03_Green_Value,LeftBox_03_Blue_Text,LeftBox_03_Blue_Value,LeftBox_03_Luminance_Text,LeftBox_03_Luminance_Value,LeftBox_03_TemperatureSlider,
		LeftBox_04_CheckBox,LeftBox_04_Title,LeftBox_04_TemperaturePreview,LeftBox_04_Red_Text,LeftBox_04_Red_Value,LeftBox_04_Green_Text,LeftBox_04_Green_Value,LeftBox_04_Blue_Text,LeftBox_04_Blue_Value,LeftBox_04_Luminance_Text,LeftBox_04_Luminance_Value,LeftBox_04_TemperatureSlider,
		LeftBox_05_CheckBox,LeftBox_05_Title,LeftBox_05_TemperaturePreview,LeftBox_05_Red_Text,LeftBox_05_Red_Value,LeftBox_05_Green_Text,LeftBox_05_Green_Value,LeftBox_05_Blue_Text,LeftBox_05_Blue_Value,LeftBox_05_Luminance_Text,LeftBox_05_Luminance_Value,LeftBox_05_TemperatureSlider,
		LeftBox_06_CheckBox,LeftBox_06_Title,LeftBox_06_TemperaturePreview,LeftBox_06_Red_Text,LeftBox_06_Red_Value,LeftBox_06_Green_Text,LeftBox_06_Green_Value,LeftBox_06_Blue_Text,LeftBox_06_Blue_Value,LeftBox_06_Luminance_Text,LeftBox_06_Luminance_Value,LeftBox_06_TemperatureSlider,
		LeftBox_07_CheckBox,LeftBox_07_Title,LeftBox_07_TemperaturePreview,LeftBox_07_Red_Text,LeftBox_07_Red_Value,LeftBox_07_Green_Text,LeftBox_07_Green_Value,LeftBox_07_Blue_Text,LeftBox_07_Blue_Value,LeftBox_07_Luminance_Text,LeftBox_07_Luminance_Value,LeftBox_07_TemperatureSlider,
		LeftBox_08_CheckBox,LeftBox_08_Title,LeftBox_08_TemperaturePreview,LeftBox_08_Red_Text,LeftBox_08_Red_Value,LeftBox_08_Green_Text,LeftBox_08_Green_Value,LeftBox_08_Blue_Text,LeftBox_08_Blue_Value,LeftBox_08_Luminance_Text,LeftBox_08_Luminance_Value,LeftBox_08_TemperatureSlider,
		LeftBox_09_CheckBox,LeftBox_09_Title,LeftBox_09_TemperaturePreview,LeftBox_09_Red_Text,LeftBox_09_Red_Value,LeftBox_09_Green_Text,LeftBox_09_Green_Value,LeftBox_09_Blue_Text,LeftBox_09_Blue_Value,/*LeftBox_09_Luminance_Text,LeftBox_09_Luminance_Value,*/LeftBox_09_TemperatureSlider,
		LeftBox_10_CheckBox,LeftBox_10_Title,LeftBox_10_TemperaturePreview,LeftBox_10_Red_Text,LeftBox_10_Red_Value,LeftBox_10_Green_Text,LeftBox_10_Green_Value,LeftBox_10_Blue_Text,LeftBox_10_Blue_Value,/*LeftBox_10_Luminance_Text,LeftBox_10_Luminance_Value,*/LeftBox_10_TemperatureSlider,
		LeftBox_11_CheckBox,LeftBox_11_Title,LeftBox_11_TemperaturePreview,LeftBox_11_Red_Text,LeftBox_11_Red_Value,LeftBox_11_Green_Text,LeftBox_11_Green_Value,LeftBox_11_Blue_Text,LeftBox_11_Blue_Value,LeftBox_11_Luminance_Text,LeftBox_11_Luminance_Value,LeftBox_11_TemperatureSlider,
		LeftBox_12_CheckBox,LeftBox_12_Title,LeftBox_12_TemperaturePreview,LeftBox_12_Red_Text,LeftBox_12_Red_Value,LeftBox_12_Green_Text,LeftBox_12_Green_Value,LeftBox_12_Blue_Text,LeftBox_12_Blue_Value,LeftBox_12_Luminance_Text,LeftBox_12_Luminance_Value,LeftBox_12_TemperatureSlider,
		LeftBox_13_CheckBox,LeftBox_13_Title,LeftBox_13_TemperaturePreview,LeftBox_13_Red_Text,LeftBox_13_Red_Value,LeftBox_13_Green_Text,LeftBox_13_Green_Value,LeftBox_13_Blue_Text,LeftBox_13_Blue_Value,LeftBox_13_Luminance_Text,LeftBox_13_Luminance_Value,LeftBox_13_TemperatureSlider,
		LeftBox_14_CheckBox,LeftBox_14_Title,LeftBox_14_TemperaturePreview,LeftBox_14_Red_Text,LeftBox_14_Red_Value,LeftBox_14_Green_Text,LeftBox_14_Green_Value,LeftBox_14_Blue_Text,LeftBox_14_Blue_Value,LeftBox_14_Luminance_Text,LeftBox_14_Luminance_Value,LeftBox_14_TemperatureSlider,
		BottomBox_01_01_CheckBox,BottomBox_01_01_Title,BottomBox_01_01_Value,BottomBox_01_01_Slider,
		BottomBox_01_02_CheckBox,BottomBox_01_02_Title,BottomBox_01_02_Value,BottomBox_01_02_Slider,
		BottomBox_01_03_CheckBox,BottomBox_01_03_Title,BottomBox_01_03_Value,BottomBox_01_03_Slider,
		BottomBox_01_04_CheckBox,BottomBox_01_04_Title,BottomBox_01_04_Value,BottomBox_01_04_Slider,
		BottomBox_02_01_CheckBox,BottomBox_02_01_Title,BottomBox_02_01_Value,BottomBox_02_01_Slider,
		BottomBox_02_02_CheckBox,BottomBox_02_02_Title,BottomBox_02_02_Value,BottomBox_02_02_Slider,
		BottomBox_02_03_CheckBox,BottomBox_02_03_Title,BottomBox_02_03_Value,BottomBox_02_03_Slider,
		BottomBox_02_04_CheckBox,BottomBox_02_04_Title,BottomBox_02_04_Value,BottomBox_02_04_Slider,
		BottomRightBox_03_01_CheckBox,BottomRightBox_03_01_Title,BottomRightBox_03_01_Value,BottomRightBox_03_01_Slider,
		BottomRightBox_01_CheckBox,BottomRightBox_01_Title,BottomRightBox_01_TemperaturePreview,BottomRightBox_01_Red_Text,BottomRightBox_01_Red_Value,BottomRightBox_01_Green_Text,BottomRightBox_01_Green_Value,BottomRightBox_01_Blue_Text,BottomRightBox_01_Blue_Value,BottomRightBox_01_TemperatureSlider,
		BottomRightBox_02_CheckBox,BottomRightBox_02_Title,BottomRightBox_02_TemperaturePreview,BottomRightBox_02_Red_Text,BottomRightBox_02_Red_Value,BottomRightBox_02_Green_Text,BottomRightBox_02_Green_Value,BottomRightBox_02_Blue_Text,BottomRightBox_02_Blue_Value,BottomRightBox_02_TemperatureSlider,
		DummyBackground
	};
	controls[] =
	{
	};

	class LeftBackground: RscText
	{
		idc = 9990;
		colorBackground[] = {0,0,0,1};
		x = "(0/100) * SafeZoneW + SafeZoneX";
		y = "(0/100) * SafeZoneH + SafeZoneY";
		w = "(30/100) * SafeZoneW";
		h = "(100/100) * SafeZoneH";
	};
	class TopBackground: RscText
	{
		idc = 9991;
		colorBackground[] = {0,0,0,1};
		x = "(30/100) * SafeZoneW + SafeZoneX";
		y = "(0/100) * SafeZoneH + SafeZoneY";
		w = "(70/100) * SafeZoneW";
		h = "(3/100) * SafeZoneH";
	};
	class BottomBackground: RscText
	{
		idc = 9992;
		colorBackground[] = {0,0,0,1};
		x = "(29/100) * SafeZoneW + SafeZoneX";
		y = "(84/100) * SafeZoneH + SafeZoneY";
		w = "(72/100) * SafeZoneW";
		h = "(17/100) * SafeZoneH";
	};

	class DummyBackground: RscText
	{
		colorBackground[] = {0,0,0,1};
		x = "(00/100) * SafeZoneW + SafeZoneX";
		y = "(00/100) * SafeZoneH + SafeZoneY";
		w = "(00/100) * SafeZoneW";
		h = "(00/100) * SafeZoneH";
	};



	class Top_01_Text: RscText	{idc = 0010; x = "(35/100) * SafeZoneW + SafeZoneX"; y = "(00/100) * SafeZoneH + SafeZoneY"; w = "(10/100) * SafeZoneW"; h = "(03/100) * SafeZoneH"; text = "Overcast";};
	class Top_01_Value: RscText	{idc = 0011; x = "(45/100) * SafeZoneW + SafeZoneX"; y = "(00/100) * SafeZoneH + SafeZoneY"; w = "(05/100) * SafeZoneW"; h = "(03/100) * SafeZoneH"; text = "0";};
	class Top_02_Text: RscText	{idc = 0012; x = "(50/100) * SafeZoneW + SafeZoneX"; y = "(00/100) * SafeZoneH + SafeZoneY"; w = "(10/100) * SafeZoneW"; h = "(03/100) * SafeZoneH"; text = "SunAngle";};
	class Top_02_Value: RscText	{idc = 0013; x = "(60/100) * SafeZoneW + SafeZoneX"; y = "(00/100) * SafeZoneH + SafeZoneY"; w = "(05/100) * SafeZoneW"; h = "(03/100) * SafeZoneH"; text = "90";};
	class Top_03_Text: RscText	{idc = 0014; x = "(65/100) * SafeZoneW + SafeZoneX"; y = "(00/100) * SafeZoneH + SafeZoneY"; w = "(10/100) * SafeZoneW"; h = "(03/100) * SafeZoneH"; text = "SunOrMoon";};
	class Top_03_Value: RscText	{idc = 0015; x = "(75/100) * SafeZoneW + SafeZoneX"; y = "(00/100) * SafeZoneH + SafeZoneY"; w = "(05/100) * SafeZoneW"; h = "(03/100) * SafeZoneH"; text = "1";};
	class Top_04_Text: RscText	{idc = 0016; x = "(80/100) * SafeZoneW + SafeZoneX"; y = "(00/100) * SafeZoneH + SafeZoneY"; w = "(10/100) * SafeZoneW"; h = "(03/100) * SafeZoneH"; text = "Height";};
	class Top_05_Value: RscText	{idc = 0017; x = "(90/100) * SafeZoneW + SafeZoneX"; y = "(00/100) * SafeZoneH + SafeZoneY"; w = "(05/100) * SafeZoneW"; h = "(03/100) * SafeZoneH"; text = "0";};
	class Top_06_Text: RscText	{idc = 0018; x = "(97/100) * SafeZoneW + SafeZoneX"; y = "(00/100) * SafeZoneH + SafeZoneY"; w = "(03/100) * SafeZoneW"; h = "(03/100) * SafeZoneH"; text = "X";};


	class Top_01_Slider: RscSlider	{idc = 0020; x = "(31/100) * SafeZoneW + SafeZoneX"; y = "(04/100) * SafeZoneH + SafeZoneY"; w = "(18/100) * SafeZoneW"; h = "(03/100) * SafeZoneH";};
	class Top_02_Slider: RscSlider	{idc = 0021; x = "(50/100) * SafeZoneW + SafeZoneX"; y = "(04/100) * SafeZoneH + SafeZoneY"; w = "(30/100) * SafeZoneW"; h = "(03/100) * SafeZoneH";};
	class Top_07_Text: RscText	{idc = 0022; x = "(80/100) * SafeZoneW + SafeZoneX"; y = "(04/100) * SafeZoneH + SafeZoneY"; w = "(04/100) * SafeZoneW"; h = "(03/100) * SafeZoneH"; text = "Fog";};
	class Top_07_Slider: RscSlider	{idc = 0023; x = "(84/100) * SafeZoneW + SafeZoneX"; y = "(04/100) * SafeZoneH + SafeZoneY"; w = "(15/100) * SafeZoneW"; h = "(03/100) * SafeZoneH";};

	class Top_01_01_MinValue: RscText	{idc = 0100; x = "(32/100) * SafeZoneW + SafeZoneX"; y = "(03.5/100) * SafeZoneH + SafeZoneY"; w = "(02/100) * SafeZoneW"; h = "(03/100) * SafeZoneH"; text = "0";};
	class Top_01_02_MaxValue: RscText	{idc = 0101; x = "(46/100) * SafeZoneW + SafeZoneX"; y = "(03.5/100) * SafeZoneH + SafeZoneY"; w = "(02/100) * SafeZoneW"; h = "(03/100) * SafeZoneH"; text = "1";};
	class Top_02_01_Value: RscText		{idc = 0102; x = "(51/100) * SafeZoneW + SafeZoneX"; y = "(03.5/100) * SafeZoneH + SafeZoneY"; w = "(03/100) * SafeZoneW"; h = "(03/100) * SafeZoneH"; text = "12";};
	class Top_02_02_Value: RscText		{idc = 0103; x = "(54.25/100) * SafeZoneW + SafeZoneX"; y = "(03.5/100) * SafeZoneH + SafeZoneY"; w = "(03/100) * SafeZoneW"; h = "(03/100) * SafeZoneH"; text = "18";};
	class Top_02_03_Value: RscText		{idc = 0104; x = "(57.50/100) * SafeZoneW + SafeZoneX"; y = "(03.5/100) * SafeZoneH + SafeZoneY"; w = "(03/100) * SafeZoneW"; h = "(03/100) * SafeZoneH"; text = "24";};
	class Top_02_04_Value: RscText		{idc = 0105; x = "(60.75/100) * SafeZoneW + SafeZoneX"; y = "(03.5/100) * SafeZoneH + SafeZoneY"; w = "(03/100) * SafeZoneW"; h = "(03/100) * SafeZoneH"; text = " 6";};
	class Top_02_05_Value: RscText		{idc = 0106; x = "(64.00/100) * SafeZoneW + SafeZoneX"; y = "(03.5/100) * SafeZoneH + SafeZoneY"; w = "(03/100) * SafeZoneW"; h = "(03/100) * SafeZoneH"; text = "12";};
	class Top_02_06_Value: RscText		{idc = 0107; x = "(67.25/100) * SafeZoneW + SafeZoneX"; y = "(03.5/100) * SafeZoneH + SafeZoneY"; w = "(03/100) * SafeZoneW"; h = "(03/100) * SafeZoneH"; text = "18";};
	class Top_02_07_Value: RscText		{idc = 0108; x = "(70.50/100) * SafeZoneW + SafeZoneX"; y = "(03.5/100) * SafeZoneH + SafeZoneY"; w = "(03/100) * SafeZoneW"; h = "(03/100) * SafeZoneH"; text = "24";};
	class Top_02_08_Value: RscText		{idc = 0109; x = "(73.75/100) * SafeZoneW + SafeZoneX"; y = "(03.5/100) * SafeZoneH + SafeZoneY"; w = "(03/100) * SafeZoneW"; h = "(03/100) * SafeZoneH"; text = " 6";};
	class Top_02_09_Value: RscText		{idc = 0110; x = "(77.00/100) * SafeZoneW + SafeZoneX"; y = "(03.5/100) * SafeZoneH + SafeZoneY"; w = "(03/100) * SafeZoneW"; h = "(03/100) * SafeZoneH"; text = "12";};
	class Top_07_01_MinValue: RscText	{idc = 0111; x = "(85/100) * SafeZoneW + SafeZoneX"; y = "(03.5/100) * SafeZoneH + SafeZoneY"; w = "(02/100) * SafeZoneW"; h = "(03/100) * SafeZoneH"; text = "0";};
	class Top_07_02_MaxValue: RscText	{idc = 0112; x = "(96/100) * SafeZoneW + SafeZoneX"; y = "(03.5/100) * SafeZoneH + SafeZoneY"; w = "(02/100) * SafeZoneW"; h = "(03/100) * SafeZoneH"; text = "1";};


	class LeftBox_Base_CheckBox: RscCheckBox		{x = "(0.5/100)* SafeZoneW + SafeZoneX"; w = "(03/100) * SafeZoneW"; h = "(03/100) * SafeZoneH";};
	class LeftBox_Base_Title: RscText			{x = "(04/100) * SafeZoneW + SafeZoneX"; w = "(15/100) * SafeZoneW"; h = "(03/100) * SafeZoneH"; text = "";};
	class LeftBox_Base_TemperaturePreview: RscText		{x = "(20/100) * SafeZoneW + SafeZoneX"; w = "(08/100) * SafeZoneW"; h = "(02/100) * SafeZoneH"; style = 2; colorBackground[] = {0,0,0,1}; colorText[] = {0,0,0,1}; shadow = 0; text = "1000";};//RscPicture?
	class LeftBox_Base_Red_Text: RscText			{x = "(04/100) * SafeZoneW + SafeZoneX"; w = "(02/100) * SafeZoneW"; h = "(03/100) * SafeZoneH"; text = "R";};
	class LeftBox_Base_Red_Value: RscEdit			{x = "(06/100) * SafeZoneW + SafeZoneX"; w = "(04/100) * SafeZoneW"; h = "(03/100) * SafeZoneH"; text = "0";};
	class LeftBox_Base_Green_Text: RscText			{x = "(10/100) * SafeZoneW + SafeZoneX"; w = "(02/100) * SafeZoneW"; h = "(03/100) * SafeZoneH"; text = "G";};
	class LeftBox_Base_Green_Value: RscEdit			{x = "(12/100) * SafeZoneW + SafeZoneX"; w = "(04/100) * SafeZoneW"; h = "(03/100) * SafeZoneH"; text = "0";};
	class LeftBox_Base_Blue_Text: RscText			{x = "(16/100) * SafeZoneW + SafeZoneX"; w = "(02/100) * SafeZoneW"; h = "(03/100) * SafeZoneH"; text = "B";};
	class LeftBox_Base_Blue_Value: RscEdit			{x = "(18/100) * SafeZoneW + SafeZoneX"; w = "(04/100) * SafeZoneW"; h = "(03/100) * SafeZoneH"; text = "0";};
	class LeftBox_Base_Luminance_Text: RscText		{x = "(22/100) * SafeZoneW + SafeZoneX"; w = "(03/100) * SafeZoneW"; h = "(03/100) * SafeZoneH"; text = "LV";};
	class LeftBox_Base_Luminance_Value: RscEdit		{x = "(25/100) * SafeZoneW + SafeZoneX"; w = "(05/100) * SafeZoneW"; h = "(03/100) * SafeZoneH"; text = "1";};
	class LeftBox_Base_TemperatureSlider: RscSlider		{x = "(04/100) * SafeZoneW + SafeZoneX"; w = "(25/100) * SafeZoneW"; h = "(01/100) * SafeZoneH";};


	class LeftBox_01_CheckBox: LeftBox_Base_CheckBox			{idc = 1000 + 0100; y = "((00 * 7 + 3)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_01_Title: LeftBox_Base_Title				{idc = 1001 + 0100; y = "((00 * 7 + 0)/100) * SafeZoneH + SafeZoneY"; text = "Diffuse";};
	class LeftBox_01_TemperaturePreview: LeftBox_Base_TemperaturePreview	{idc = 1002 + 0100; y = "((00 * 7 + 0.5)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_01_Red_Text: LeftBox_Base_Red_Text			{idc = 1003 + 0100; y = "((00 * 7 + 3)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_01_Red_Value: LeftBox_Base_Red_Value			{idc = 1004 + 0100; y = "((00 * 7 + 3)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_01_Green_Text: LeftBox_Base_Green_Text			{idc = 1005 + 0100; y = "((00 * 7 + 3)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_01_Green_Value: LeftBox_Base_Green_Value			{idc = 1006 + 0100; y = "((00 * 7 + 3)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_01_Blue_Text: LeftBox_Base_Blue_Text			{idc = 1007 + 0100; y = "((00 * 7 + 3)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_01_Blue_Value: LeftBox_Base_Blue_Value			{idc = 1008 + 0100; y = "((00 * 7 + 3)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_01_Luminance_Text: LeftBox_Base_Luminance_Text		{idc = 1009 + 0100; y = "((00 * 7 + 3)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_01_Luminance_Value: LeftBox_Base_Luminance_Value		{idc = 1010 + 0100; y = "((00 * 7 + 3)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_01_TemperatureSlider: LeftBox_Base_TemperatureSlider	{idc = 1012 + 0100; y = "((00 * 7 + 6)/100) * SafeZoneH + SafeZoneY";};

	class LeftBox_02_CheckBox: LeftBox_Base_CheckBox			{idc = 1000 + 0200; y = "((01 * 7 + 3)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_02_Title: LeftBox_Base_Title				{idc = 1001 + 0200; y = "((01 * 7 + 0)/100) * SafeZoneH + SafeZoneY"; text = "DiffuseCloud";};
	class LeftBox_02_TemperaturePreview: LeftBox_Base_TemperaturePreview	{idc = 1002 + 0200; y = "((01 * 7 + 0.5)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_02_Red_Text: LeftBox_Base_Red_Text			{idc = 1003 + 0200; y = "((01 * 7 + 3)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_02_Red_Value: LeftBox_Base_Red_Value			{idc = 1004 + 0200; y = "((01 * 7 + 3)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_02_Green_Text: LeftBox_Base_Green_Text			{idc = 1005 + 0200; y = "((01 * 7 + 3)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_02_Green_Value: LeftBox_Base_Green_Value			{idc = 1006 + 0200; y = "((01 * 7 + 3)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_02_Blue_Text: LeftBox_Base_Blue_Text			{idc = 1007 + 0200; y = "((01 * 7 + 3)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_02_Blue_Value: LeftBox_Base_Blue_Value			{idc = 1008 + 0200; y = "((01 * 7 + 3)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_02_Luminance_Text: LeftBox_Base_Luminance_Text		{idc = 1009 + 0200; y = "((01 * 7 + 3)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_02_Luminance_Value: LeftBox_Base_Luminance_Value		{idc = 1010 + 0200; y = "((01 * 7 + 3)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_02_TemperatureSlider: LeftBox_Base_TemperatureSlider	{idc = 1012 + 0200; y = "((01 * 7 + 6)/100) * SafeZoneH + SafeZoneY";};

	class LeftBox_03_CheckBox: LeftBox_Base_CheckBox			{idc = 1000 + 0300; y = "((02 * 7 + 3)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_03_Title: LeftBox_Base_Title				{idc = 1001 + 0300; y = "((02 * 7 + 0)/100) * SafeZoneH + SafeZoneY"; text = "Ambient";};
	class LeftBox_03_TemperaturePreview: LeftBox_Base_TemperaturePreview	{idc = 1002 + 0300; y = "((02 * 7 + 0.5)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_03_Red_Text: LeftBox_Base_Red_Text			{idc = 1003 + 0300; y = "((02 * 7 + 3)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_03_Red_Value: LeftBox_Base_Red_Value			{idc = 1004 + 0300; y = "((02 * 7 + 3)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_03_Green_Text: LeftBox_Base_Green_Text			{idc = 1005 + 0300; y = "((02 * 7 + 3)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_03_Green_Value: LeftBox_Base_Green_Value			{idc = 1006 + 0300; y = "((02 * 7 + 3)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_03_Blue_Text: LeftBox_Base_Blue_Text			{idc = 1007 + 0300; y = "((02 * 7 + 3)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_03_Blue_Value: LeftBox_Base_Blue_Value			{idc = 1008 + 0300; y = "((02 * 7 + 3)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_03_Luminance_Text: LeftBox_Base_Luminance_Text		{idc = 1009 + 0300; y = "((02 * 7 + 3)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_03_Luminance_Value: LeftBox_Base_Luminance_Value		{idc = 1010 + 0300; y = "((02 * 7 + 3)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_03_TemperatureSlider: LeftBox_Base_TemperatureSlider	{idc = 1012 + 0300; y = "((02 * 7 + 6)/100) * SafeZoneH + SafeZoneY";};

	class LeftBox_04_CheckBox: LeftBox_Base_CheckBox			{idc = 1000 + 0400; y = "((03 * 7 + 3)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_04_Title: LeftBox_Base_Title				{idc = 1001 + 0400; y = "((03 * 7 + 0)/100) * SafeZoneH + SafeZoneY"; text = "AmbientCloud";};
	class LeftBox_04_TemperaturePreview: LeftBox_Base_TemperaturePreview	{idc = 1002 + 0400; y = "((03 * 7 + 0.5)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_04_Red_Text: LeftBox_Base_Red_Text			{idc = 1003 + 0400; y = "((03 * 7 + 3)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_04_Red_Value: LeftBox_Base_Red_Value			{idc = 1004 + 0400; y = "((03 * 7 + 3)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_04_Green_Text: LeftBox_Base_Green_Text			{idc = 1005 + 0400; y = "((03 * 7 + 3)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_04_Green_Value: LeftBox_Base_Green_Value			{idc = 1006 + 0400; y = "((03 * 7 + 3)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_04_Blue_Text: LeftBox_Base_Blue_Text			{idc = 1007 + 0400; y = "((03 * 7 + 3)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_04_Blue_Value: LeftBox_Base_Blue_Value			{idc = 1008 + 0400; y = "((03 * 7 + 3)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_04_Luminance_Text: LeftBox_Base_Luminance_Text		{idc = 1009 + 0400; y = "((03 * 7 + 3)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_04_Luminance_Value: LeftBox_Base_Luminance_Value		{idc = 1010 + 0400; y = "((03 * 7 + 3)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_04_TemperatureSlider: LeftBox_Base_TemperatureSlider	{idc = 1012 + 0400; y = "((03 * 7 + 6)/100) * SafeZoneH + SafeZoneY";};

	class LeftBox_05_CheckBox: LeftBox_Base_CheckBox			{idc = 1000 + 0500; y = "((04 * 7 + 3)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_05_Title: LeftBox_Base_Title				{idc = 1001 + 0500; y = "((04 * 7 + 0)/100) * SafeZoneH + SafeZoneY"; text = "AmbientMid";};
	class LeftBox_05_TemperaturePreview: LeftBox_Base_TemperaturePreview	{idc = 1002 + 0500; y = "((04 * 7 + 0.5)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_05_Red_Text: LeftBox_Base_Red_Text			{idc = 1003 + 0500; y = "((04 * 7 + 3)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_05_Red_Value: LeftBox_Base_Red_Value			{idc = 1004 + 0500; y = "((04 * 7 + 3)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_05_Green_Text: LeftBox_Base_Green_Text			{idc = 1005 + 0500; y = "((04 * 7 + 3)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_05_Green_Value: LeftBox_Base_Green_Value			{idc = 1006 + 0500; y = "((04 * 7 + 3)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_05_Blue_Text: LeftBox_Base_Blue_Text			{idc = 1007 + 0500; y = "((04 * 7 + 3)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_05_Blue_Value: LeftBox_Base_Blue_Value			{idc = 1008 + 0500; y = "((04 * 7 + 3)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_05_Luminance_Text: LeftBox_Base_Luminance_Text		{idc = 1009 + 0500; y = "((04 * 7 + 3)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_05_Luminance_Value: LeftBox_Base_Luminance_Value		{idc = 1010 + 0500; y = "((04 * 7 + 3)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_05_TemperatureSlider: LeftBox_Base_TemperatureSlider	{idc = 1012 + 0500; y = "((04 * 7 + 6)/100) * SafeZoneH + SafeZoneY";};

	class LeftBox_06_CheckBox: LeftBox_Base_CheckBox			{idc = 1000 + 0600; y = "((05 * 7 + 3)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_06_Title: LeftBox_Base_Title				{idc = 1001 + 0600; y = "((05 * 7 + 0)/100) * SafeZoneH + SafeZoneY"; text = "AmbientMidCloud";};
	class LeftBox_06_TemperaturePreview: LeftBox_Base_TemperaturePreview	{idc = 1002 + 0600; y = "((05 * 7 + 0.5)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_06_Red_Text: LeftBox_Base_Red_Text			{idc = 1003 + 0600; y = "((05 * 7 + 3)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_06_Red_Value: LeftBox_Base_Red_Value			{idc = 1004 + 0600; y = "((05 * 7 + 3)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_06_Green_Text: LeftBox_Base_Green_Text			{idc = 1005 + 0600; y = "((05 * 7 + 3)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_06_Green_Value: LeftBox_Base_Green_Value			{idc = 1006 + 0600; y = "((05 * 7 + 3)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_06_Blue_Text: LeftBox_Base_Blue_Text			{idc = 1007 + 0600; y = "((05 * 7 + 3)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_06_Blue_Value: LeftBox_Base_Blue_Value			{idc = 1008 + 0600; y = "((05 * 7 + 3)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_06_Luminance_Text: LeftBox_Base_Luminance_Text		{idc = 1009 + 0600; y = "((05 * 7 + 3)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_06_Luminance_Value: LeftBox_Base_Luminance_Value		{idc = 1010 + 0600; y = "((05 * 7 + 3)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_06_TemperatureSlider: LeftBox_Base_TemperatureSlider	{idc = 1012 + 0600; y = "((05 * 7 + 6)/100) * SafeZoneH + SafeZoneY";};

	class LeftBox_07_CheckBox: LeftBox_Base_CheckBox			{idc = 1000 + 0700; y = "((06 * 7 + 3)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_07_Title: LeftBox_Base_Title				{idc = 1001 + 0700; y = "((06 * 7 + 0)/100) * SafeZoneH + SafeZoneY"; text = "GroundReflection";};
	class LeftBox_07_TemperaturePreview: LeftBox_Base_TemperaturePreview	{idc = 1002 + 0700; y = "((06 * 7 + 0.5)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_07_Red_Text: LeftBox_Base_Red_Text			{idc = 1003 + 0700; y = "((06 * 7 + 3)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_07_Red_Value: LeftBox_Base_Red_Value			{idc = 1004 + 0700; y = "((06 * 7 + 3)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_07_Green_Text: LeftBox_Base_Green_Text			{idc = 1005 + 0700; y = "((06 * 7 + 3)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_07_Green_Value: LeftBox_Base_Green_Value			{idc = 1006 + 0700; y = "((06 * 7 + 3)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_07_Blue_Text: LeftBox_Base_Blue_Text			{idc = 1007 + 0700; y = "((06 * 7 + 3)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_07_Blue_Value: LeftBox_Base_Blue_Value			{idc = 1008 + 0700; y = "((06 * 7 + 3)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_07_Luminance_Text: LeftBox_Base_Luminance_Text		{idc = 1009 + 0700; y = "((06 * 7 + 3)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_07_Luminance_Value: LeftBox_Base_Luminance_Value		{idc = 1010 + 0700; y = "((06 * 7 + 3)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_07_TemperatureSlider: LeftBox_Base_TemperatureSlider	{idc = 1012 + 0700; y = "((06 * 7 + 6)/100) * SafeZoneH + SafeZoneY";};

	class LeftBox_08_CheckBox: LeftBox_Base_CheckBox			{idc = 1000 + 0800; y = "((07 * 7 + 3)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_08_Title: LeftBox_Base_Title				{idc = 1001 + 0800; y = "((07 * 7 + 0)/100) * SafeZoneH + SafeZoneY"; text = "GroundReflectionCloud";};
	class LeftBox_08_TemperaturePreview: LeftBox_Base_TemperaturePreview	{idc = 1002 + 0800; y = "((07 * 7 + 0.5)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_08_Red_Text: LeftBox_Base_Red_Text			{idc = 1003 + 0800; y = "((07 * 7 + 3)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_08_Red_Value: LeftBox_Base_Red_Value			{idc = 1004 + 0800; y = "((07 * 7 + 3)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_08_Green_Text: LeftBox_Base_Green_Text			{idc = 1005 + 0800; y = "((07 * 7 + 3)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_08_Green_Value: LeftBox_Base_Green_Value			{idc = 1006 + 0800; y = "((07 * 7 + 3)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_08_Blue_Text: LeftBox_Base_Blue_Text			{idc = 1007 + 0800; y = "((07 * 7 + 3)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_08_Blue_Value: LeftBox_Base_Blue_Value			{idc = 1008 + 0800; y = "((07 * 7 + 3)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_08_Luminance_Text: LeftBox_Base_Luminance_Text		{idc = 1009 + 0800; y = "((07 * 7 + 3)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_08_Luminance_Value: LeftBox_Base_Luminance_Value		{idc = 1010 + 0800; y = "((07 * 7 + 3)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_08_TemperatureSlider: LeftBox_Base_TemperatureSlider	{idc = 1012 + 0800; y = "((07 * 7 + 6)/100) * SafeZoneH + SafeZoneY";};

	class LeftBox_09_CheckBox: LeftBox_Base_CheckBox			{idc = 1000 + 0900; y = "((08 * 7 + 3)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_09_Title: LeftBox_Base_Title				{idc = 1001 + 0900; y = "((08 * 7 + 0)/100) * SafeZoneH + SafeZoneY"; text = "Bidirect";};
	class LeftBox_09_TemperaturePreview: LeftBox_Base_TemperaturePreview	{idc = 1002 + 0900; y = "((08 * 7 + 0.5)/100) * SafeZoneH + SafeZoneY"; colorText[] = {1,1,1,1};};
	class LeftBox_09_Red_Text: LeftBox_Base_Red_Text			{idc = 1003 + 0900; y = "((08 * 7 + 3)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_09_Red_Value: LeftBox_Base_Red_Value			{idc = 1004 + 0900; y = "((08 * 7 + 3)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_09_Green_Text: LeftBox_Base_Green_Text			{idc = 1005 + 0900; y = "((08 * 7 + 3)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_09_Green_Value: LeftBox_Base_Green_Value			{idc = 1006 + 0900; y = "((08 * 7 + 3)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_09_Blue_Text: LeftBox_Base_Blue_Text			{idc = 1007 + 0900; y = "((08 * 7 + 3)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_09_Blue_Value: LeftBox_Base_Blue_Value			{idc = 1008 + 0900; y = "((08 * 7 + 3)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_09_Luminance_Text: LeftBox_Base_Luminance_Text		{idc = 1009 + 0900; y = "((08 * 7 + 3)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_09_Luminance_Value: LeftBox_Base_Luminance_Value		{idc = 1010 + 0900; y = "((08 * 7 + 3)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_09_TemperatureSlider: LeftBox_Base_TemperatureSlider	{idc = 1012 + 0900; y = "((08 * 7 + 6)/100) * SafeZoneH + SafeZoneY";};

	class LeftBox_10_CheckBox: LeftBox_Base_CheckBox			{idc = 1000 + 1000; y = "((09 * 7 + 3)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_10_Title: LeftBox_Base_Title				{idc = 1001 + 1000; y = "((09 * 7 + 0)/100) * SafeZoneH + SafeZoneY"; text = "BidirectCloud";};
	class LeftBox_10_TemperaturePreview: LeftBox_Base_TemperaturePreview	{idc = 1002 + 1000; y = "((09 * 7 + 0.5)/100) * SafeZoneH + SafeZoneY"; colorText[] = {1,1,1,1};};
	class LeftBox_10_Red_Text: LeftBox_Base_Red_Text			{idc = 1003 + 1000; y = "((09 * 7 + 3)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_10_Red_Value: LeftBox_Base_Red_Value			{idc = 1004 + 1000; y = "((09 * 7 + 3)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_10_Green_Text: LeftBox_Base_Green_Text			{idc = 1005 + 1000; y = "((09 * 7 + 3)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_10_Green_Value: LeftBox_Base_Green_Value			{idc = 1006 + 1000; y = "((09 * 7 + 3)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_10_Blue_Text: LeftBox_Base_Blue_Text			{idc = 1007 + 1000; y = "((09 * 7 + 3)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_10_Blue_Value: LeftBox_Base_Blue_Value			{idc = 1008 + 1000; y = "((09 * 7 + 3)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_10_Luminance_Text: LeftBox_Base_Luminance_Text		{idc = 1009 + 1000; y = "((09 * 7 + 3)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_10_Luminance_Value: LeftBox_Base_Luminance_Value		{idc = 1010 + 1000; y = "((09 * 7 + 3)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_10_TemperatureSlider: LeftBox_Base_TemperatureSlider	{idc = 1012 + 1000; y = "((09 * 7 + 6)/100) * SafeZoneH + SafeZoneY";};

	class LeftBox_11_CheckBox: LeftBox_Base_CheckBox			{idc = 1000 + 1100; y = "((10 * 7 + 3)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_11_Title: LeftBox_Base_Title				{idc = 1001 + 1100; y = "((10 * 7 + 0)/100) * SafeZoneH + SafeZoneY"; text = "Sky";};
	class LeftBox_11_TemperaturePreview: LeftBox_Base_TemperaturePreview	{idc = 1002 + 1100; y = "((10 * 7 + 0.5)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_11_Red_Text: LeftBox_Base_Red_Text			{idc = 1003 + 1100; y = "((10 * 7 + 3)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_11_Red_Value: LeftBox_Base_Red_Value			{idc = 1004 + 1100; y = "((10 * 7 + 3)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_11_Green_Text: LeftBox_Base_Green_Text			{idc = 1005 + 1100; y = "((10 * 7 + 3)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_11_Green_Value: LeftBox_Base_Green_Value			{idc = 1006 + 1100; y = "((10 * 7 + 3)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_11_Blue_Text: LeftBox_Base_Blue_Text			{idc = 1007 + 1100; y = "((10 * 7 + 3)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_11_Blue_Value: LeftBox_Base_Blue_Value			{idc = 1008 + 1100; y = "((10 * 7 + 3)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_11_Luminance_Text: LeftBox_Base_Luminance_Text		{idc = 1009 + 1100; y = "((10 * 7 + 3)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_11_Luminance_Value: LeftBox_Base_Luminance_Value		{idc = 1010 + 1100; y = "((10 * 7 + 3)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_11_TemperatureSlider: LeftBox_Base_TemperatureSlider	{idc = 1012 + 1100; y = "((10 * 7 + 6)/100) * SafeZoneH + SafeZoneY";};

	class LeftBox_12_CheckBox: LeftBox_Base_CheckBox			{idc = 1000 + 1200; y = "((11 * 7 + 3)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_12_Title: LeftBox_Base_Title				{idc = 1001 + 1200; y = "((11 * 7 + 0)/100) * SafeZoneH + SafeZoneY"; text = "SkyAroundSun";};
	class LeftBox_12_TemperaturePreview: LeftBox_Base_TemperaturePreview	{idc = 1002 + 1200; y = "((11 * 7 + 0.5)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_12_Red_Text: LeftBox_Base_Red_Text			{idc = 1003 + 1200; y = "((11 * 7 + 3)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_12_Red_Value: LeftBox_Base_Red_Value			{idc = 1004 + 1200; y = "((11 * 7 + 3)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_12_Green_Text: LeftBox_Base_Green_Text			{idc = 1005 + 1200; y = "((11 * 7 + 3)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_12_Green_Value: LeftBox_Base_Green_Value			{idc = 1006 + 1200; y = "((11 * 7 + 3)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_12_Blue_Text: LeftBox_Base_Blue_Text			{idc = 1007 + 1200; y = "((11 * 7 + 3)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_12_Blue_Value: LeftBox_Base_Blue_Value			{idc = 1008 + 1200; y = "((11 * 7 + 3)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_12_Luminance_Text: LeftBox_Base_Luminance_Text		{idc = 1009 + 1200; y = "((11 * 7 + 3)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_12_Luminance_Value: LeftBox_Base_Luminance_Value		{idc = 1010 + 1200; y = "((11 * 7 + 3)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_12_TemperatureSlider: LeftBox_Base_TemperatureSlider	{idc = 1012 + 1200; y = "((11 * 7 + 6)/100) * SafeZoneH + SafeZoneY";};

	class LeftBox_13_CheckBox: LeftBox_Base_CheckBox			{idc = 1000 + 1300; y = "((12 * 7 + 3)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_13_Title: LeftBox_Base_Title				{idc = 1001 + 1300; y = "((12 * 7 + 0)/100) * SafeZoneH + SafeZoneY"; text = "FogColor";};
	class LeftBox_13_TemperaturePreview: LeftBox_Base_TemperaturePreview	{idc = 1002 + 1300; y = "((12 * 7 + 0.5)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_13_Red_Text: LeftBox_Base_Red_Text			{idc = 1003 + 1300; y = "((12 * 7 + 3)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_13_Red_Value: LeftBox_Base_Red_Value			{idc = 1004 + 1300; y = "((12 * 7 + 3)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_13_Green_Text: LeftBox_Base_Green_Text			{idc = 1005 + 1300; y = "((12 * 7 + 3)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_13_Green_Value: LeftBox_Base_Green_Value			{idc = 1006 + 1300; y = "((12 * 7 + 3)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_13_Blue_Text: LeftBox_Base_Blue_Text			{idc = 1007 + 1300; y = "((12 * 7 + 3)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_13_Blue_Value: LeftBox_Base_Blue_Value			{idc = 1008 + 1300; y = "((12 * 7 + 3)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_13_Luminance_Text: LeftBox_Base_Luminance_Text		{idc = 1009 + 1300; y = "((12 * 7 + 3)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_13_Luminance_Value: LeftBox_Base_Luminance_Value		{idc = 1010 + 1300; y = "((12 * 7 + 3)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_13_TemperatureSlider: LeftBox_Base_TemperatureSlider	{idc = 1012 + 1300; y = "((12 * 7 + 6)/100) * SafeZoneH + SafeZoneY";};

	class LeftBox_14_CheckBox: LeftBox_Base_CheckBox			{idc = 1000 + 1400; y = "((13 * 7 + 3)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_14_Title: LeftBox_Base_Title				{idc = 1001 + 1400; y = "((13 * 7 + 0)/100) * SafeZoneH + SafeZoneY"; text = "CloudsColor";};
	class LeftBox_14_TemperaturePreview: LeftBox_Base_TemperaturePreview	{idc = 1002 + 1400; y = "((13 * 7 + 0.5)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_14_Red_Text: LeftBox_Base_Red_Text			{idc = 1003 + 1400; y = "((13 * 7 + 3)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_14_Red_Value: LeftBox_Base_Red_Value			{idc = 1004 + 1400; y = "((13 * 7 + 3)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_14_Green_Text: LeftBox_Base_Green_Text			{idc = 1005 + 1400; y = "((13 * 7 + 3)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_14_Green_Value: LeftBox_Base_Green_Value			{idc = 1006 + 1400; y = "((13 * 7 + 3)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_14_Blue_Text: LeftBox_Base_Blue_Text			{idc = 1007 + 1400; y = "((13 * 7 + 3)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_14_Blue_Value: LeftBox_Base_Blue_Value			{idc = 1008 + 1400; y = "((13 * 7 + 3)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_14_Luminance_Text: LeftBox_Base_Luminance_Text		{idc = 1009 + 1400; y = "((13 * 7 + 3)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_14_Luminance_Value: LeftBox_Base_Luminance_Value		{idc = 1010 + 1400; y = "((13 * 7 + 3)/100) * SafeZoneH + SafeZoneY";};
	class LeftBox_14_TemperatureSlider: LeftBox_Base_TemperatureSlider	{idc = 1012 + 1400; y = "((13 * 7 + 6)/100) * SafeZoneH + SafeZoneY";};



	class BottomBox_Base_CheckBox: RscCheckBox		{x = "(30.5/100) * SafeZoneW + SafeZoneX"; w = "(03/100) * SafeZoneW"; h = "(03/100) * SafeZoneH";};
	class BottomBox_Base_Title: RscText			{x = "(34/100)   * SafeZoneW + SafeZoneX"; w = "(15/100) * SafeZoneW"; h = "(03/100) * SafeZoneH"; text = "";};
	//RscEdit instead?
	class BottomBox_Base_Value: RscText			{x = "(49/100)   * SafeZoneW + SafeZoneX"; w = "(05/100) * SafeZoneW"; h = "(03/100) * SafeZoneH"; text = "0000";};
	class BottomBox_Base_Slider: RscXSliderH		{x = "(34/100)   * SafeZoneW + SafeZoneX"; w = "(21/100) * SafeZoneW"; h = "(01/100) * SafeZoneH";};


	class BottomBox_01_01_CheckBox: BottomBox_Base_CheckBox			{idc = 3000 + 0000; y = "((00 * 4 + 84)/100) * SafeZoneH + SafeZoneY";};
	class BottomBox_01_01_Title: BottomBox_Base_Title			{idc = 3001 + 0000; y = "((00 * 4 + 84)/100) * SafeZoneH + SafeZoneY"; text = "AperatureMin";};
	class BottomBox_01_01_Value: BottomBox_Base_Value			{idc = 3002 + 0000; y = "((00 * 4 + 84)/100) * SafeZoneH + SafeZoneY";};
	class BottomBox_01_01_Slider: BottomBox_Base_Slider			{idc = 3003 + 0000; y = "((00 * 4 + 87)/100) * SafeZoneH + SafeZoneY";};

	class BottomBox_01_02_CheckBox: BottomBox_Base_CheckBox			{idc = 3000 + 0010; y = "((01 * 4 + 84)/100) * SafeZoneH + SafeZoneY";};
	class BottomBox_01_02_Title: BottomBox_Base_Title			{idc = 3001 + 0010; y = "((01 * 4 + 84)/100) * SafeZoneH + SafeZoneY"; text = "AperatureStandard";};
	class BottomBox_01_02_Value: BottomBox_Base_Value			{idc = 3002 + 0010; y = "((01 * 4 + 84)/100) * SafeZoneH + SafeZoneY";};
	class BottomBox_01_02_Slider: BottomBox_Base_Slider			{idc = 3003 + 0010; y = "((01 * 4 + 87)/100) * SafeZoneH + SafeZoneY";};

	class BottomBox_01_03_CheckBox: BottomBox_Base_CheckBox			{idc = 3000 + 0020; y = "((02 * 4 + 84)/100) * SafeZoneH + SafeZoneY";};
	class BottomBox_01_03_Title: BottomBox_Base_Title			{idc = 3001 + 0020; y = "((02 * 4 + 84)/100) * SafeZoneH + SafeZoneY"; text = "AperatureMax";};
	class BottomBox_01_03_Value: BottomBox_Base_Value			{idc = 3002 + 0020; y = "((02 * 4 + 84)/100) * SafeZoneH + SafeZoneY";};
	class BottomBox_01_03_Slider: BottomBox_Base_Slider			{idc = 3003 + 0020; y = "((02 * 4 + 87)/100) * SafeZoneH + SafeZoneY";};

	class BottomBox_01_04_CheckBox: BottomBox_Base_CheckBox			{idc = 3000 + 0030; y = "((03 * 4 + 84)/100) * SafeZoneH + SafeZoneY";};
	class BottomBox_01_04_Title: BottomBox_Base_Title			{idc = 3001 + 0030; y = "((03 * 4 + 84)/100) * SafeZoneH + SafeZoneY"; text = "StandardAvgLum";};
	class BottomBox_01_04_Value: BottomBox_Base_Value			{idc = 3002 + 0030; y = "((03 * 4 + 84)/100) * SafeZoneH + SafeZoneY";};
	class BottomBox_01_04_Slider: BottomBox_Base_Slider			{idc = 3003 + 0030; y = "((03 * 4 + 87)/100) * SafeZoneH + SafeZoneY";};


	class BottomBox_02_01_CheckBox: BottomBox_01_01_CheckBox		{idc = 3000 + 0100; x = "(55.5/100) * SafeZoneW + SafeZoneX";};
	class BottomBox_02_01_Title: BottomBox_01_01_Title			{idc = 3001 + 0100; x = "(59/100)   * SafeZoneW + SafeZoneX"; text = "Desired LV Coef";};
	class BottomBox_02_01_Value: BottomBox_01_01_Value			{idc = 3002 + 0100; x = "(74/100)   * SafeZoneW + SafeZoneX";};
	class BottomBox_02_01_Slider: BottomBox_01_01_Slider			{idc = 3003 + 0100; x = "(59/100)   * SafeZoneW + SafeZoneX";};

	class BottomBox_02_02_CheckBox: BottomBox_01_02_CheckBox		{idc = 3000 + 0110; x = "(55.5/100) * SafeZoneW + SafeZoneX";};
	class BottomBox_02_02_Title: BottomBox_01_02_Title			{idc = 3001 + 0110; x = "(59/100)   * SafeZoneW + SafeZoneX"; text = "Desired LV CoefCloud";};
	class BottomBox_02_02_Value: BottomBox_01_02_Value			{idc = 3002 + 0110; x = "(74/100)   * SafeZoneW + SafeZoneX";};
	class BottomBox_02_02_Slider: BottomBox_01_02_Slider			{idc = 3003 + 0110; x = "(59/100)   * SafeZoneW + SafeZoneX";};

	class BottomBox_02_03_CheckBox: BottomBox_01_03_CheckBox		{idc = 3000 + 0120; x = "(55.5/100) * SafeZoneW + SafeZoneX";};
	class BottomBox_02_03_Title: BottomBox_01_03_Title			{idc = 3001 + 0120; x = "(59/100)   * SafeZoneW + SafeZoneX"; text = "LV RectCoef";};
	class BottomBox_02_03_Value: BottomBox_01_03_Value			{idc = 3002 + 0120; x = "(74/100)   * SafeZoneW + SafeZoneX";};
	class BottomBox_02_03_Slider: BottomBox_01_03_Slider			{idc = 3003 + 0120; x = "(59/100)   * SafeZoneW + SafeZoneX";};

	class BottomBox_02_04_CheckBox: BottomBox_01_04_CheckBox		{idc = 3000 + 0130; x = "(55.5/100) * SafeZoneW + SafeZoneX";};
	class BottomBox_02_04_Title: BottomBox_01_04_Title			{idc = 3001 + 0130; x = "(59/100)   * SafeZoneW + SafeZoneX"; text = "LV RectCoefCloud";};
	class BottomBox_02_04_Value: BottomBox_01_04_Value			{idc = 3002 + 0130; x = "(74/100)   * SafeZoneW + SafeZoneX";};
	class BottomBox_02_04_Slider: BottomBox_01_04_Slider			{idc = 3003 + 0130; x = "(59/100)   * SafeZoneW + SafeZoneX";};


	class BottomRightBox_03_01_CheckBox: BottomBox_01_01_CheckBox		{idc = 4000 + 0000; x = "(80.5/100) * SafeZoneW + SafeZoneX"; y = "((00 * 4 + 80)/100) * SafeZoneH + SafeZoneY";};
	class BottomRightBox_03_01_Title: BottomBox_01_01_Title			{idc = 4001 + 0000; x = "(84/100)   * SafeZoneW + SafeZoneX"; y = "((00 * 4 + 80)/100) * SafeZoneH + SafeZoneY"; text = "swBrightness";};
	class BottomRightBox_03_01_Value: BottomBox_01_01_Value			{idc = 4002 + 0000; x = "(94/100)   * SafeZoneW + SafeZoneX"; y = "((00 * 4 + 80)/100) * SafeZoneH + SafeZoneY";};
	class BottomRightBox_03_01_Slider: BottomBox_01_01_Slider		{idc = 4003 + 0000; x = "(84/100)   * SafeZoneW + SafeZoneX"; y = "((00 * 4 + 83)/100) * SafeZoneH + SafeZoneY"; w = "(16/100) * SafeZoneW";};



	class BottomRightBox_Base_CheckBox: LeftBox_Base_CheckBox			{x = "(80.5/100) * SafeZoneW + SafeZoneX"; w = "(03/100)   * SafeZoneW"; h = "(03/100) * SafeZoneH";};
	class BottomRightBox_Base_Title: LeftBox_Base_Title				{x = "(84/100)   * SafeZoneW + SafeZoneX"; w = "(15/100)   * SafeZoneW"; h = "(03/100) * SafeZoneH";};
	class BottomRightBox_Base_TemperaturePreview: LeftBox_Base_TemperaturePreview	{x = "(91/100)   * SafeZoneW + SafeZoneX"; w = "(08/100)   * SafeZoneW"; h = "(02/100) * SafeZoneH";};
	class BottomRightBox_Base_Red_Text: LeftBox_Base_Red_Text			{x = "(84/100)   * SafeZoneW + SafeZoneX"; w = "(02/100)   * SafeZoneW"; h = "(03/100) * SafeZoneH";};
	class BottomRightBox_Base_Red_Value: LeftBox_Base_Red_Value			{x = "(86/100)   * SafeZoneW + SafeZoneX"; w = "(03.5/100)   * SafeZoneW"; h = "(03/100) * SafeZoneH";};
	class BottomRightBox_Base_Green_Text: LeftBox_Base_Green_Text			{x = "(89/100)   * SafeZoneW + SafeZoneX"; w = "(02/100)   * SafeZoneW"; h = "(03/100) * SafeZoneH";};
	class BottomRightBox_Base_Green_Value: LeftBox_Base_Green_Value			{x = "(91/100)   * SafeZoneW + SafeZoneX"; w = "(03.5/100)   * SafeZoneW"; h = "(03/100) * SafeZoneH";};
	class BottomRightBox_Base_Blue_Text: LeftBox_Base_Blue_Text			{x = "(94/100)   * SafeZoneW + SafeZoneX"; w = "(02/100)   * SafeZoneW"; h = "(03/100) * SafeZoneH";};
	class BottomRightBox_Base_Blue_Value: LeftBox_Base_Blue_Value			{x = "(96/100)   * SafeZoneW + SafeZoneX"; w = "(03.5/100)   * SafeZoneW"; h = "(03/100) * SafeZoneH";};
	class BottomRightBox_Base_TemperatureSlider: LeftBox_Base_TemperatureSlider	{x = "(84/100)   * SafeZoneW + SafeZoneX"; w = "(15/100)   * SafeZoneW"; h = "(01/100) * SafeZoneH";};


	class BottomRightBox_01_CheckBox: BottomRightBox_Base_CheckBox				{idc = 5000 + 0000; y = "((12 * 7 + 3)/100) * SafeZoneH + SafeZoneY";};
	class BottomRightBox_01_Title: BottomRightBox_Base_Title				{idc = 5001 + 0000; y = "((12 * 7 + 0)/100) * SafeZoneH + SafeZoneY"; text = "Rayleigh";};
	class BottomRightBox_01_TemperaturePreview: BottomRightBox_Base_TemperaturePreview	{idc = 5002 + 0000; y = "((12 * 7 + 0.5)/100) * SafeZoneH + SafeZoneY";};
	class BottomRightBox_01_Red_Text: BottomRightBox_Base_Red_Text				{idc = 5003 + 0000; y = "((12 * 7 + 3)/100) * SafeZoneH + SafeZoneY";};
	class BottomRightBox_01_Red_Value: BottomRightBox_Base_Red_Value			{idc = 5004 + 0000; y = "((12 * 7 + 3)/100) * SafeZoneH + SafeZoneY";};
	class BottomRightBox_01_Green_Text: BottomRightBox_Base_Green_Text			{idc = 5005 + 0000; y = "((12 * 7 + 3)/100) * SafeZoneH + SafeZoneY";};
	class BottomRightBox_01_Green_Value: BottomRightBox_Base_Green_Value			{idc = 5006 + 0000; y = "((12 * 7 + 3)/100) * SafeZoneH + SafeZoneY";};
	class BottomRightBox_01_Blue_Text: BottomRightBox_Base_Blue_Text			{idc = 5007 + 0000; y = "((12 * 7 + 3)/100) * SafeZoneH + SafeZoneY";};
	class BottomRightBox_01_Blue_Value: BottomRightBox_Base_Blue_Value			{idc = 5008 + 0000; y = "((12 * 7 + 3)/100) * SafeZoneH + SafeZoneY";};
	class BottomRightBox_01_TemperatureSlider: BottomRightBox_Base_TemperatureSlider	{idc = 5012 + 0000; y = "((12 * 7 + 6)/100) * SafeZoneH + SafeZoneY";};

	class BottomRightBox_02_CheckBox: BottomRightBox_Base_CheckBox				{idc = 5000 + 0100; y = "((13 * 7 + 3)/100) * SafeZoneH + SafeZoneY";};
	class BottomRightBox_02_Title: BottomRightBox_Base_Title				{idc = 5001 + 0100; y = "((13 * 7 + 0)/100) * SafeZoneH + SafeZoneY"; text = "Mie";};
	class BottomRightBox_02_TemperaturePreview: BottomRightBox_Base_TemperaturePreview	{idc = 5002 + 0100; y = "((13 * 7 + 0.5)/100) * SafeZoneH + SafeZoneY";};
	class BottomRightBox_02_Red_Text: BottomRightBox_Base_Red_Text				{idc = 5003 + 0100; y = "((13 * 7 + 3)/100) * SafeZoneH + SafeZoneY";};
	class BottomRightBox_02_Red_Value: BottomRightBox_Base_Red_Value			{idc = 5004 + 0100; y = "((13 * 7 + 3)/100) * SafeZoneH + SafeZoneY";};
	class BottomRightBox_02_Green_Text: BottomRightBox_Base_Green_Text			{idc = 5005 + 0100; y = "((13 * 7 + 3)/100) * SafeZoneH + SafeZoneY";};
	class BottomRightBox_02_Green_Value: BottomRightBox_Base_Green_Value			{idc = 5006 + 0100; y = "((13 * 7 + 3)/100) * SafeZoneH + SafeZoneY";};
	class BottomRightBox_02_Blue_Text: BottomRightBox_Base_Blue_Text			{idc = 5007 + 0100; y = "((13 * 7 + 3)/100) * SafeZoneH + SafeZoneY";};
	class BottomRightBox_02_Blue_Value: BottomRightBox_Base_Blue_Value			{idc = 5008 + 0100; y = "((13 * 7 + 3)/100) * SafeZoneH + SafeZoneY";};
	class BottomRightBox_02_TemperatureSlider: BottomRightBox_Base_TemperatureSlider	{idc = 5012 + 0100; y = "((13 * 7 + 6)/100) * SafeZoneH + SafeZoneY";};
};

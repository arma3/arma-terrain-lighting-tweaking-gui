//A3 1.82 defs
class ScrollBar
{
	color[] = {1,1,1,0.6};
	colorActive[] = {1,1,1,1};
	colorDisabled[] = {1,1,1,0.3};
	thumb = "\A3\ui_f\data\gui\cfg\scrollbar\thumb_ca.paa";
	arrowEmpty = "\A3\ui_f\data\gui\cfg\scrollbar\arrowEmpty_ca.paa";
	arrowFull = "\A3\ui_f\data\gui\cfg\scrollbar\arrowFull_ca.paa";
	border = "\A3\ui_f\data\gui\cfg\scrollbar\border_ca.paa";
	shadow = 0;
	scrollSpeed = 0.06;
	width = 0;
	height = 0;
	autoScrollEnabled = 0;
	autoScrollSpeed = -1;
	autoScrollDelay = 5;
	autoScrollRewind = 0;
};
class DefaultTextAttributes
{
	font = "RobotoCondensed";
	color = "#ffffff";
	size = 1;
	align = "left";
	valign = "middle";
	shadow = "true";
	shadowOffset = 0.06;
	shadowColor = "#80000000";
	underline = "false";
};
class DefaultSounds
{
	soundOK[] = {"",0.1,1};
	soundCancel[] = {"",0.1,1};
	soundChangeFocus[] = {"",0.1,1};
	soundFail[] = {"",0.1,1};
};
class RscText
{
	deletable = 0;
	fade = 0;
	access = 0;
	type = 0;
	idc = -1;
	colorBackground[] = {0,0,0,0};
	colorText[] = {1,1,1,1};
	text = "";
	fixedWidth = 0;
	colorShadow[] = {0,0,0,0.5};
	tooltipColorText[] = {1,1,1,1};
	tooltipColorBox[] = {1,1,1,1};
	tooltipColorShade[] = {0,0,0,0.65};
	x = 0;
	y = 0;
	h = 0.037;
	w = 0.3;
	style = 0;
	shadow = 1;
	font = "RobotoCondensed";
	SizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	linespacing = 1;
};
class RscTextSmall: RscText
{
	h = 0.03;
	sizeEx = 0.027;
};
class RscTitle: RscText
{
	x = 0.15;
	y = 0.06;
	w = 0.7;
	shadow = 0;
	colorText[] = {0.95,0.95,0.95,1};
	style = 0;
	sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	font = "PuristaMedium";
};
class RscProgress
{
	deletable = 0;
	fade = 0;
	access = 0;
	type = 8;
	style = 0;
	colorFrame[] = {0,0,0,0};
	colorBar[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.13])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.54])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.21])","(profilenamespace getvariable ['GUI_BCG_RGB_A',0.8])"};
	x = 0.344;
	y = 0.619;
	w = 0.313726;
	h = 0.0261438;
	shadow = 2;
	texture = "#(argb,8,8,3)color(1,1,1,1)";
};
class RscProgressNotFreeze
{
	deletable = 0;
	fade = 0;
	idc = -1;
	type = 45;
	style = 0;
	shadow = 0;
	x = 0;
	y = 0;
	w = 0.5;
	h = 0.1;
	texture = "#(argb,8,8,3)color(0,0,0,0)";
};
class RscPicture
{
	deletable = 0;
	fade = 0;
	access = 0;
	type = 0;
	idc = -1;
	style = 48;
	colorBackground[] = {0,0,0,0};
	colorText[] = {1,1,1,1};
	font = "TahomaB";
	sizeEx = 0;
	lineSpacing = 0;
	text = "";
	fixedWidth = 0;
	tooltipColorText[] = {1,1,1,1};
	tooltipColorBox[] = {1,1,1,1};
	tooltipColorShade[] = {0,0,0,0.65};
	shadow = 0;
	x = 0;
	y = 0;
	w = 0.2;
	h = 0.15;
};
class RscLadderPicture: RscPicture
{
	bottomValue = 0;
	topValue = 100;
	visibleRange = -1;
};
class RscPictureKeepAspect: RscPicture
{
	style = "0x30 + 0x800";
};
class RscHTML
{
	deletable = 0;
	fade = 0;
	access = 0;
	type = 9;
	idc = -1;
	style = 0;
	filename = "";
	colorBackground[] = {0,0,0,0};
	colorText[] = {1,1,1,1};
	colorBold[] = {1,1,1,1};
	colorLink[] = {1,1,1,0.75};
	colorLinkActive[] = {1,1,1,1};
	colorPicture[] = {1,1,1,1};
	colorPictureLink[] = {1,1,1,1};
	colorPictureSelected[] = {1,1,1,1};
	colorPictureBorder[] = {0,0,0,0};
	tooltipColorText[] = {1,1,1,1};
	tooltipColorBox[] = {1,1,1,1};
	tooltipColorShade[] = {0,0,0,0.65};
	class H1
	{
		font = "RobotoCondensed";
		fontBold = "RobotoCondensedBold";
		sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1.2)";
		align = "left";
	};
	class H2
	{
		font = "RobotoCondensed";
		fontBold = "RobotoCondensedBold";
		sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
		align = "right";
	};
	class H3
	{
		font = "RobotoCondensed";
		fontBold = "RobotoCondensedBold";
		sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
		align = "left";
	};
	class H4
	{
		font = "RobotoCondensed";
		fontBold = "RobotoCondensedBold";
		sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
		align = "left";
	};
	class H5
	{
		font = "RobotoCondensed";
		fontBold = "RobotoCondensedBold";
		sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
		align = "left";
	};
	class H6
	{
		font = "RobotoCondensed";
		fontBold = "RobotoCondensedBold";
		sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
		align = "left";
	};
	class P
	{
		font = "RobotoCondensed";
		fontBold = "RobotoCondensedBold";
		sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
		align = "left";
	};
	x = 0;
	y = 0;
	w = 0.1;
	h = 0.1;
	sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	prevPage = "\A3\ui_f\data\gui\rsccommon\rschtml\arrow_left_ca.paa";
	nextPage = "\A3\ui_f\data\gui\rsccommon\rschtml\arrow_right_ca.paa";
	shadow = 2;
};
class RscButton
{
	deletable = 0;
	fade = 0;
	access = 0;
	type = 1;
	text = "";
	colorText[] = {1,1,1,1};
	colorDisabled[] = {1,1,1,0.25};
	colorBackground[] = {0,0,0,0.5};
	colorBackgroundDisabled[] = {0,0,0,0.5};
	colorBackgroundActive[] = {0,0,0,1};
	colorFocused[] = {0,0,0,1};
	colorShadow[] = {0,0,0,0};
	colorBorder[] = {0,0,0,1};
	soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1};
	soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1};
	soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1};
	soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1};
	idc = -1;
	style = 2;
	x = 0;
	y = 0;
	w = 0.095589;
	h = 0.039216;
	shadow = 2;
	font = "RobotoCondensed";
	sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	url = "";
	offsetX = 0;
	offsetY = 0;
	offsetPressedX = 0;
	offsetPressedY = 0;
	borderSize = 0;
};
class RscShortcutButton
{
	deletable = 0;
	fade = 0;
	type = 16;
	x = 0.1;
	y = 0.1;
	class HitZone
	{
		left = 0;
		top = 0;
		right = 0;
		bottom = 0;
	};
	class ShortcutPos
	{
		left = 0;
		top = "(			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) - 		(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)) / 2";
		w = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1) * (3/4)";
		h = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	};
	class TextPos
	{
		left = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1) * (3/4)";
		top = "(			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) - 		(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)) / 2";
		right = 0.005;
		bottom = 0;
	};
	shortcuts[] = {};
	textureNoShortcut = "#(argb,8,8,3)color(0,0,0,0)";
	color[] = {1,1,1,1};
	colorFocused[] = {1,1,1,1};
	color2[] = {0.95,0.95,0.95,1};
	colorDisabled[] = {1,1,1,0.25};
	colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.13])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.54])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.21])",1};
	colorBackgroundFocused[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.13])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.54])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.21])",1};
	colorBackground2[] = {1,1,1,1};
	soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1};
	soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1};
	soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1};
	soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1};
	class Attributes
	{
		font = "RobotoCondensed";
		color = "#E5E5E5";
		align = "left";
		shadow = "true";
	};
	colorSecondary[] = {1,1,1,1};
	colorFocusedSecondary[] = {1,1,1,1};
	color2Secondary[] = {0.95,0.95,0.95,1};
	colorDisabledSecondary[] = {1,1,1,0.25};
	class AttributesImage
	{
		font = "RobotoCondensed";
		color = "#E5E5E5";
		align = "left";
	};
	idc = -1;
	style = 0;
	default = 0;
	shadow = 1;
	w = 0.183825;
	h = "(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
	textSecondary = "";
	sizeExSecondary = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	fontSecondary = "RobotoCondensed";
	animTextureDefault = "\A3\ui_f\data\GUI\RscCommon\RscShortcutButton\normal_ca.paa";
	animTextureNormal = "\A3\ui_f\data\GUI\RscCommon\RscShortcutButton\normal_ca.paa";
	animTextureDisabled = "\A3\ui_f\data\GUI\RscCommon\RscShortcutButton\normal_ca.paa";
	animTextureOver = "\A3\ui_f\data\GUI\RscCommon\RscShortcutButton\over_ca.paa";
	animTextureFocused = "\A3\ui_f\data\GUI\RscCommon\RscShortcutButton\focus_ca.paa";
	animTexturePressed = "\A3\ui_f\data\GUI\RscCommon\RscShortcutButton\down_ca.paa";
	periodFocus = 1.2;
	periodOver = 0.8;
	period = 0.4;
	font = "RobotoCondensed";
	size = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	text = "";
	url = "";
	action = "";
};
class RscButtonSmall: RscButton
{
	w = 0.12;
};
class RscEdit
{
	deletable = 0;
	fade = 0;
	access = 0;
	type = 2;
	x = 0;
	y = 0;
	h = 0.04;
	w = 0.2;
	colorBackground[] = {0,0,0,0};
	colorText[] = {0.95,0.95,0.95,1};
	colorDisabled[] = {1,1,1,0.25};
	colorSelection[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.13])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.54])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.21])",1};
	autocomplete = "";
	text = "";
	size = 0.2;
	tooltipColorText[] = {1,1,1,1};
	tooltipColorBox[] = {1,1,1,1};
	tooltipColorShade[] = {0,0,0,0.65};
	style = "0x00 + 0x40";
	font = "RobotoCondensed";
	shadow = 2;
	sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	canModify = 1;
};
class RscCombo
{
	deletable = 0;
	fade = 0;
	access = 0;
	type = 4;
	colorSelect[] = {0,0,0,1};
	colorText[] = {1,1,1,1};
	colorBackground[] = {0,0,0,1};
	colorScrollbar[] = {1,0,0,1};
	colorDisabled[] = {1,1,1,0.25};
	colorPicture[] = {1,1,1,1};
	colorPictureSelected[] = {1,1,1,1};
	colorPictureDisabled[] = {1,1,1,0.25};
	colorPictureRight[] = {1,1,1,1};
	colorPictureRightSelected[] = {1,1,1,1};
	colorPictureRightDisabled[] = {1,1,1,0.25};
	colorTextRight[] = {1,1,1,1};
	colorSelectRight[] = {0,0,0,1};
	colorSelect2Right[] = {0,0,0,1};
	tooltipColorText[] = {1,1,1,1};
	tooltipColorBox[] = {1,1,1,1};
	tooltipColorShade[] = {0,0,0,0.65};
	soundSelect[] = {"\A3\ui_f\data\sound\RscCombo\soundSelect",0.1,1};
	soundExpand[] = {"\A3\ui_f\data\sound\RscCombo\soundExpand",0.1,1};
	soundCollapse[] = {"\A3\ui_f\data\sound\RscCombo\soundCollapse",0.1,1};
	maxHistoryDelay = 1;
	class ComboScrollBar: ScrollBar
	{
		color[] = {1,1,1,1};
	};
	colorSelectBackground[] = {1,1,1,0.7};
	colorActive[] = {1,0,0,1};
	style = "0x10 + 0x200";
	font = "RobotoCondensed";
	sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	shadow = 0;
	x = 0;
	y = 0;
	w = 0.12;
	h = 0.035;
	arrowEmpty = "\A3\ui_f\data\GUI\RscCommon\rsccombo\arrow_combo_ca.paa";
	arrowFull = "\A3\ui_f\data\GUI\RscCommon\rsccombo\arrow_combo_active_ca.paa";
	wholeHeight = 0.45;
};
class RscListBox
{
	deletable = 0;
	fade = 0;
	access = 0;
	type = 5;
	rowHeight = 0;
	colorText[] = {1,1,1,1};
	colorDisabled[] = {1,1,1,0.25};
	colorScrollbar[] = {1,0,0,0};
	colorSelect[] = {0,0,0,1};
	colorSelect2[] = {0,0,0,1};
	colorSelectBackground[] = {0.95,0.95,0.95,1};
	colorSelectBackground2[] = {1,1,1,0.5};
	colorBackground[] = {0,0,0,0.3};
	soundSelect[] = {"\A3\ui_f\data\sound\RscListbox\soundSelect",0.09,1};
	autoScrollSpeed = -1;
	autoScrollDelay = 5;
	autoScrollRewind = 0;
	arrowEmpty = "#(argb,8,8,3)color(1,1,1,1)";
	arrowFull = "#(argb,8,8,3)color(1,1,1,1)";
	colorPicture[] = {1,1,1,1};
	colorPictureSelected[] = {1,1,1,1};
	colorPictureDisabled[] = {1,1,1,0.25};
	colorPictureRight[] = {1,1,1,1};
	colorPictureRightSelected[] = {1,1,1,1};
	colorPictureRightDisabled[] = {1,1,1,0.25};
	colorTextRight[] = {1,1,1,1};
	colorSelectRight[] = {0,0,0,1};
	colorSelect2Right[] = {0,0,0,1};
	tooltipColorText[] = {1,1,1,1};
	tooltipColorBox[] = {1,1,1,1};
	tooltipColorShade[] = {0,0,0,0.65};
	class ListScrollBar: ScrollBar
	{
		color[] = {1,1,1,1};
		autoScrollEnabled = 1;
	};
	colorShadow[] = {0,0,0,0.5};
	x = 0;
	y = 0;
	w = 0.3;
	h = 0.3;
	style = 16;
	font = "RobotoCondensed";
	sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	shadow = 0;
	period = 1.2;
	maxHistoryDelay = 1;
};
class RscListNBox
{
	deletable = 0;
	fade = 0;
	access = 0;
	type = 102;
	rowHeight = 0;
	colorText[] = {1,1,1,1};
	colorScrollbar[] = {0.95,0.95,0.95,1};
	colorSelect[] = {0,0,0,1};
	colorSelect2[] = {0,0,0,1};
	colorSelectBackground[] = {0.95,0.95,0.95,1};
	colorSelectBackground2[] = {1,1,1,0.5};
	colorBackground[] = {0,0,0,1};
	maxHistoryDelay = 1;
	soundSelect[] = {"",0.1,1};
	autoScrollSpeed = -1;
	autoScrollDelay = 5;
	autoScrollRewind = 0;
	arrowEmpty = "#(argb,8,8,3)color(1,1,1,1)";
	arrowFull = "#(argb,8,8,3)color(1,1,1,1)";
	drawSideArrows = 0;
	columns[] = {0.3,0.6,0.7};
	idcLeft = -1;
	idcRight = -1;
	class ListScrollBar: ScrollBar
	{
	};
	color[] = {0.95,0.95,0.95,1};
	colorDisabled[] = {1,1,1,0.25};
	colorPicture[] = {1,1,1,1};
	colorPictureSelected[] = {1,1,1,1};
	colorPictureDisabled[] = {1,1,1,1};
	class ScrollBar: ScrollBar
	{
	};
	style = 16;
	shadow = 0;
	font = "RobotoCondensed";
	sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	period = 1.2;
	x = 0;
	y = 0;
	w = 0.3;
	h = 0.3;
};
class RscXListBox
{
	deletable = 0;
	fade = 0;
	idc = -1;
	type = 42;
	x = 0.1;
	y = 0.1;
	color[] = {1,1,1,0.6};
	colorActive[] = {1,1,1,1};
	colorDisabled[] = {1,1,1,0.25};
	colorSelect[] = {0.95,0.95,0.95,1};
	colorText[] = {1,1,1,1};
	soundSelect[] = {"\A3\ui_f\data\sound\RscListbox\soundSelect",0.09,1};
	colorPicture[] = {1,1,1,1};
	colorPictureSelected[] = {1,1,1,1};
	colorPictureDisabled[] = {1,1,1,0.25};
	colorPictureRight[] = {1,1,1,1};
	colorPictureRightSelected[] = {1,1,1,1};
	colorPictureRightDisabled[] = {1,1,1,0.25};
	tooltipColorText[] = {1,1,1,1};
	tooltipColorBox[] = {1,1,1,1};
	tooltipColorShade[] = {0,0,0,0.65};
	style = "0x400 + 0x02 +	0x10";
	shadow = 2;
	arrowEmpty = "\A3\ui_f\data\gui\cfg\slider\arrowEmpty_ca.paa";
	arrowFull = "\A3\ui_f\data\gui\cfg\slider\arrowFull_ca.paa";
	border = "\A3\ui_f\data\gui\cfg\slider\border_ca.paa";
	w = 0.14706;
	h = 0.039216;
	font = "RobotoCondensed";
	sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
};
class RscTree
{
	deletable = 0;
	fade = 0;
	access = 0;
	type = 12;
	colorBackground[] = {0,0,0,0};
	colorSelect[] = {1,1,1,0.7};
	colorDisabled[] = {1,1,1,0.25};
	colorText[] = {1,1,1,1};
	colorSelectText[] = {0,0,0,1};
	colorBorder[] = {0,0,0,0};
	colorSearch[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.13])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.54])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.21])","(profilenamespace getvariable ['GUI_BCG_RGB_A',0.8])"};
	colorMarked[] = {0.2,0.3,0.7,1};
	colorMarkedText[] = {0,0,0,1};
	colorMarkedSelected[] = {0,0.5,0.5,1};
	multiselectEnabled = 0;
	colorPicture[] = {1,1,1,1};
	colorPictureSelected[] = {0,0,0,1};
	colorPictureDisabled[] = {1,1,1,0.25};
	colorPictureRight[] = {1,1,1,1};
	colorPictureRightSelected[] = {0,0,0,1};
	colorPictureRightDisabled[] = {1,1,1,0.25};
	colorArrow[] = {1,1,1,1};
	maxHistoryDelay = 1;
	shadow = 0;
	colorSelectBackground[] = {0,0,0,0.5};
	colorLines[] = {0,0,0,0};
	class ScrollBar: ScrollBar
	{
	};
	style = 0;
	font = "RobotoCondensed";
	sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	expandedTexture = "A3\ui_f\data\gui\rsccommon\rsctree\expandedTexture_ca.paa";
	hiddenTexture = "A3\ui_f\data\gui\rsccommon\rsctree\hiddenTexture_ca.paa";
	x = 0;
	y = 0;
	w = 0.1;
	h = 0.2;
	rowHeight = 0.0439091;
	borderSize = 0;
	expandOnDoubleclick = 1;
};
class RscSlider
{
	deletable = 0;
	fade = 0;
	access = 0;
	type = 3;
	style = 1024;
	color[] = {1,1,1,0.8};
	colorActive[] = {1,1,1,1};
	shadow = 0;
	x = 0;
	y = 0;
	w = 0.3;
	h = 0.025;
};
class RscSliderH: RscSlider
{
};
class RscXSliderH
{
	deletable = 0;
	fade = 0;
	type = 43;
	color[] = {1,1,1,0.6};
	colorActive[] = {1,1,1,1};
	colorDisable[] = {1,1,1,0.4};
	colorDisabled[] = {1,1,1,0.2};
	tooltipColorText[] = {1,1,1,1};
	tooltipColorBox[] = {1,1,1,1};
	tooltipColorShade[] = {0,0,0,0.65};
	style = "0x400	+ 0x10";
	shadow = 0;
	x = 0;
	y = 0;
	h = 0.029412;
	w = 0.4;
	arrowEmpty = "\A3\ui_f\data\gui\cfg\slider\arrowEmpty_ca.paa";
	arrowFull = "\A3\ui_f\data\gui\cfg\slider\arrowFull_ca.paa";
	border = "\A3\ui_f\data\gui\cfg\slider\border_ca.paa";
	thumb = "\A3\ui_f\data\gui\cfg\slider\thumb_ca.paa";
};
class RscActiveText
{
	deletable = 0;
	fade = 0;
	access = 0;
	type = 11;
	style = 2;
	color[] = {0,0,0,1};
	colorActive[] = {0.3,0.4,0,1};
	colorDisabled[] = {1,1,1,0.25};
	soundEnter[] = {"",0.1,1};
	soundPush[] = {"",0.1,1};
	soundClick[] = {"",0.1,1};
	soundEscape[] = {"",0.1,1};
	text = "";
	default = 0;
	tooltipColorText[] = {1,1,1,1};
	tooltipColorBox[] = {1,1,1,1};
	tooltipColorShade[] = {0,0,0,0.65};
	idc = -1;
	x = 0;
	y = 0;
	h = 0.035;
	w = 0.035;
	font = "RobotoCondensed";
	shadow = 2;
	sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	url = "";
};
class RscStructuredText
{
	deletable = 0;
	fade = 0;
	access = 0;
	type = 13;
	idc = -1;
	style = 0;
	colorText[] = {1,1,1,1};
	class Attributes
	{
		font = "RobotoCondensed";
		color = "#ffffff";
		colorLink = "#D09B43";
		align = "left";
		shadow = 1;
	};
	x = 0;
	y = 0;
	h = 0.035;
	w = 0.1;
	text = "";
	size = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	shadow = 1;
};
class RscControlsGroup
{
	deletable = 0;
	fade = 0;
	class VScrollbar: ScrollBar
	{
		color[] = {1,1,1,1};
		width = 0.021;
		autoScrollEnabled = 1;
	};
	class HScrollbar: ScrollBar
	{
		color[] = {1,1,1,1};
		height = 0.028;
	};
	class Controls
	{
	};
	type = 15;
	idc = -1;
	x = 0;
	y = 0;
	w = 1;
	h = 1;
	shadow = 0;
	style = 16;
};
class RscBackgroundStripeTop: RscText
{
	colorBackground[] = {0.1,0.1,0.1,1};
	access = 0;
	x = "safezoneX";
	y = "safezoneY";
	w = "safezoneW";
	h = "0.125*safezoneH";
	text = "";
};
class RscBackgroundStripeBottom: RscText
{
	access = 0;
	colorBackground[] = {0.1,0.1,0.1,1};
	x = "safezoneX";
	y = "safezoneY + safezoneH - 0.125*safezoneH";
	w = "safezoneW";
	h = "0.125*safezoneH";
	text = "";
};
class RscDisplayBackgroundStripes
{
	access = 0;
	class Background1: RscBackgroundStripeTop
	{
	};
	class Background2: RscBackgroundStripeBottom
	{
	};
};
class RscCinemaBorder: RscDisplayBackgroundStripes
{
	idd = -1;
	movingEnable = 0;
	enableSimulation = 1;
	class controlsBackground
	{
		class Background1: RscBackgroundStripeTop
		{
			colorBackground[] = {0,0,0,1};
		};
		class Background2: RscBackgroundStripeBottom
		{
			colorBackground[] = {0,0,0,1};
		};
	};
};
class RscToolbox
{
	deletable = 0;
	fade = 0;
	access = 0;
	type = 6;
	style = 2;
	colorText[] = {0.95,0.95,0.95,1};
	color[] = {0.95,0.95,0.95,1};
	colorTextSelect[] = {0.95,0.95,0.95,1};
	colorSelect[] = {0.95,0.95,0.95,1};
	colorTextDisable[] = {0.4,0.4,0.4,1};
	colorDisable[] = {0.4,0.4,0.4,1};
	colorSelectedBg[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.13])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.54])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.21])",0.5};
	shadow = 0;
	strings[] = {"",""};
	x = 0;
	y = 0;
	w = 0.3;
	h = 0.025;
	rows = 1;
	columns = 2;
	font = "RobotoCondensed";
	sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
};
class RscHitZones
{
	type = 17;
	style = 0;
	shadow = 0;
	x = 0;
	y = 0;
	w = 0.1;
	h = 0.1;
	xCount = 1;
	yCount = 1;
	xSpace = 0;
	ySpace = 0;
};
class RscXKeyShadow
{
	type = 40;
	idc = -1;
	style = 0;
	h = 0.06;
	size = "( 21 / 408 )";
	shadow = 0;
	class Attributes
	{
		font = "FontX";
		color = "#C0C1BF";
		align = "left";
	};
	class AttributesImage
	{
		color = "#ffffff";
	};
};
class RscXKey: RscXKeyShadow
{
	class Attributes
	{
		shadow = 0;
	};
};
class RscObject
{
	access = 0;
	type = 80;
	scale = 1;
	direction[] = {0,0,1};
	up[] = {0,1,0};
	shadow = 0;
};
class RscStandardDisplay
{
	access = 0;
	movingEnable = 1;
	enableSimulation = 1;
	enableDisplay = 1;
};
class RscLineBreak
{
	idc = -1;
	type = 98;
	shadow = 0;
};
class RscButtonImages
{
	class XBoxA
	{
		id = "0x00050000 + 0";
		image = "\A3\ui_f\data\gui\cfg\ButtonImages\a_ca.paa";
		size = 1.3333;
	};
	class XBoxB
	{
		id = "0x00050000 + 1";
		image = "\A3\ui_f\data\gui\cfg\ButtonImages\b_ca.paa";
		size = 1.3333;
	};
	class XBoxX
	{
		id = "0x00050000 + 2";
		image = "\A3\ui_f\data\gui\cfg\ButtonImages\x_ca.paa";
		size = 1.3333;
	};
	class XBoxY
	{
		id = "0x00050000 + 3";
		image = "\A3\ui_f\data\gui\cfg\ButtonImages\y_ca.paa";
		size = 1.3333;
	};
	class XBoxUp
	{
		id = "0x00050000 + 4";
		image = "#(argb,8,8,3)color(0,1,0,1)";
		size = 1.3333;
	};
	class XBoxDown
	{
		id = "0x00050000 + 5";
		image = "#(argb,8,8,3)color(0,1,0,1)";
		size = 1.3333;
	};
	class XBoxLeft
	{
		id = "0x00050000 + 6";
		image = "#(argb,8,8,3)color(0,1,0,1)";
		size = 1.3333;
	};
	class XBoxRight
	{
		id = "0x00050000 + 7";
		image = "#(argb,8,8,3)color(0,1,0,1)";
		size = 1.3333;
	};
	class XBoxStart
	{
		id = "0x00050000 + 8";
		image = "\A3\ui_f\data\gui\cfg\ButtonImages\start_ca.paa";
		size = 1.3333;
	};
	class XBoxBack
	{
		id = "0x00050000 + 9";
		image = "#(argb,8,8,3)color(0.3,0.3,0.3,1)";
		size = 1.3333;
	};
	class XBoxBlack
	{
		id = "0x00050000 + 10";
		image = "#(argb,8,8,3)color(0,0,0,1)";
		size = 1.3333;
	};
	class XBoxWhite
	{
		id = "0x00050000 + 11";
		image = "#(argb,8,8,3)color(1,1,1,1)";
		size = 1.3333;
	};
	class XBoxLeftBumper
	{
		id = "0x00050000 + 10";
		image = "#(argb,8,8,3)color(0,0,1,1)";
		size = 1.3333;
	};
	class XBoxRightBumper
	{
		id = "0x00050000 + 11";
		image = "#(argb,8,8,3)color(1,0,0,1)";
		size = 1.3333;
	};
	class XBoxLeftTrigger
	{
		id = "0x00050000 + 12";
		image = "#(argb,8,8,3)color(0,1,0,1)";
		size = 1.3333;
	};
	class XBoxRightTrigger
	{
		id = "0x00050000 + 13";
		image = "#(argb,8,8,3)color(0,1,0,1)";
		size = 1.3333;
	};
	class XBoxLeftThumb
	{
		id = "0x00050000 + 14";
		image = "\A3\ui_f\data\gui\cfg\ButtonImages\rightthumb_ca.paa";
		size = 1.3333;
	};
	class XBoxRightThumb
	{
		id = "0x00050000 + 15";
		image = "";
		size = 1.3333;
	};
	class XBoxLeftThumbXRight
	{
		id = "0x00050000 + 16";
		image = "#(argb,8,8,3)color(0,1,0,1)";
		size = 1.3333;
	};
	class XBoxLeftThumbYUp
	{
		id = "0x00050000 + 17";
		image = "#(argb,8,8,3)color(0,1,0,1)";
		size = 1.3333;
	};
	class XBoxRightThumbXRight
	{
		id = "0x00050000 + 16";
		image = "#(argb,8,8,3)color(0,1,0,1)";
		size = 1.3333;
	};
	class XBoxRightThumbYUp
	{
		id = "0x00050000 + 19";
		image = "#(argb,8,8,3)color(0,1,0,1)";
		size = 1.3333;
	};
	class XBoxLeftThumbXLeft
	{
		id = "0x00050000 + 20";
		image = "#(argb,8,8,3)color(0,1,0,1)";
		size = 1.3333;
	};
	class XBoxLeftThumbYDown
	{
		id = "0x00050000 + 21";
		image = "#(argb,8,8,3)color(0,1,0,1)";
		size = 1.3333;
	};
	class XBoxRightThumbXLeft
	{
		id = "0x00050000 + 22";
		image = "#(argb,8,8,3)color(0,1,0,1)";
		size = 1.3333;
	};
	class XBoxRightThumbYDown
	{
		id = "0x00050000 + 23";
		image = "#(argb,8,8,3)color(0,1,0,1)";
		size = 1.3333;
	};
};
class RscObjectives
{
	access = 0;
	done = "\a3\ui_f\data\map\diary\icons\tasksucceeded_ca.paa";
	failed = "\a3\ui_f\data\map\diary\icons\taskfailed_ca.paa";
	active = "\a3\ui_f\data\map\diary\icons\taskcreated_ca.paa";
	cancled = "\a3\ui_f\data\map\diary\icons\taskcanceled_ca.paa";
};
class RscCheckBox
{
	color[] = {1,1,1,0.7};
	colorFocused[] = {1,1,1,1};
	colorHover[] = {1,1,1,1};
	colorPressed[] = {1,1,1,1};
	colorDisabled[] = {1,1,1,0.2};
	colorBackground[] = {0,0,0,0};
	colorBackgroundFocused[] = {0,0,0,0};
	colorBackgroundHover[] = {0,0,0,0};
	colorBackgroundPressed[] = {0,0,0,0};
	colorBackgroundDisabled[] = {0,0,0,0};
	tooltipColorText[] = {1,1,1,1};
	tooltipColorBox[] = {1,1,1,1};
	tooltipColorShade[] = {0,0,0,0.65};
	soundEnter[] = {"",0.1,1};
	soundPush[] = {"",0.1,1};
	soundClick[] = {"",0.1,1};
	soundEscape[] = {"",0.1,1};
	idc = -1;
	type = 77;
	deletable = 0;
	style = 0;
	checked = 0;
	x = "0.375 * safezoneW + safezoneX";
	y = "0.36 * safezoneH + safezoneY";
	w = "0.025 * safezoneW";
	h = "0.04 * safezoneH";
	textureChecked = "A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_checked_ca.paa";
	textureUnchecked = "A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_unchecked_ca.paa";
	textureFocusedChecked = "A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_checked_ca.paa";
	textureFocusedUnchecked = "A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_unchecked_ca.paa";
	textureHoverChecked = "A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_checked_ca.paa";
	textureHoverUnchecked = "A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_unchecked_ca.paa";
	texturePressedChecked = "A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_checked_ca.paa";
	texturePressedUnchecked = "A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_unchecked_ca.paa";
	textureDisabledChecked = "A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_checked_ca.paa";
	textureDisabledUnchecked = "A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_unchecked_ca.paa";
};
class DefaultFont
{
	font = "RobotoCondensed";
};
class RscControlsGroupNoScrollbars: RscControlsGroup
{
	class VScrollbar: VScrollbar
	{
		width = 0;
	};
	class HScrollbar: HScrollbar
	{
		height = 0;
	};
};
class RscControlsGroupNoHScrollbars: RscControlsGroup
{
	class HScrollbar: HScrollbar
	{
		height = 0;
	};
};
class RscControlsGroupNoVScrollbars: RscControlsGroup
{
	class VScrollbar: VScrollbar
	{
		width = 0;
	};
};
class RscLine: RscText
{
	colorBackground[] = {0,0,0,0};
	colorText[] = {1,1,1,1};
	idc = -1;
	style = 176;
	x = 0.17;
	y = 0.48;
	w = 0.66;
	h = 0;
	text = "";
};
class RscActivePicture: RscActiveText
{
	color[] = {1,1,1,0.5};
	colorActive[] = {1,1,1,1};
	style = 48;
};
class RscButtonTextOnly: RscButton
{
	colorBackground[] = {1,1,1,0};
	colorBackgroundActive[] = {1,1,1,0};
	colorBackgroundDisabled[] = {1,1,1,0};
	colorFocused[] = {1,1,1,0};
	colorShadow[] = {1,1,1,0};
	SizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
	borderSize = 0;
};
class RscShortcutButtonMain: RscShortcutButton
{
	color[] = {1,1,1,1};
	colorDisabled[] = {1,1,1,0.25};
	class HitZone
	{
		left = 0;
		top = 0;
		right = 0;
		bottom = 0;
	};
	class ShortcutPos
	{
		left = 0.0145;
		top = "(			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) - 		(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1.2)) / 2";
		w = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1.2) * (3/4)";
		h = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1.2)";
	};
	class TextPos
	{
		left = "(		((safezoneW / safezoneH) min 1.2) / 32) * 1.5";
		top = "(			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)*2 - 		(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1.2)) / 2";
		right = 0.005;
		bottom = 0;
	};
	class Attributes
	{
		font = "RobotoCondensed";
		color = "#E5E5E5";
		align = "left";
		shadow = "false";
	};
	class AttributesImage
	{
		font = "RobotoCondensed";
		color = "#E5E5E5";
		align = "false";
	};
	idc = -1;
	style = 0;
	default = 0;
	w = 0.313726;
	h = 0.104575;
	animTextureNormal = "\A3\ui_f\data\GUI\RscCommon\RscShortcutButtonMain\normal_ca.paa";
	animTextureDisabled = "\A3\ui_f\data\GUI\RscCommon\RscShortcutButtonMain\disabled_ca.paa";
	animTextureOver = "\A3\ui_f\data\GUI\RscCommon\RscShortcutButtonMain\over_ca.paa";
	animTextureFocused = "\A3\ui_f\data\GUI\RscCommon\RscShortcutButtonMain\focus_ca.paa";
	animTexturePressed = "\A3\ui_f\data\GUI\RscCommon\RscShortcutButtonMain\down_ca.paa";
	animTextureDefault = "\A3\ui_f\data\GUI\RscCommon\RscShortcutButtonMain\normal_ca.paa";
	period = 0.5;
	font = "RobotoCondensed";
	size = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1.2)";
	sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1.2)";
	text = "";
	action = "";
};
class RscButtonEditor: RscShortcutButton
{
	class ShortcutPos
	{
		left = 0;
		top = 0;
		w = 0;
		h = 0;
	};
	class TextPos
	{
		left = 0;
		top = "(			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) - 		(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)) / 2";
		right = 0;
		bottom = 0;
	};
};
class RscIGUIShortcutButton: RscShortcutButton
{
	class HitZone
	{
		left = 0.002;
		top = "0.003 * 	0.7";
		right = 0.002;
		bottom = "0.016 * 	0.7";
	};
	class ShortcutPos
	{
		left = -0.006;
		top = "-0.007 * 	0.7";
		w = 0;
		h = "0.0522876 * 	0.7";
	};
	class TextPos
	{
		left = 0;
		top = "0.000 * 	0.7";
		right = 0;
		bottom = "0.016 * 	0.7";
	};
	class Attributes
	{
		font = "RobotoCondensed";
		color = "#E5E5E5";
		align = "center";
		shadow = "true";
	};
	w = 0.183825;
	h = "0.0522876 * 	0.7";
	style = 2;
};
class RscGearShortcutButton: RscShortcutButton
{
	color[] = {1,1,1,1};
	color2[] = {1,1,1,0.85};
	colorBackground[] = {1,1,1,1};
	colorbackground2[] = {1,1,1,0.85};
	colorDisabled[] = {1,1,1,0.4};
	class HitZone
	{
		left = 0;
		top = 0;
		right = 0;
		bottom = 0;
	};
	class ShortcutPos
	{
		left = -0.006;
		top = -0.007;
		w = 0.0392157;
		h = 0.0522876;
	};
	class TextPos
	{
		left = 0.003;
		top = 0.001;
		right = 0;
		bottom = 0;
	};
	class Attributes
	{
		font = "RobotoCondensed";
		color = "#E5E5E5";
		align = "center";
		shadow = "false";
	};
	w = 0.0392157;
	h = 0.0522876;
	style = 2;
	sizeEx = 0.1;
	animTextureNormal = "\A3\ui_f\data\GUI\RscCommon\RscGearShortcutButton\normal_ca.paa";
	animTextureDisabled = "\A3\ui_f\data\GUI\RscCommon\RscGearShortcutButton\disabled_ca.paa";
	animTextureOver = "\A3\ui_f\data\GUI\RscCommon\RscGearShortcutButton\over_ca.paa";
	animTextureFocused = "\A3\ui_f\data\GUI\RscCommon\RscGearShortcutButton\focus_ca.paa";
	animTexturePressed = "\A3\ui_f\data\GUI\RscCommon\RscGearShortcutButton\down_ca.paa";
	animTextureDefault = "\A3\ui_f\data\GUI\RscCommon\RscGearShortcutButton\normal_ca.paa";
};
class RscButtonMenu: RscShortcutButton
{
	colorBackground[] = {0,0,0,0.8};
	colorBackgroundFocused[] = {1,1,1,1};
	colorBackground2[] = {0.75,0.75,0.75,1};
	color[] = {1,1,1,1};
	colorFocused[] = {0,0,0,1};
	color2[] = {0,0,0,1};
	colorText[] = {1,1,1,1};
	colorDisabled[] = {1,1,1,0.25};
	colorSecondary[] = {1,1,1,1};
	colorFocusedSecondary[] = {0,0,0,1};
	color2Secondary[] = {0,0,0,1};
	colorDisabledSecondary[] = {1,1,1,0.25};
	tooltipColorText[] = {1,1,1,1};
	tooltipColorBox[] = {1,1,1,1};
	tooltipColorShade[] = {0,0,0,0.65};
	class TextPos
	{
		left = "0.25 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
		top = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) - 		(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)) / 2";
		right = 0.005;
		bottom = 0;
	};
	class Attributes
	{
		font = "PuristaLight";
		color = "#E5E5E5";
		align = "left";
		shadow = "false";
	};
	class ShortcutPos
	{
		left = "5.25 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
		top = 0;
		w = "1 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
		h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
	};
	soundEnter[] = {"\A3\ui_f\data\sound\RscButtonMenu\soundEnter",0.09,1};
	soundPush[] = {"\A3\ui_f\data\sound\RscButtonMenu\soundPush",0.09,1};
	soundClick[] = {"\A3\ui_f\data\sound\RscButtonMenu\soundClick",0.09,1};
	soundEscape[] = {"\A3\ui_f\data\sound\RscButtonMenu\soundEscape",0.09,1};
	idc = -1;
	type = 16;
	style = "0x02 + 0xC0";
	default = 0;
	shadow = 0;
	x = 0;
	y = 0;
	w = 0.095589;
	h = 0.039216;
	animTextureNormal = "#(argb,8,8,3)color(1,1,1,1)";
	animTextureDisabled = "#(argb,8,8,3)color(1,1,1,1)";
	animTextureOver = "#(argb,8,8,3)color(1,1,1,1)";
	animTextureFocused = "#(argb,8,8,3)color(1,1,1,1)";
	animTexturePressed = "#(argb,8,8,3)color(1,1,1,1)";
	animTextureDefault = "#(argb,8,8,3)color(1,1,1,1)";
	textSecondary = "";
	sizeExSecondary = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	fontSecondary = "PuristaLight";
	period = 1.2;
	periodFocus = 1.2;
	periodOver = 1.2;
	size = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
};
class RscButtonMenuOK: RscButtonMenu
{
	shortcuts[] = {"0x00050000 + 0",28,57,156};
	soundPush[] = {"\A3\ui_f\data\sound\RscButtonMenuOK\soundPush",0.09,1};
	idc = 1;
	default = 1;
	text = "OK";
};
class RscButtonMenuCancel: RscButtonMenu
{
	shortcuts[] = {"0x00050000 + 1"};
	idc = 2;
	text = "Cancel";
};
class RscButtonMenuSteam: RscButtonMenu
{
	colorBackground[] = {0.0313726,0.721569,0.917647,1};
	class TextPos
	{
		left = 0.0325;
		top = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) - 		(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)) / 2";
		right = 0.005;
		bottom = 0;
	};
	class ShortcutPos
	{
		left = 0.005;
		top = 0.005;
		w = 0.0225;
		h = 0.03;
	};
	textureNoShortcut = "\A3\Ui_f\data\GUI\RscCommon\RscButtonMenuSteam\steam_ca.paa";
};
class RscLoadingText: RscText
{
	colorText[] = {1,1,1,1};
	style = 2;
	x = 0.29412;
	y = 0.666672;
	w = 0.411768;
	h = 0.039216;
	sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
};
class RscIGUIListBox: RscListBox
{
	color[] = {1,1,1,1};
	colorText[] = {1,1,1,1};
	colorScrollbar[] = {0.95,0.95,0.95,1};
	colorSelect[] = {0.95,0.95,0.95,1};
	colorSelect2[] = {0.95,0.95,0.95,1};
	colorSelectBackground[] = {0,0,0,0.4};
	colorSelectBackground2[] = {0,0,0,1};
	colorBackground[] = {0,0,0,0};
	class ScrollBar: ScrollBar
	{
	};
	period = 0;
	sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
};
class RscIGUIListNBox: RscListNBox
{
	color[] = {1,1,1,1};
	colorText[] = {1,1,1,0.75};
	colorScrollbar[] = {0.95,0.95,0.95,1};
	colorSelect[] = {0.95,0.95,0.95,1};
	colorSelect2[] = {0.95,0.95,0.95,1};
	colorSelectBackground[] = {1,1,1,1};
	colorSelectBackground2[] = {1,1,1,1};
	colorBackground[] = {0,0,0,1};
	columns[] = {0.1,0.7,0.1,0.1};
	class ScrollBar: ScrollBar
	{
	};
	style = "0 + 0x10";
	shadow = 2;
	period = 0;
};
class RscFrame
{
	colorBackground[] = {0,0,0,0};
	colorText[] = {1,1,1,1};
	type = 0;
	idc = -1;
	deletable = 0;
	style = 64;
	shadow = 2;
	font = "RobotoCondensed";
	sizeEx = 0.02;
	text = "";
	x = 0;
	y = 0;
	w = 0.3;
	h = 0.3;
};
class RscBackground: RscText
{
	ColorBackground[] = {0.48,0.5,0.35,1};
	ColorText[] = {0.1,0.1,0.1,1};
	type = 0;
	IDC = -1;
	style = 512;
	shadow = 0;
	x = 0;
	y = 0;
	w = 1;
	h = 1;
	text = "";
	font = "RobotoCondensed";
	SizeEx = 1;
};
class RscBackgroundGUI: RscText
{
	colorBackground[] = {0,0,0,0.5};
	colorText[] = {1,1,1,1};
	background = 1;
};
class RscBackgroundGUILeft: RscPicture
{
	colorText[] = {1,1,1,"0.3*0"};
	colorBackground[] = {0,0,0,0};
	text = "A3\ui_f\data\gui\rsccommon\rscbackgroundgui\gradient_left_gs.paa";
	background = 1;
};
class RscBackgroundGUIRight: RscPicture
{
	colorText[] = {0,0,0,"0.4*0"};
	colorBackground[] = {0,0,0,0};
	text = "A3\ui_f\data\gui\rsccommon\rscbackgroundgui\gradient_right_gs.paa";
	background = 1;
};
class RscBackgroundGUIBottom: RscPicture
{
	colorText[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.13])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.54])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.21])",0.8};
	text = "A3\ui_f\data\gui\rsccommon\rscshortcutbutton\background_ca.paa";
	align = "bottom";
	background = 1;
};
class RscBackgroundGUITop: RscText
{
	colorBackground[] = {0,0,0,1};
	align = "top";
	moving = 1;
	background = 1;
};
class RscBackgroundGUIDark: RscText
{
	colorBackground[] = {0,0,0,0.2};
	background = 1;
};
class RscBackgroundLogo: RscPictureKeepAspect
{
	text = "\A3\Ui_f\data\Logos\arma3_splash_ca.paa";
	align = "top";
	background = 1;
	x = "safezoneX + safezoneW - (9 * 			(		((safezoneW / safezoneH) min 1.2) / 32))";
	y = "safezoneY - 2 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
	w = "(8 * 			(		((safezoneW / safezoneH) min 1.2) / 32))";
	h = "(8 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20))";
};

class RscTextMulti: RscText
{
	style = 16;
};
class RscTreeSearch: RscTree
{
	idcSearch = 645;
};
class RscPictureAllowPixelSplit: RscPicture
{
	pixelPrecise = 0;
};
class RscPictureKeepAspectAllowPixelSplit: RscPictureAllowPixelSplit
{
	style = "0x30 + 0x800";
};
class RscVideo: RscPicture
{
	autoplay = 1;
	loops = 1;
};
class RscVideoKeepAspect: RscPictureKeepAspect
{
	autoplay = 1;
	loops = 1;
};
class RscActivePictureKeepAspect: RscActivePicture
{
	style = "0x30 + 0x800";
};
class RscTextCheckBox
{
	colorText[] = {1,0,0,1};
	color[] = {0,0,0,0};
	colorBackground[] = {0,0,0,0};
	colorTextSelect[] = {0,0.8,0,1};
	colorSelectedBg[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.13])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.54])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.21])",1};
	colorSelect[] = {0,0,0,1};
	colorTextDisable[] = {0.4,0.4,0.4,1};
	colorDisable[] = {0.4,0.4,0.4,1};
	tooltipColorText[] = {1,1,1,1};
	tooltipColorBox[] = {1,1,1,1};
	tooltipColorShade[] = {0,0,0,0.65};
	strings[] = {"UNCHECKED"};
	checked_strings[] = {"CHECKED"};
	idc = -1;
	type = 7;
	style = 0;
	x = "0.375 * safezoneW + safezoneX";
	y = "0.36 * safezoneH + safezoneY";
	w = "0.025 * safezoneW";
	h = "0.04 * safezoneH";
	font = "RobotoCondensed";
	sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
	rows = 1;
	columns = 1;
};
class RscEditMulti: RscEdit
{
	style = 16;
};

class RscMessageBox: RscControlsGroupNoScrollbars
{
	class Controls
	{
		class BcgCommonTop: RscBackgroundGUITop
		{
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.13])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.54])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.21])",1};
			idc = 235100;
			x = 0;
			y = 0;
			w = "18.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class BcgCommon: RscBackgroundGUI
		{
			colorBackground[] = {0,0,0,1};
			idc = 235101;
			x = 0;
			y = "1.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w = "18.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1.7 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Text: RscStructuredText
		{
			idc = 235102;
			x = "0.7 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "1.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w = "17 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class BackgroundButtonOK: RscBackgroundGUI
		{
			colorBackground[] = {0,0,0,1};
			idc = 235103;
			x = 0;
			y = "2.9 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w = "6.2 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class BackgroundButtonMiddle: BackgroundButtonOK
		{
			idc = 235104;
			x = "6.3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
		};
		class BackgroundButtonCancel: BackgroundButtonOK
		{
			idc = 235105;
			x = "12.6 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
		};
		class ButtonOK: RscButtonMenuOK
		{
			colorBackground[] = {0,0,0,1};
			default = 1;
			idc = 235106;
			x = 0;
			y = "2.9 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w = "6.2 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class ButtonCancel: RscButtonMenuCancel
		{
			colorBackground[] = {0,0,0,1};
			idc = 235107;
			x = "12.6 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "2.9 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w = "6.2 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
	};
	idc = 2351;
	x = -1;
	y = -1;
	w = 0;
	h = 0;
};
class RscColorPicker: RscControlsGroupNoScrollbars
{
	class controls
	{
	};
	idc = 2351;
	x = -1;
	y = -1;
	w = 0;
	h = 0;
};
class RscInterlacingScreen: RscPicture
{
	text = "a3\ui_f\data\igui\rsctitles\interlacing\interlacing_ca.paa";
	x = "safeZoneX";
	y = "safeZoneY";
	w = "safeZoneW";
	h = "safeZoneH";
};

class RscMsgBox
{
	access = 0;
	class Top
	{
		class BcgCommonTop: RscBackgroundGUITop
		{
			idc = 11001;
			x = "10.6 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "7 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "18.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.13])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.54])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.21])",1};
		};
	};
	class Middle
	{
		class BcgCommon: RscBackgroundGUI
		{
			idc = 11000;
			x = "10.6 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "8.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "18.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1.7 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorBackground[] = {0,0,0,1};
		};
		class CA_Text: RscStructuredText
		{
			idc = 101;
			x = "11.3 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "8.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "17 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
	};
	class Bottom
	{
		class BackgroundButtonLater: RscBackgroundGUI
		{
			idc = 11002;
			x = "10.6 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "9.9 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "6.2 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorBackground[] = {0,0,0,1};
		};
		class BackgroundButtonRestart: BackgroundButtonLater
		{
			idc = 11003;
			x = "16.9 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
		};
		class BackgroundButtonCancel: BackgroundButtonLater
		{
			idc = 11004;
			x = "23.2 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
		};
		class CA_ButtonOK: RscButtonMenuOK
		{
			colorBackground[] = {0,0,0,1};
			x = "10.6 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "9.9 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "6.2 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class CA_ButtonCancel: CA_ButtonOK
		{
			idc = 2;
			default = 0;
			shortcuts[] = {"0x00050000 + 1"};
			text = "Cancel";
			colorBackground[] = {0,0,0,1};
			x = "23.2 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
		};
	};
	movingEnable = 1;
	scriptName = "RscMsgBox";
	scriptPath = "GUI";
	onLoad = "[""onLoad"",_this,""RscMsgBox"",'GUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload = "[""onUnload"",_this,""RscMsgBox"",'GUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	class controlsBackground
	{
	};
};
class RscMsgBoxError
{
	access = 0;
	class Top
	{
		class Title: RscText
		{
			x = 0.15;
			y = 0.4;
			w = 0.7;
			h = 0.1;
			colorBackground[] = {0.2,0.2,0.2,1};
			text = "Arma 3";
			style = 2;
		};
	};
	class Middle
	{
		class Background: RscText
		{
			x = 0.15;
			y = 0.4;
			w = 0.7;
			h = 0.2;
			colorBackground[] = {0.25,0.25,0.25,1};
		};
		class SubBackground: RscText
		{
			x = 0.17;
			y = 0.48;
			w = 0.66;
			h = 0.04;
			colorBackground[] = {0.75,0.75,0.75,1};
		};
		class Text: RscStructuredText
		{
			idc = 101;
			x = 0.19;
			y = 0.5;
			w = 0.62;
			h = 0;
			size = 0.04;
			class Attributes
			{
				font = "TahomaB";
				color = "#000000";
				align = "center";
				shadow = 0;
			};
		};
	};
	class Bottom
	{
		class Button1: RscShortcutButton
		{
			type = 16;
			idc = 1;
			text = "OK";
			style = 0;
			default = 0;
			x = 0.4;
			y = 0.54;
			w = 0.2;
			h = 0.04;
			color[] = {1,1,1,1};
			colorText[] = {1,0.537,0,1};
			colorDisabled[] = {1,1,1,0.25};
			colorBackground[] = {1,0.537,0,0.6};
			colorActiveBackground[] = {1,0.537,0,1};
			period = 0.5;
			font = "TahomaB";
			size = 0.04;
			sizeEx = 0.04;
			soundEnter[] = {"",0.1,1};
			soundPush[] = {"",0.1,1};
			soundClick[] = {"",0.1,1};
			soundEscape[] = {"",0.1,1};
			action = "";
			class Attributes
			{
				font = "TahomaB";
				color = "#E5E5E5";
				align = "center";
			};
			class AttributesImage
			{
				font = "TahomaB";
				color = "#E5E5E5";
				align = "center";
			};
		};
		class Button2: Button1
		{
			idc = 2;
			text = "Cancel";
			default = 1;
			x = 0.63;
		};
	};
};
class RscMsgBox3
{
	access = 0;
	class Top
	{
		class BcgCommonTop: RscBackgroundGUITop
		{
			idc = 11001;
			x = "10.6 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "7 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "18.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.13])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.54])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.21])",1};
		};
	};
	class Middle
	{
		class BcgCommon: RscBackgroundGUI
		{
			idc = 11000;
			x = "10.6 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "8.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "18.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1.7 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorBackground[] = {0,0,0,1};
		};
		class CA_Text: RscStructuredText
		{
			idc = 101;
			x = "11.3 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "8.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "17 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
	};
	class Bottom
	{
		class BackgroundButtonLater: RscBackgroundGUI
		{
			idc = 11002;
			x = "10.6 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "9.9 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "6.2 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorBackground[] = {0,0,0,1};
		};
		class BackgroundButtonRestart: BackgroundButtonLater
		{
			idc = 11003;
			x = "16.9 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
		};
		class BackgroundButtonCancel: BackgroundButtonLater
		{
			idc = 11004;
			x = "23.2 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
		};
		class CA_Later: RscButtonMenuOK
		{
			idc = 6;
			colorBackground[] = {0,0,0,1};
			default = 0;
			x = "10.6 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "9.9 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "6.2 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class CA_ButtonOK: CA_Later
		{
			idc = 1;
			shortcuts[] = {"0x00050000 + 2"};
			default = 1;
			text = "Restart now";
			x = "16.9 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
		};
		class CA_ButtonCancel: CA_Later
		{
			idc = 2;
			shortcuts[] = {"0x00050000 + 1"};
			text = "Cancel";
			x = "23.2 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
		};
	};
	movingEnable = 1;
	scriptName = "RscMsgBox3";
	scriptPath = "GUI";
	onLoad = "[""onLoad"",_this,""RscMsgBox3"",'GUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload = "[""onUnload"",_this,""RscMsgBox3"",'GUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	class controlsBackground
	{
	};
};

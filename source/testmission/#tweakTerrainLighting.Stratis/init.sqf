// Customization
TEST_BackgroundAlpha = 0.5;//0-1 range (0 to 100% transparency)
TEST_UpdateDelay = 1;//in seconds

///////////////////////////////////////////////////////////////////////////////

Test_Dummy = true;

sleep 0.1;

TEST_DevConActive = isClass(configFile/"CfgPatches"/"DevCon");
if (TEST_DevConActive) then
{
//DEV_MiniMapActive = true;
//DEV_MiniMapActive = false;
//DEV_ShowMiniMap = true;
//DEV_InMapView = true;
	//if (isNil "DEV_fnc_toggleMiniMapDisplay") then {};
	[] call DEV_fnc_toggleMiniMapDisplay;
};

Test_hideInterface = false;
Test_defaultLighting = false;

Test_initialDate = date;
Test_currentTimeOfDay = daytime;
Test_currentOvercast = overcast;
Test_currentFog = fog;//fogParams;
Test_newOvercastValue = Test_currentOvercast;
Test_newFogValue = Test_currentFog;

Test_initialDay = 360 * (dateToNumber date);
_date = date;
_date set [3,12];
_date set [4,00];
Test_initialDateMidday = _date;
Test_initialMidday = 360 * (dateToNumber _date);

TEST_UpdateLightingTimestamp = time;
TEST_UpdateLightingThreadRunning = false;
TEST_UpdateOvercastTimestamp = time;
TEST_UpdateOvercastThreadRunning = false;
TEST_UpdateTimeOfDayTimestamp = time;
TEST_UpdateTimeOfDayThreadRunning = false;

//terrain lighitng variable defaults
TEST_NewLighting_Defaults_height = 0;
TEST_NewLighting_Defaults_overcast = 0.25;
TEST_NewLighting_Defaults_sunAngle = 90;
TEST_NewLighting_Defaults_sunOrMoon = 0;
TEST_NewLighting_Defaults_diffuse = [[0,0,0],0.56];
TEST_NewLighting_Defaults_diffuseCloud = [[0,0,0],0.2];
TEST_NewLighting_Defaults_ambient = [[0,0,0],0.84];
TEST_NewLighting_Defaults_ambientCloud = [[0,0,0],0];
TEST_NewLighting_Defaults_ambientMid = [[0,0,0],0.86];
TEST_NewLighting_Defaults_ambientMidCloud = [[0,0,0],0];
TEST_NewLighting_Defaults_groundReflection = [[0,0,0],0.75];
TEST_NewLighting_Defaults_groundReflectionCloud = [[0,0,0],0];
TEST_NewLighting_Defaults_bidirect = [0,0,0];
TEST_NewLighting_Defaults_bidirectCloud = [0,0,0];
TEST_NewLighting_Defaults_sky = [[0,0,0],4.2];
TEST_NewLighting_Defaults_skyAroundSun = [[0,0,0],4.7];
TEST_NewLighting_Defaults_fogColor = [[0,0,0],0];
TEST_NewLighting_Defaults_apertureMin = 4;
TEST_NewLighting_Defaults_apertureStandard = 60;
TEST_NewLighting_Defaults_apertureMax = 120;
TEST_NewLighting_Defaults_standardAvgLum = 4;
TEST_NewLighting_Defaults_desiredLuminanceCoef = 0;
TEST_NewLighting_Defaults_desiredLuminanceCoefCloud = 0;
TEST_NewLighting_Defaults_luminanceRectCoef = 1;
TEST_NewLighting_Defaults_luminanceRectCoefCloud = 0.5;
TEST_NewLighting_Defaults_rayleigh = [0,0,0];
TEST_NewLighting_Defaults_mie = [0,0,0];
TEST_NewLighting_Defaults_cloudsColor = [[0,0,0],11];
TEST_NewLighting_Defaults_swBrightness = 1;

//terrain lighting variables
TEST_NewLighting_height = 0;
TEST_NewLighting_overcast = 0.25;
TEST_NewLighting_sunAngle = 90;
TEST_NewLighting_sunOrMoon = 0;
TEST_NewLighting_diffuse = [[0,0,0],0.56];
TEST_NewLighting_diffuseCloud = [[0,0,0],0.2];
TEST_NewLighting_ambient = [[0,0,0],0.84];
TEST_NewLighting_ambientCloud = [[0,0,0],0];
TEST_NewLighting_ambientMid = [[0,0,0],0.86];
TEST_NewLighting_ambientMidCloud = [[0,0,0],0];
TEST_NewLighting_groundReflection = [[0,0,0],0.75];
TEST_NewLighting_groundReflectionCloud = [[0,0,0],0];
TEST_NewLighting_bidirect = [0,0,0];
TEST_NewLighting_bidirectCloud = [0,0,0];
TEST_NewLighting_sky = [[0,0,0],4.2];
TEST_NewLighting_skyAroundSun = [[0,0,0],4.7];
TEST_NewLighting_fogColor = [[0,0,0],0];
TEST_NewLighting_apertureMin = 4;
TEST_NewLighting_apertureStandard = 60;
TEST_NewLighting_apertureMax = 120;
TEST_NewLighting_standardAvgLum = 4;
TEST_NewLighting_desiredLuminanceCoef = 0;
TEST_NewLighting_desiredLuminanceCoefCloud = 0;
TEST_NewLighting_luminanceRectCoef = 1;
TEST_NewLighting_luminanceRectCoefCloud = 0.5;
TEST_NewLighting_rayleigh = [0,0,0];
TEST_NewLighting_mie = [0,0,0];
TEST_NewLighting_cloudsColor = [[0,0,0],11];
TEST_NewLighting_swBrightness = 1;

TEST_NewLighting_AllParameters =
[
	"diffuse",
	"diffuseCloud",
	"ambient",
	"ambientCloud",
	"ambientMid",
	"ambientMidCloud",
	"groundReflection",
	"groundReflectionCloud",
	"bidirect",
	"bidirectCloud",
	"sky",
	"skyAroundSun",
	"fogColor",
	"apertureMin",
	"apertureStandard",
	"apertureMax",
	"standardAvgLum",
	"desiredLuminanceCoef",
	"desiredLuminanceCoefCloud",
	"luminanceRectCoef",
	"luminanceRectCoefCloud",
	"rayleigh",
	"mie",
	"cloudsColor",
	"swBrightness"
];

//mission EH
//https://community.bistudio.com/wiki/Arma_3:_Event_Handlers/addMissionEventHandler
//_loadedMEH = addMissionEventHandler ["Loaded",{_this execVM "missionLoaded.sqf"}];
//_endedMEH = addMissionEventHandler ["Ended",{_this execVM "missionEnded.sqf"}];
_mapSingleClickMEH = addMissionEventHandler ["MapSingleClick",{_this spawn Test_fnc_mapClickBeaming}];


//functions
Test_fnc_mapClickBeaming =
{
	_units = _this select 0;//Array - leader selected units, same as groupSelectedUnits (same as _units param)
	_position = _this select 1;// Array - world Position3D of the click in format [x,y,0] (same as _pos param)
	_altPressed = _this select 2;// Boolean - true if Alt key was pressed (same as _alt param)
	_shiftPressed = _this select 3;// Boolean - true if Shift key was pressed (same as _shift param)

	if (_altPressed) then
	{
		(vehicle player) setPos _position;
	};
};

Test_fnc_getOvercast =
{
	parseNumber (overcast toFixed 2)
};
Test_fnc_setOvercast =
{
	private _newValue = _this select 0;
	0 setOvercast _newValue;
	forceWeatherChange;
};
test_fnc_QueueOvercastUpdate =
{
	TEST_UpdateOvercastTimestamp = time;
	if (!(TEST_UpdateOvercastThreadRunning)) then
	{
		TEST_UpdateOvercastThreadRunning = true;
		[_newValue] spawn Test_fnc_UpdateOvercastThread;
	};
};
Test_fnc_UpdateOvercastThread =
{
	while {time < (TEST_UpdateOvercastTimestamp + TEST_UpdateDelay)} do
	{
		sleep 0.1;
	};

	[Test_newOvercastValue] call Test_fnc_setOvercast;

	[] call test_fnc_refreshTopBar;

	hintSilent "Updated overcast";

	TEST_UpdateOvercastThreadRunning = false;
};
Test_fnc_getSunAngle =
{
	/*
		Original author: CarlGustaffa
		Additions: zapat

		Description:
		Returns the suns altitude for current day and hour of the year on any island (whos latitude may differ).

		Returns:
		Suns altitude in degrees, positive values after sunrise, negative values before sunrise.
	*/
	private _latitude = -1 * getNumber (configFile/"CfgWorlds"/worldName/"latitude");
	private _day = 360 * (dateToNumber date);

	private _hour = (daytime/24) * 360;
	private _sunAngle = ((12 * (cos _day) - 78) * (cos _latitude) * (cos _hour)) - (24 * (sin _latitude) * (cos _day));

//	_sunAngle
	parseNumber ((round _sunAngle) toFixed 0)
};
Test_fnc_getSunAngle2 =
{
	/*
		Author: Willem-Matthijs Crielaard, 9-2-2016

		Description:
		Script to calculate solar elevation and azimuth angles at a given time and date
		This script ignores the offset generated by Longitude within a timezone.
		Based on information from:
			http://www.pveducation.org/pvcdrom/properties-of-sunlight/elevation-angle
			https://en.wikipedia.org/wiki/Solar_azimuth_angle

		Returns:
			ARRAY
				0: NUMBER - solar elevation angle in degrees
				1: NUMBER - solar azimuth angle in degrees
	*/

	// ARMA 3 seems to have its equinox off by a few days
	#define EQUINOX_ERROR	2
	// Equinox - 360 is the number of orbital degrees per year, 365 the number of days per year. 81 accounts for march equinox
	#define EQUINOX_MAR	((360 * dateToNumber date)-(360 * (81 + EQUINOX_ERROR)/365))

	private _latitude = -1 * getNumber (configFile/"CfgWorlds"/worldName/"latitude");
	// current earth tilt irl to the sun in degrees
	private _declination = asin (sin 23.45 * sin EQUINOX_MAR);
	// solar hour angle in degrees; 360 degrees per 24 hours, times the current hour
	private _hra = 360 * ((date select 3) + (date select 4)/60 - 12)/24;
	private _solarElevationAngle = asin ((sin _declination * sin _latitude) + (cos _declination * cos _latitude * cos _hra));
	private _return = [];

	_return pushBack _solarElevationAngle;
	private _solarZentihAngle = acos (((sin _declination) * (cos _latitude) - (cos _hra) * (cos _declination) * (sin _latitude))/sin (90 - (_return select 0)));

	// determine correct solar zentih angle
	if (sin (90 - (_return select 0)) != 0) then
	{
		if (daytime <= 12) then
		{
			_return pushBack _solarZentihAngle;
		}
		else
		{
			_return pushBack (360 - _solarZentihAngle);
		};
	}
	else
	{
		_return pushBack 90;
	};

	_return
};
Test_fnc_setSunAngle =
{
	/*
		Original author: CarlGustaffa
		Additions: zapat

		Returns:
		Set the hour when given angle is happening. Eg. when is it sunrise.
	*/
	private _desiredSunAngle = _this select 0;

	private _latitude = -1 * getNumber (configFile/"CfgWorlds"/worldName/"latitude");
	private _day = 360 * (dateToNumber date);

	private _temp = ((_desiredSunAngle + (24 * (sin _latitude) * (cos _day)))/((12 * (cos _day) - 78) * (cos _latitude)));
	_temp = ((1 min _temp) max -1);
	_temp = acos _temp;
	private _hour = (_temp/360) * 24;

	_currentDate = date;
	_currentDate set [3,_hour];
	//This command sets the date for the southern hemisphere only, i.e. when the map is in northern hemisphere a date [2010,12,7,17,0] is in day light and and date [2010,6,7,17,0] is in darkness.
	setDate _currentDate;
	//otherwise skipTime?
};
test_fnc_getTimeOfDay =
{
	private _date = date;
	private _hour = _date select 3;

	parseNumber ((_hour - 12) toFixed 0)
};
test_fnc_setTimeOfDay =
{
	private _offset = (_this select 0);

//	private _day = 360 * (dateToNumber date);
//	_offSetToMidday = _day - Test_initialMidday;
//	_previousTimeOfDay = parseNumber (daytime toFixed 2);

//	_previousDate = date;

//	_newDate = numberToDate [Test_initialDate select 0,Test_initialMidday];
//	setDate _newDate;
	setDate Test_initialDateMidday;

	skipTime _offset;

	sleep 0.1;

	//to skip forward to a specific time, irrespective of the current mission time, use
//	skipTime ((_offset - daytime + 24) % 24);
//	Test_currentTimeOfDay = parseNumber (daytime toFixed 2);

//	hint format ["New time of day: %1 (before: %2 - offset: %3)",Test_currentTimeOfDay,_previousTimeOfDay,_offset];
};
test_fnc_QueueTimeOfDayUpdate =
{
	TEST_UpdateTimeOfDayTimestamp = time;
	if (!(TEST_UpdateTimeOfDayThreadRunning)) then
	{
		TEST_UpdateTimeOfDayThreadRunning = true;
		[_newValue] spawn Test_fnc_UpdateTimeOfDayThread;
	};
};
Test_fnc_UpdateTimeOfDayThread =
{
	while {time < (TEST_UpdateTimeOfDayTimestamp + TEST_UpdateDelay)} do
	{
		sleep 0.1;
	};

	[Test_newTimeOfDayValue] spawn Test_fnc_setTimeOfDay;

	//have to reapply due to skipTime
	[Test_newOvercastValue] call Test_fnc_setOvercast;
	[Test_newFogValue] call Test_fnc_setFog;

	[] call test_fnc_refreshTopBar;

	sleep 0.1;

//	[] call test_fnc_QueueLightingUpdate;
//	[] call test_fnc_updateLightingScene;
	[] spawn test_fnc_initLightingScene;

	// refresh dialog
	["onRefresh",[findDisplay 4711],"Test_TweakTerrainLightingDialog"] spawn test_fnc_initDialog;

	TEST_UpdateTimeOfDayThreadRunning = false;
};
Test_fnc_getSunOrMoon =
{
//	_intensity = moonIntensity;
//	_currentMoonPhase = moonPhase date;
	parseNumber (sunOrMoon toFixed 1)
};
Test_fnc_getHeight =
{
	parseNumber ((round ((getPosASL player) select 2)) toFixed 0)
};
Test_fnc_getFog =
{
	parseNumber (fog toFixed 2)
};
Test_fnc_setFog =
{
	private _newValue = _this select 0;
	0 setFog _newValue;
};

TEST_fnc_toggleParameter =
{
	private _idc = _this select 0;

	private _variable = switch (_idc) do
	{
		case 4711: {XXX};
		default {Test_Dummy};
	};
	if (_variable) then
	{
		_variable = false;
	}
	else
	{
		_variable = true;
	};
};
Test_fnc_getRGBfromTemperature =
{
	private _tmpKelvin = _this select 0;

	private _red = 0;
	private _green = 0;
	private _blue = 0;
	private _tmpCalc = 0.0;

	//Temperature must fall between 1000 and 40000 degrees
	if (_tmpKelvin < 1000) then {_tmpKelvin = 1000;};
	if (_tmpKelvin > 40000) then {_tmpKelvin = 40000;};

	//All calculations require _tmpKelvin \ 100, so only do the conversion once
	_tmpKelvin = _tmpKelvin/100;

	//Calculate each color in turn

	//First: red
	if (_tmpKelvin <= 66) then
	{
		_red = 255;
	}
	else
	{
		//Note: the _red-squared value for this approximation is .988
		_tmpCalc = _tmpKelvin - 60;
		_tmpCalc = 329.698727446 * (_tmpCalc ^ -0.1332047592);
		_red = _tmpCalc;
	};

	//Second: green
	if (_tmpKelvin <= 66) then
	{
		//Note: the _red-squared value for this approximation is .996
		_tmpCalc = _tmpKelvin;
		_tmpCalc = 99.4708025861 * (ln _tmpCalc) - 161.1195681661;
		_green = _tmpCalc;
	}
	else
	{
		//Note: the _red-squared value for this approximation is .987
		_tmpCalc = _tmpKelvin - 60;
		_tmpCalc = 288.1221695283 * (_tmpCalc ^ -0.0755148492);
		_green = _tmpCalc;
	};

	//Third: blue
	if (_tmpKelvin >= 66) then
	{
		_blue = 255;
	}
	else
	{
		if (_tmpKelvin <= 19) then
		{
			_blue = 0;
		}
		else
		{
			//Note: the _red-squared value for this approximation is .998
			_tmpCalc = _tmpKelvin - 10;
			_tmpCalc = 138.5177312231 * (ln _tmpCalc) - 305.0447927307;
			_blue = _tmpCalc;
		};
	};

	if (_red < 0) then {_red = 0;};
	if (_red > 255) then {_red = 255;};
	_red = parseNumber ((round _red) toFixed 0);

	if (_green < 0) then {_green = 0;};
	if (_green > 255) then {_green = 255;};
	_green = parseNumber ((round _green) toFixed 0);

	if (_blue < 0) then {_blue = 0;};
	if (_blue > 255) then {_blue = 255;};
	_blue = parseNumber ((round _blue) toFixed 0);

	[_red,_blue,_green]
};
Test_fnc_clamp =
{
	private _value = _this select 0;
	private _min = _this select 1;
	private _max = _this select 2;

	if (_value < _min) exitWith {_min};
	if (_value > _max) exitWith {_max};

	parseNumber ((round _value) toFixed 0)
};

Test_fnc_getRGBfromTemperature2 =
{
	private _temp = (_this select 0)/100;

	private _red = 0;
	private _green = 0;
	private _blue = 0;

	if (_temp <= 66) then
	{
		_red = 255;

		_green = _temp;
		_green = 99.4708025861 * (ln _green) - 161.1195681661;

		if (_temp <= 19) then
		{
			_blue = 0;
		}
		else
		{
			_blue = _temp - 10;
			_blue = 138.5177312231 * (ln _blue) - 305.0447927307;
		};
	}
	else
	{
		_red = _temp - 60;
		_red = 329.698727446 * (_red ^ -0.1332047592);

		_green = _temp - 60;
		_green = 288.1221695283 * (_green ^ -0.0755148492);
		_blue = 255;
	};

	_red = [_red,0,255] call Test_fnc_clamp;
	_green = [_green,0,255] call Test_fnc_clamp;
	_blue = [_blue,0,255] call Test_fnc_clamp;

	[_red,_green,_blue]
};

Test_fnc_getTemperatureFromRGB =
{
//diag_log ["Test_fnc_getTemperatureFromRGB",_this];
//	private _red = _this select 0;
//	private _green = _this select 1;
//	private _blue = _this select 2;

	private _red = parseNumber ((round ((_this select 0) * 255)) toFixed 0);
	private _green = parseNumber ((round ((_this select 1) * 255)) toFixed 0);
	private _blue = parseNumber ((round ((_this select 2) * 255)) toFixed 0);

	//1. Convert the RGB values to CIE tristimulus values (XYZ)
	private _x = (-0.14282 * _red) + (1.54924 * _green) + (-0.95641 * _blue);
	private _y = (-0.32466 * _red) + (1.57837 * _green) + (-0.73191 * _blue);//Illuminance
	private _z = (-0.68202 * _red) + (0.77073 * _green) + (0.56332 * _blue);

	//default value fallback
	if ((_x + _y + _z) == 0) exitWith {1000};
//diag_log ["RGB",_red,_green,_blue];
//diag_log ["xyz",_x,_y,_z];

	//2. Calculate the normalized chromaticity values:
	_x = _x/(_x + _y + _z);
	_y = _y/(_x + _y + _z);
//diag_log ["xy",_x,_y];

	//3. Compute the _correlatedColorTemperature value from:
	private _correlatedColorTemperature = (449 * (((_x - 0.3320)/(0.1858 - _y)) * ((_x - 0.3320)/(0.1858 - _y)) * ((_x - 0.3320)/(0.1858 - _y)))) + (3525 * (((_x - 0.3320)/(0.1858 - _y)) * ((_x - 0.3320)/(0.1858 - _y)))) + (6823.3 * ((_x - 0.3320)/(0.1858 - _y))) + 5520.33;
//diag_log ["RGB",_red,_green,_blue];
//diag_log ["_correlatedColorTemperature - 1",_correlatedColorTemperature];

	//Which can be combined to form the following equation:
	private _n = ((0.23881 * _red) + (0.25499 * _green) + (-0.58291 * _blue))/((0.11109 * _red) + (-0.85406 * _green) + (0.52289 * _blue));
	_correlatedColorTemperature = 449 * _n * _n * _n + 3525 * _n * _n + 6823.3 * _n + 5520.33;
//diag_log ["_correlatedColorTemperature - 2",_correlatedColorTemperature];

	parseNumber ((round _correlatedColorTemperature) toFixed 0)
};

test_fnc_updateCurrentLeftBoxDisplay =
{
	//show temperature color
	//update temperature value?
	//update RGB values
	//LV?
};

test_fnc_getLightingParameterValue =
{
	private _parameter = _this select 0;

	switch (toLower _parameter) do
	{
		case "height": {TEST_NewLighting_height};
		case "overcast": {TEST_NewLighting_overcast};
		case "sunangle": {TEST_NewLighting_sunAngle};
		case "sunormoon": {TEST_NewLighting_sunOrMoon};
		case "diffuse": {TEST_NewLighting_diffuse};
		case "diffusecloud": {TEST_NewLighting_diffuseCloud};
		case "ambient": {TEST_NewLighting_ambient};
		case "ambientcloud": {TEST_NewLighting_ambientCloud};
		case "ambientmid": {TEST_NewLighting_ambientMid};
		case "ambientmidcloud": {TEST_NewLighting_ambientMidCloud};
		case "groundreflection": {TEST_NewLighting_groundReflection};
		case "groundreflectioncloud": {TEST_NewLighting_groundReflectionCloud};
		case "bidirect": {TEST_NewLighting_bidirect};
		case "bidirectcloud": {TEST_NewLighting_bidirectCloud};
		case "sky": {TEST_NewLighting_sky};
		case "skyaroundsun": {TEST_NewLighting_skyAroundSun};
		case "fogcolor": {TEST_NewLighting_fogColor};
		case "aperturemin": {TEST_NewLighting_apertureMin};
		case "aperturestandard": {TEST_NewLighting_apertureStandard};
		case "aperturemax": {TEST_NewLighting_apertureMax};
		case "standardavglum": {TEST_NewLighting_standardAvgLum};
		case "desiredluminancecoef": {TEST_NewLighting_desiredLuminanceCoef};
		case "desiredluminancecoefcloud": {TEST_NewLighting_desiredLuminanceCoefCloud};
		case "luminancerectcoef": {TEST_NewLighting_luminanceRectCoef};
		case "luminancerectcoefcloud": {TEST_NewLighting_luminanceRectCoefCloud};
		case "rayleigh": {TEST_NewLighting_rayleigh};
		case "mie": {TEST_NewLighting_mie};
		case "cloudscolor": {TEST_NewLighting_cloudsColor};
		case "swbrightness": {TEST_NewLighting_swBrightness};
		default {0};
	};
};
test_fnc_createformattedConfigParameter =
{
	private _parameterName = _this select 0;
	private _parameterValue = missionNamespace getVariable (format ["TEST_NewLighting_%1",_parameterName]);//[_parameterName] call test_fnc_getLightingParameterValue;
//diag_log["_parameterName",_parameterName];
//diag_log["_parameterValue",_parameterValue];

	private _newString = switch (typeName _parameterValue) do
	{
		case ("SCALAR"):
		{
			_parameterName + " = " + str _parameterValue + ";";
		};
		case ("ARRAY"):
		{
			_parameterName + "[] = " + (_parameterValue call TEST_fnc_traverseArray) + ";";
		};
		default {""};
	};
	_newString
};
test_fnc_formatLightingNewParameters =
{
	private _configFormatting = _this select 0;

	private _string = "";

	{
		private _parameterName = _x;

		private _newString = [_parameterName] call test_fnc_createformattedConfigParameter;

		if (_configFormatting) then
		{
			_string = _string + "					" + _newString + endl;
		}
		else
		{
//"sunOrMoon = 1; diffuse[] = { 0, 0, 0, 0 }; diffuseCloud[] = { 0, 0, 0, 0 }; ambient[] = { 0, 0, 0, 0 }; ... "
			_string = _string + _newString + " ";
//			_string = _string + format ["%1 = %2; ",_parameterName,_parameterValue];
		};
	} forEach TEST_NewLighting_AllParameters;

	_string
};
test_fnc_updateLightingScene =
{
	private _string = [false] call test_fnc_formatLightingNewParameters;

diag_log["final string",_string];
	diag_setLightNew _string;

	hint "Light scene updated";
};
test_fnc_determineLightingScene =
{
	_lightingNewConfig = configFile/"cfgWorlds"/worldName/"Weather"/"LightingNew";

	_currentLightingNewClass = configNull;
	_currentHeightLevel = 9999;
	_highestHeightLevelOnLand = 0;
	_lowestHeightLevelUnderWater = 0;
//	_currentOvercastLevel = 1;
	_highestOvercastLevel = 0;
	_isLowestOvercastLevel = false;
//	_currentSunAngleLevel = 90;//correct?
	_isLowestSunAngleLevel = false;

	_currentHeight = [] call Test_fnc_getHeight;
	_currentOvercast = [] call Test_fnc_getOvercast;
	_currentSunAngle = [] call Test_fnc_getSunAngle;

	//determine base height and overcast
	for "_i" from (0) to ((count _lightingNewConfig) - 1) do
	{
		private _lightingNewClass = _lightingNewConfig select _i;

		if (isClass _lightingNewClass) then
		{
			_height = getNumber (_lightingNewClass/"height");
			_overcast = getNumber (_lightingNewClass/"overcast");

			if ((_height < _currentHeight) && (_height > _highestHeightLevelOnLand)) then
			{
				_highestHeightLevelOnLand = _height;
			};
			if ((_currentHeight < _height) && (_height < _lowestHeightLevelUnderWater)) then
			{
				_lowestHeightLevelUnderWater = _height;
			};

			if (_overcast > _highestOvercastLevel) then
			{
				_highestOvercastLevel = _overcast;
			};
		};
	};

	for "_i" from (0) to ((count _lightingNewConfig) - 1) do
	{
		private _lightingNewClass = _lightingNewConfig select _i;

		if (isClass _lightingNewClass) then
		{
			_height = getNumber (_lightingNewClass/"height");
			_overcast = getNumber (_lightingNewClass/"overcast");
			_sunAngle = getNumber (_lightingNewClass/"sunAngle");
			_sunOrMoon = getNumber (_lightingNewClass/"sunOrMoon");

			if (_currentHeightLevel != _height) then
			{
				_currentHeightLevel = _height;

				//reset data
				_isLowestOvercastLevel = false;
				_isLowestSunAngleLevel = false;
			};

//diag_log ["_currentHeightLevel",_currentHeightLevel];
//diag_log ["_highestHeightLevelOnLand",_highestHeightLevelOnLand];
//diag_log ["_lowestHeightLevelUnderWater",_lowestHeightLevelUnderWater];
//diag_log ["_currentHeight",_currentHeight];
//diag_log ["_height",_height];
			if (((_currentHeight > 0) && (_height == _highestHeightLevelOnLand)) || (_currentHeight < 0) && (_height == _lowestHeightLevelUnderWater)) then
//			if ((_currentHeightLevel == _highestHeightLevelOnLand) || (_currentHeight < _height)) then
			{
//diag_log ["_currentOvercast",_currentOvercast];
//diag_log ["_overcast",_overcast];
//diag_log ["_isLowestOvercastLevel",_isLowestOvercastLevel];
				if (_currentOvercast < _overcast) then
				{
					if (!_isLowestOvercastLevel) then
					{
//						_currentOvercastLevel = _overcast;
						_isLowestOvercastLevel = true;
					};
				};
//#diag_log ["_currentOvercastLevel",_currentOvercastLevel];
//diag_log ["_isLowestOvercastLevel",_isLowestOvercastLevel];
//diag_log ["_highestOvercastLevel",_highestOvercastLevel];
//diag_log ["_currentOvercast > _highestOvercastLevel",_currentOvercast > _highestOvercastLevel];

				if (_isLowestOvercastLevel || (_currentOvercast > _highestOvercastLevel) && (_overcast == _highestOvercastLevel)) then
				{
					if (_currentSunAngle < _sunAngle) then
					{
						if (!_isLowestSunAngleLevel) then
						{
//							_currentSunAngleLevel = _sunAngle;
							_isLowestSunAngleLevel = true;
						};
					};

					if (_isLowestSunAngleLevel) then
					{
//						if (_sunOrMoon) then
//						{
							_currentLightingNewClass = _lightingNewClass;
//						};
//					}
//					else
//					{
//						_isLowestSunAngleLevel = false;
					};
				}
				else
				{
					_isLowestOvercastLevel = false;
				};
			};
		};

		if (!isNull _currentLightingNewClass) exitWith
		{
			diag_log ["_currentLightingNewClass",_currentLightingNewClass];
		};
	};

//	if (_currentLightingNewClass = "")
	_currentLightingNewClass
};

// Fast string concatenation
TEST_fnc_joinString =
{
	private _list = _this select 0;
	private _char = _this select 1;

	if (count _list < 1) exitWith {""};

	// while {count _list > 1} do {
	for "_z" from 1 to ceil ((log (count _list))/.3010299956639812) do
	{
		private _size = (count _list) / 2;
		private _subsize = floor _size;
		private _oversize = ceil _size;
		private _j = 0;

		for "_i" from (0) to (_subsize - 1) do
		{
			_list set [_i,(_list select _j) + _char + (_list select (_j + 1))];
			_j = _j + 2;
		};

		if (_subsize != _oversize) then // to add a tail
		{
			_list set [_j / 2,_list select _j];
		};

		_list resize _oversize;
	};

	_list select 0;
};
TEST_fnc_escapeString =
{
	private _source = toArray _this;
	private _start = _source find 34;

	if (_start > -1) then
	{
		private _target = +_source;
		_target resize _start;

		for "_i" from (_start) to ((count _source) - 1) do
		{
			private _charCode = _source select _i;

			_target pushBack _charCode;

			if (_charCode == 34) then
			{
				_target pushBack _charCode;
			};
		};

		str toString _target;
	}
	else
	{
		str _this;
	};
};
TEST_fnc_traverseArray =
{
	if ((typeName _this) == "array") exitWith
	{
		private _array = [];

		for "_i" from (0) to ((count _this) - 1) do
		{
			_array pushBack ((_this select _i) call TEST_fnc_traverseArray);
		};

		"{" + ([_array,","] call TEST_fnc_joinString) + "}";
	};

	if ((typeName _this) == "string") exitWith
	{
		_this call TEST_fnc_escapeString;
	};

	str _this;
};

test_fnc_initLightingScene =
{
//	private _string = "";
	private _currentLightingNewClass = [] call test_fnc_determineLightingScene;

	for "_i" from (0) to ((count _currentLightingNewClass) - 1) do
	{
		private _lightingNewClassParameter = _currentLightingNewClass select _i;
		private _parameterName = configName _lightingNewClassParameter;
		private _parameterValue = 0;

		private _newString = switch (true) do
		{
			case (isNumber _lightingNewClassParameter):
			{
				_parameterValue = getNumber _lightingNewClassParameter;
				_parameterName + " = " + (str _parameterValue) + ";";
			};
			case (isArray _lightingNewClassParameter):
			{
				_parameterValue = getArray _lightingNewClassParameter;
				_parameterName + "[] = " + (_parameterValue call TEST_fnc_traverseArray) + ";";
			};
			default {""};
		};

		missionNamespace setVariable [format ["TEST_NewLighting_%1",_parameterName],_parameterValue];

//		_string = _string + _newString + " ";
	};

	[] call test_fnc_updateLightingScene;

//	sleep 0.01;

//	hint format ["Current lighting scene loaded (%1 [%2,%3 (%4),%5])",configName (call test_fnc_determineLightingScene),call Test_fnc_getHeight,call Test_fnc_getOvercast,daytime toFixed 2,[] call Test_fnc_getSunAngle];
//	diag_log format ["Current lighting scene loaded (%1 [%2,%3 (%4),%5])",configName (call test_fnc_determineLightingScene),call Test_fnc_getHeight,call Test_fnc_getOvercast,daytime toFixed 2,[] call Test_fnc_getSunAngle];
};

Test_fnc_textChangedOnLeftBox =
{
	_control = (_this select 0) select 0;
	_newValue = (_this select 0) select 1;
//	_display = _this select 1;
	_display = findDisplay 4711;
	_idcOffset = _this select 2;
	_parameterName = _this select 3;
	_isLuminance = _this select 4;
	_dataField = _this select 5;
diag_log ["Test_fnc_textChangedOnLeftBox",_this];

	_baseIdc = switch (_dataField) do
	{
		case "R":	{1004};
		case "G":	{1006};
		case "B":	{1008};
		case "LV":	{1010};
		default		{0};
	};
	_idc = _idcOffset + _baseIdc;

	_valueControl = _display displayCtrl _idc;
	_currentText = ctrlText _valueControl;

	_textAsArray = toArray _currentText;
	_tempArray = [];

	_validCharaters = [49,50,51,52,53,54,55,56,57,48]; //1-9,0
	if (_isLuminance) then
	{
		_validCharaters pushBack 46; //.
	};

	_i = 0;
	{
		_decimalUnicodeRepresentationsOfCharacters = _x;
//diag_log ["_decimalUnicodeRepresentationsOfCharacters",_decimalUnicodeRepresentationsOfCharacters];
//diag_log ["_validCharaters",_validCharaters];
//diag_log ["in",_decimalUnicodeRepresentationsOfCharacters in _validCharaters];

		if (_decimalUnicodeRepresentationsOfCharacters in _validCharaters) then
		{
			if (_decimalUnicodeRepresentationsOfCharacters != 46) then
			{
				_tempArray pushBack _decimalUnicodeRepresentationsOfCharacters;
			}
			else //only one . valid
			{
				if (_i > 0) then // dont start with .
				{
					_tempArray pushBackUnique _decimalUnicodeRepresentationsOfCharacters;
				};
			};
		};
		_i = _i + 1;
	} forEach _textAsArray;

	_newText = toString _tempArray;

	//RGB upper limit
	if ((parseNumber _newText) > 255) then
	{
		_newText = "255";
	};

	if (_isLuminance) then
	{
		_luminanceValue = parseNumber _newText;

		//LV upper limit
		if (_luminanceValue > 25) then
		{
			_luminanceValue = 25;
		};

		_newText = _luminanceValue toFixed 2;
	};

	if (_newText == "") then
	{
		_newText = "0";
	};

	_valueControl ctrlSetText _newText;

	_newValue = parseNumber _newText;

	_parameterValue = missionNamespace getVariable (format ["TEST_NewLighting_%1",_parameterName]);

	_colors = _parameterValue select 0;
	_luminance = _parameterValue select 1;

	if (toLower _parameterName in ["bidirect","bidirectcloud","rayleigh","mie"]) then
	{
		_colors = _parameterValue;
	};

	switch (_dataField) do
	{
		case "R":	{_colors set [0,_newValue/255];};
		case "G":	{_colors set [1,_newValue/255];};
		case "B":	{_colors set [2,_newValue/255];};
		case "LV":	{_luminance = _newValue;};
		default		{};
	};
	_parameterValue = [_colors,_luminance];

	if (toLower _parameterName in ["bidirect","bidirectcloud","rayleigh","mie"]) then
	{
		_parameterValue = _colors;
	};

	_newTemperatureValue = _colors call Test_fnc_getTemperatureFromRGB;
	_temperaturePreviewValue = _colors + [1];//TODO: _luminance;

	_temperaturePreviewControl = _display displayCtrl (1002 + _idcOffset);
	_temperaturePreviewControl ctrlSetBackgroundColor _temperaturePreviewValue;
	_temperaturePreviewControl ctrlSetText (str _newTemperatureValue);

	if (cbChecked (_display displayCtrl (1000 + _idcOffset))) then
	{
		missionNamespace setVariable [format ["TEST_NewLighting_%1",_parameterName],_parameterValue];

		[] call test_fnc_QueueLightingUpdate;
	};
};
test_fnc_QueueLightingUpdate =
{
	TEST_UpdateLightingTimestamp = time;
	if (!(TEST_UpdateLightingThreadRunning)) then
	{
		TEST_UpdateLightingThreadRunning = true;
		[] spawn Test_fnc_UpdateLightingThread;
	};
};
Test_fnc_UpdateLightingThread =
{
	while {time < (TEST_UpdateLightingTimestamp + TEST_UpdateDelay)} do
	{
		sleep 0.1;
	};

	[] call test_fnc_updateLightingScene;

	TEST_UpdateLightingThreadRunning = false;
};
Test_fnc_checkBoxChangedOnLeftBox =
{
	_control = (_this select 0) select 0;
	_newState = (_this select 0) select 1;
//	_display = _this select 1;
	_display = findDisplay 4711;
	_idcOffset = _this select 2;
	_parameterName = _this select 3;
diag_log ["Test_fnc_checkBoxChangedOnLeftBox",_this];

	if (_newState == 1) then
	{
		hint "enabled";
	}
	else
	{
		hint "disabled";
	};
};
Test_fnc_checkBoxChangedOnBottomBox =
{
	_control = (_this select 0) select 0;
	_newState = (_this select 0) select 1;
//	_display = _this select 1;
	_display = findDisplay 4711;
	_idcOffset = _this select 2;
	_parameterName = _this select 3;
diag_log ["Test_fnc_checkBoxChangedOnBottomBox",_this];

	if (_newState == 1) then
	{
		hint "enabled";
	}
	else
	{
		hint "disabled";
	};
};
Test_fnc_sliderChangedOnLeftBox =
{
	_control = (_this select 0) select 0;
	_newValue = (_this select 0) select 1;
//	_display = _this select 1;
	_display = findDisplay 4711;
	_idcOffset = _this select 2;
	_parameterName = _this select 3;
diag_log ["Test_fnc_sliderChangedOnLeftBox",_this];

diag_log ["_newValue",_newValue];
	_newValue = parseNumber ((round _newValue) toFixed 0);
	_tempColors = [_newValue] call Test_fnc_getRGBfromTemperature2;

	_colors = [(_tempColors select 0)/255,(_tempColors select 1)/255,(_tempColors select 2)/255];

	_luminanceValue = 1;//TODO
	_parameterValue = _colors;

	if (!(toLower _parameterName in ["bidirect","bidirectcloud","rayleigh","mie"])) then
	{
		_luminanceValue = (missionNamespace getVariable (format ["TEST_NewLighting_%1",_parameterName])) select 1;
		_parameterValue = [_colors,_luminanceValue];
	};
diag_log ["_colors",_colors];
diag_log ["_parameterValue",_parameterValue];

	_redValue = _colors select 0;
	_greenValue = _colors select 1;
	_blueValue = _colors select 2;

	_temperaturePreviewControl = _display displayCtrl (1002 + _idcOffset);
	_temperaturePreviewControl ctrlSetBackgroundColor [_redValue,_greenValue,_blueValue,1];//TODO
	_temperaturePreviewControl ctrlSetText (str _newValue);

	_redValueControl = _display displayCtrl (1004 + _idcOffset);
	_redValueControl ctrlSetText ((round (_redValue * 255)) toFixed 0);

	_greenValueControl = _display displayCtrl (1006 + _idcOffset);
	_greenValueControl ctrlSetText ((round (_greenValue * 255)) toFixed 0);

	_blueValueControl = _display displayCtrl (1008 + _idcOffset);
	_blueValueControl ctrlSetText ((round (_blueValue * 255)) toFixed 0);

	_luminanceValueControl = _display displayCtrl (1010 + _idcOffset);
//	_luminanceValueControl ctrlSetText (str _luminanceValue);

	if (cbChecked (_display displayCtrl (1000 + _idcOffset))) then
	{
		missionNamespace setVariable [format ["TEST_NewLighting_%1",_parameterName],_parameterValue];

		_string = _parameterName + "[] = " + (_colors call TEST_fnc_traverseArray) + ";";
//diag_log ["_string",_string];

		[] call test_fnc_QueueLightingUpdate;
	};
};
Test_fnc_sliderChangedOnBottomBox =
{
	_control = (_this select 0) select 0;
	_newValue = (_this select 0) select 1;
//	_display = _this select 1;
	_display = findDisplay 4711;
	_idcOffset = _this select 2;
	_parameterName = _this select 3;
	_valuePrecision = _this select 4;
//diag_log ["Test_fnc_sliderChangedOnBottomBox",_this];
	_parameterValue = parseNumber (_newValue toFixed _valuePrecision);

	_valueControl = _display displayCtrl (3002 + _idcOffset);
	_valueControl ctrlSetText (str _parameterValue);

	if (cbChecked (_display displayCtrl (3000 + _idcOffset))) then
	{
		missionNamespace setVariable [format ["TEST_NewLighting_%1",_parameterName],_parameterValue];

		[] call test_fnc_QueueLightingUpdate;
	};
};
Test_fnc_hideInterface =
{
	if (Test_hideInterface) then
	{
		Test_hideInterface = false;
	}
	else
	{
		Test_hideInterface = true;
	};

	private _allControls = [9990,9991,9992,0010,0011,0012,0013,0014,0015,0016,0017,0018,0020,0021,0022,0023,0100,0101,0102,0103,0104,0105,0106,0107,0108,0109,0110,0111,0112,1000 + 0100,1001 + 0100,1002 + 0100,1003 + 0100,1004 + 0100,1005 + 0100,1006 + 0100,1007 + 0100,1008 + 0100,1009 + 0100,1010 + 0100,1012 + 0100,1000 + 0200,1001 + 0200,1002 + 0200,1003 + 0200,1004 + 0200,1005 + 0200,1006 + 0200,1007 + 0200,1008 + 0200,1009 + 0200,1010 + 0200,1012 + 0200,1000 + 0300,1001 + 0300,1002 + 0300,1003 + 0300,1004 + 0300,1005 + 0300,1006 + 0300,1007 + 0300,1008 + 0300,1009 + 0300,1010 + 0300,1012 + 0300,1000 + 0400,1001 + 0400,1002 + 0400,1003 + 0400,1004 + 0400,1005 + 0400,1006 + 0400,1007 + 0400,1008 + 0400,1009 + 0400,1010 + 0400,1012 + 0400,1000 + 0500,1001 + 0500,1002 + 0500,1003 + 0500,1004 + 0500,1005 + 0500,1006 + 0500,1007 + 0500,1008 + 0500,1009 + 0500,1010 + 0500,1012 + 0500,1000 + 0600,1001 + 0600,1002 + 0600,1003 + 0600,1004 + 0600,1005 + 0600,1006 + 0600,1007 + 0600,1008 + 0600,1009 + 0600,1010 + 0600,1012 + 0600,1000 + 0700,1001 + 0700,1002 + 0700,1003 + 0700,1004 + 0700,1005 + 0700,1006 + 0700,1007 + 0700,1008 + 0700,1009 + 0700,1010 + 0700,1012 + 0700,1000 + 0800,1001 + 0800,1002 + 0800,1003 + 0800,1004 + 0800,1005 + 0800,1006 + 0800,1007 + 0800,1008 + 0800,1009 + 0800,1010 + 0800,1012 + 0800,1000 + 0900,1001 + 0900,1002 + 0900,1003 + 0900,1004 + 0900,1005 + 0900,1006 + 0900,1007 + 0900,1008 + 0900,1009 + 0900,1010 + 0900,1012 + 0900,1000 + 1000,1001 + 1000,1002 + 1000,1003 + 1000,1004 + 1000,1005 + 1000,1006 + 1000,1007 + 1000,1008 + 1000,1009 + 1000,1010 + 1000,1012 + 1000,1000 + 1100,1001 + 1100,1002 + 1100,1003 + 1100,1004 + 1100,1005 + 1100,1006 + 1100,1007 + 1100,1008 + 1100,1009 + 1100,1010 + 1100,1012 + 1100,1000 + 1200,1001 + 1200,1002 + 1200,1003 + 1200,1004 + 1200,1005 + 1200,1006 + 1200,1007 + 1200,1008 + 1200,1009 + 1200,1010 + 1200,1012 + 1200,1000 + 1300,1001 + 1300,1002 + 1300,1003 + 1300,1004 + 1300,1005 + 1300,1006 + 1300,1007 + 1300,1008 + 1300,1009 + 1300,1010 + 1300,1012 + 1300,1000 + 1400,1001 + 1400,1002 + 1400,1003 + 1400,1004 + 1400,1005 + 1400,1006 + 1400,1007 + 1400,1008 + 1400,1009 + 1400,1010 + 1400,1012 + 1400,3000 + 0000,3001 + 0000,3002 + 0000,3003 + 0000,3000 + 0010,3001 + 0010,3002 + 0010,3003 + 0010,3000 + 0020,3001 + 0020,3002 + 0020,3003 + 0020,3000 + 0030,3001 + 0030,3002 + 0030,3003 + 0030,3000 + 0100,3001 + 0100,3002 + 0100,3003 + 0100,3000 + 0110,3001 + 0110,3002 + 0110,3003 + 0110,3000 + 0120,3001 + 0120,3002 + 0120,3003 + 0120,3000 + 0130,3001 + 0130,3002 + 0130,3003 + 0130,4000 + 0000,4001 + 0000,4002 + 0000,4003 + 0000,5000 + 0000,5001 + 0000,5002 + 0000,5003 + 0000,5004 + 0000,5005 + 0000,5006 + 0000,5007 + 0000,5008 + 0000,5012 + 0000,5000 + 0100,5001 + 0100,5002 + 0100,5003 + 0100,5004 + 0100,5005 + 0100,5006 + 0100,5007 + 0100,5008 + 0100,5012 + 0100];

	{
		ctrlShow [_x,Test_hideInterface];
	} forEach _allControls;

	hintSilent "";
};
Test_fnc_showDefaultLighting =
{
	if (Test_defaultLighting) then
	{
		Test_defaultLighting = false;

		// restore custom settings
		{
			private _parameterName = _x;
			private _parameterValue = missionNamespace getVariable (format ["TEST_NewLighting_Custom_%1",_parameterName]);

			missionNamespace setVariable [format ["TEST_NewLighting_%1",_parameterName],_parameterValue];
		} forEach TEST_NewLighting_AllParameters;

		[] call test_fnc_updateLightingScene;

		sleep 0.1;

		hint "Custom lighting restored";
	}
	else
	{
		Test_defaultLighting = true;

		// store custom settings
		{
			private _parameterName = _x;
			private _parameterValue = missionNamespace getVariable (format ["TEST_NewLighting_%1",_parameterName]);

			missionNamespace setVariable [format ["TEST_NewLighting_Custom_%1",_parameterName],_parameterValue];
		} forEach TEST_NewLighting_AllParameters;

		[] spawn test_fnc_initLightingScene;

		sleep 0.02;

		hint "Default lighting loaded";
	};
};
Test_fnc_handleKeyDownMainDialog =
{
	private _pressedButton = _this select 1;
	private _pressedShift = _this select 2;
	private _pressedControl = _this select 3;
	private _pressedAlt = _this select 4;

	private _return = false;
	private _userKeyMessage = "";
	private _actionKeysImages = "";
	private _pressedButtonArray = [_pressedButton];//standard button

	#include "KeyCharCodes.hpp"

	switch (_pressedButton) do
	{
		case KEYSCODE_H_KEY:
		{
			if (_pressedControl) then
			{
				[] call Test_fnc_hideInterface;
				_return = true;
			};
		};
		case KEYSCODE_D_KEY:
		{
			if (_pressedControl) then
			{
				[] spawn Test_fnc_showDefaultLighting;
				_return = true;
			};
		};
	};

	// key combo handling
	if (!(_return)) then
	{
		#include "keyComboHandling.hpp.sqf"

		// check for key actions
		switch (true) do
		{
			/*
			// disable command mode scanning
			case (({_x in _pressedButtonArray} count (actionKeys "ForceCommandingMode")) > 0):
			{
				_userKeyMessage = format ["< %1 > ",localize 'str_usract_force_commanding_mode'];
				_actionKeysImages = actionKeysImages "ForceCommandingMode";
				_return = true;
			};
			*/
		};
	};

	if (_userKeyMessage != "") then
	{
		_userKeyMessage = _userKeyMessage + format ["Text %1",_actionKeysImages];
		hintSilent _userKeyMessage;
	};

	_return;
};
test_fnc_initDialog =
{
	_action = _this select 0;
	_display = (_this select 1) select 0;
//	_display = findDisplay 4711;
	if (isNull _display) exitWith {};
//diag_log ["_display",_display];
//diag_log ["_this",_this];

	_display displayAddEventHandler ["KeyDown","_this call Test_fnc_handleKeyDownMainDialog"];

	_leftBackgroundControl = _display displayCtrl 9990;
	_topBackgroundControl = _display displayCtrl 9991;
	_bottomBackgroundControl = _display displayCtrl 9992;
	_leftBackgroundControl ctrlSetBackgroundColor [0,0,0,TEST_BackgroundAlpha];
	_topBackgroundControl ctrlSetBackgroundColor [0,0,0,TEST_BackgroundAlpha];
	_bottomBackgroundControl ctrlSetBackgroundColor [0,0,0,TEST_BackgroundAlpha];

	//top sliders
	if (_action == "onLoad") then
	{
		_overcastSliderControl = _display displayCtrl 20;
		_dayTimeSliderControl = _display displayCtrl 21;
		_fogSliderControl = _display displayCtrl 23;
//diag_log["_overcastSliderControl",sliderSpeed _overcastSliderControl];
//diag_log["_dayTimeSliderControl",sliderSpeed _dayTimeSliderControl];
//diag_log["_fogSliderControl",sliderSpeed _fogSliderControl];

		_overcastSliderControl sliderSetRange [0,1];
		_overcastSliderControl sliderSetPosition (([] call Test_fnc_getOvercast));
		_overcastSliderControl sliderSetSpeed [0.05,0.1];
		_dayTimeSliderControl sliderSetRange [-24,24];
		_dayTimeSliderControl sliderSetPosition (([] call test_fnc_getTimeOfDay));
		_dayTimeSliderControl sliderSetSpeed [0.25,1];
		_fogSliderControl sliderSetRange [0,1];
		_fogSliderControl sliderSetPosition (([] call Test_fnc_getFog));
		_fogSliderControl sliderSetSpeed [0.05,0.1];

		_overcastSliderControl ctrlAddEventHandler
		[
			"SliderPosChanged",
			{
				Test_newOvercastValue = parseNumber ((_this select 1) toFixed 2);
				[] call test_fnc_QueueOvercastUpdate;
			}
		];
		_dayTimeSliderControl ctrlAddEventHandler
		[
			"SliderPosChanged",
			{
				Test_newTimeOfDayValue = parseNumber ((_this select 1) toFixed 2);
				[] call test_fnc_QueueTimeOfDayUpdate;
			}
		];
		_fogSliderControl ctrlAddEventHandler
		[
			"SliderPosChanged",
			{
				Test_newFogValue = parseNumber ((_this select 1) toFixed 2);
				[Test_newFogValue] call Test_fnc_setFog;

				[] call test_fnc_refreshTopBar;

				hintSilent "Updated fog";
			}
		];
	};

	//left boxes
	_leftBoxes =
	[
		[100,"diffuse"],
		[200,"diffuseCloud"],
		[300,"ambient"],
		[400,"ambientCloud"],
		[500,"ambientMid"],
		[600,"ambientMidCloud"],
		[700,"groundReflection"],
		[800,"groundReflectionCloud"],
		[900,"bidirect"],
		[1000,"bidirectCloud"],
		[1100,"sky"],
		[1200,"skyAroundSun"],
		[1300,"fogColor"],
		[1400,"cloudsColor"],
		//bottom right
		[4000,"rayleigh"],
		[4100,"mie"]
	];

	{
		_idcOffset = _x select 0;
		_parameterName = _x select 1;

		_parameterValue = missionNamespace getVariable (format ["TEST_NewLighting_%1",_parameterName]);
//diag_log ["_parameterName",_parameterName];
//diag_log ["_parameterValue",_parameterValue];
		private _colors = [0,0,0];
		private _luminanceValue = 0;

		if ((count _parameterValue) == 2) then
		{
			_colors = _parameterValue select 0;
			_luminanceValue = _parameterValue select 1;
		}
		else
		{
			_colors = _parameterValue;
		};

		_redValue = _colors select 0;
		_greenValue = _colors select 1;
		_blueValue = _colors select 2;

		_temperature = _colors call Test_fnc_getTemperatureFromRGB;

		_checkBoxControl = _display displayCtrl (1000 + _idcOffset);

		_temperaturePreviewControl = _display displayCtrl (1002 + _idcOffset);
		_temperaturePreviewControl ctrlSetBackgroundColor [_redValue,_greenValue,_blueValue,1];//TODO
		_temperaturePreviewControl ctrlSetText (str _temperature);

		_redValueControl = _display displayCtrl (1004 + _idcOffset);
		_redValueControl ctrlSetText ((round (_redValue * 255)) toFixed 0);

		_greenValueControl = _display displayCtrl (1006 + _idcOffset);
		_greenValueControl ctrlSetText ((round (_greenValue * 255)) toFixed 0);

		_blueValueControl = _display displayCtrl (1008 + _idcOffset);
		_blueValueControl ctrlSetText ((round (_blueValue * 255)) toFixed 0);

		_luminanceValueControl = _display displayCtrl (1010 + _idcOffset);
		_luminanceValueControl ctrlSetText (_luminanceValue toFixed 2);

		_temperatureSliderControl = _display displayCtrl (1012 + _idcOffset);

		_temperatureSliderControl sliderSetRange [1000,12000];//[1000,40000]
		_temperatureSliderControl sliderSetPosition _temperature;//(_parameterValue/_range select 1);

		if (_action == "onLoad") then
		{
			_checkBoxControl ctrlAddEventHandler
			[
				"CheckedChanged",
				format ["[_this,'%1',%2,'%3'] call Test_fnc_checkBoxChangedOnLeftBox",_display,_idcOffset,_parameterName]
			];

			_redValueControl ctrlAddEventHandler ["KeyUp",format ["[_this,'%1',%2,'%3',false,'R'] call Test_fnc_textChangedOnLeftBox",_display,_idcOffset,_parameterName]];
			_greenValueControl ctrlAddEventHandler ["KeyUp",format ["[_this,'%1',%2,'%3',false,'G'] call Test_fnc_textChangedOnLeftBox",_display,_idcOffset,_parameterName]];
			_blueValueControl ctrlAddEventHandler ["KeyUp",format ["[_this,'%1',%2,'%3',false,'B'] call Test_fnc_textChangedOnLeftBox",_display,_idcOffset,_parameterName]];
			_luminanceValueControl ctrlAddEventHandler ["KeyUp",format ["[_this,'%1',%2,'%3',true,'LV'] call Test_fnc_textChangedOnLeftBox",_display,_idcOffset,_parameterName]];

			_temperatureSliderControl ctrlAddEventHandler
			[
				"SliderPosChanged",
				format ["[_this,'%1',%2,'%3'] call Test_fnc_sliderChangedOnLeftBox",_display,_idcOffset,_parameterName]
			];
		};
	} forEach _leftBoxes;

	//bottom boxes
	_bottomBoxes =
	[
		[0,"apertureMin",0],
		[10,"apertureStandard",0],
		[20,"apertureMax",0],
		[30,"standardAvgLum",0],

		[100,"desiredLuminanceCoef",2],
		[110,"desiredLuminanceCoefCloud",2],
		[120,"luminanceRectCoef",2],
		[130,"luminanceRectCoefCloud",2],
		//bottom right
		[1000,"swBrightness",2]
	];

	{
		_idcOffset = _x select 0;
		_parameterName = _x select 1;
		_valuePrecision = _x select 2;

		_parameterValue = missionNamespace getVariable (format ["TEST_NewLighting_%1",_parameterName]);

		_checkBoxControl = _display displayCtrl (3000 + _idcOffset);

		_valueControl = _display displayCtrl (3002 + _idcOffset);
		_valueControl ctrlSetText (_parameterValue toFixed _valuePrecision);

		_sliderControl = _display displayCtrl (3003 + _idcOffset);

		_range = switch (toLower _parameterName) do
		{
			case "aperturemin":			{[4,70]};
			case "aperturestandard":		{[4,120]};
			case "aperturemax":			{[8,120]};
			case "standardavglum":			{[4,8000]};

			case "desiredluminancecoef":		{[0,1]};
			case "desiredluminancecoefcloud":	{[0,1]};
			case "luminancerectcoef":		{[0,1]};
			case "luminancerectcoefcloud":		{[0,1]};

			case "swbrightness":			{[0,1]};

			default {[0,1]};
		};
		_sliderControl sliderSetRange _range;

		_sliderControl sliderSetPosition _parameterValue;//(_parameterValue/_range select 1);

		if (_action == "onLoad") then
		{
			_checkBoxControl ctrlAddEventHandler
			[
				"CheckedChanged",
				format ["[_this,'%1',%2,'%3'] call Test_fnc_checkBoxChangedOnBottomBox",_display,_idcOffset,_parameterName]
			];

			_sliderControl ctrlAddEventHandler
			[
				"SliderPosChanged",
				format ["[_this,'%1',%2,'%3',%4] call Test_fnc_sliderChangedOnBottomBox",_display,_idcOffset,_parameterName,_valuePrecision]
			];
		};
	} forEach _bottomBoxes;
};
test_fnc_refreshTopBar =
{
	private _display = findDisplay 4711;
	if (isNull _display) exitWith {};

	//overcast
	private _overcastValueControl = _display displayCtrl 11;
	_overcastValueControl ctrlSetText str ([] call Test_fnc_getOvercast);
	//sun angle
	private _sunAngleValueControl = _display displayCtrl 13;
	_sunAngleValueControl ctrlSetText str ([] call Test_fnc_getSunAngle);
	//sun or moon
	private _sunOrMoonValueControl = _display displayCtrl 15;
	_sunOrMoonValueControl ctrlSetText str ([] call Test_fnc_getSunOrMoon);
	//height
	private _heightValueControl = _display displayCtrl 17;
	_heightValueControl ctrlSetText str ([] call Test_fnc_getHeight);
};

test_fnc_exportLightingParameters =
{
	private _CRLF = endl;//toString [0x0D,0x0A];
	private _string = "";

	_string = _string + format ["//Reference values for fitting LighingNew subclass",""] + _CRLF;
	_string = _string + format ["//				class %1",configName (call test_fnc_determineLightingScene)] + _CRLF;//Lighting5
//	_string = _string + format ["				{",""] + _CRLF;
	_string = _string + format ["//					height = %1;",call Test_fnc_getHeight] + _CRLF;//0
	_string = _string + format ["//					overcast = %1;",call Test_fnc_getOvercast] + _CRLF;//0.25
	_string = _string + format ["//					sunAngle = %1;",call Test_fnc_getSunAngle] + _CRLF;//-2
	_string = _string + format ["//					sunOrMoon = %1;",call Test_fnc_getSunOrMoon] + _CRLF;//1

	_string = _string + format ["//Custom parameters:",""] + _CRLF;
	_string = _string + ([true] call test_fnc_formatLightingNewParameters);

//	_string = _string + format ["				};",""] + _CRLF;

	copyToClipboard _string;

	hint "Settings exported to clipboard";
};

Test_fnc_debug_getTemperatureFromRGB =
{
	diag_log "debug_getTemperatureFromRGB";
	{
		_rgb = _x;
		_temperatur = _rgb call Test_fnc_getTemperatureFromRGB;
//		diag_log [_x,_temperatur];
		diag_log [_rgb select 0,_rgb select 1,_rgb select 2,_temperatur];
	} forEach [[255,56,0],[255,71,0],[255,83,0],[255,93,0],[255,101,0],[255,109,0],[255,115,0],[255,121,0],[255,126,0],[255,131,0],[255,138,18],[255,142,33],[255,147,44],[255,152,54],[255,157,63],[255,161,72],[255,165,79],[255,169,87],[255,173,94],[255,177,101],[255,180,107],[255,184,114],[255,187,120],[255,190,126],[255,193,132],[255,196,137],[255,199,143],[255,201,148],[255,204,153],[255,206,159],[255,209,163],[255,211,168],[255,213,173],[255,215,177],[255,217,182],[255,219,186],[255,221,190],[255,223,194],[255,225,198],[255,227,202],[255,228,206],[255,230,210],[255,232,213],[255,233,217],[255,235,220],[255,236,224],[255,238,227],[255,239,230],[255,240,233],[255,242,236],[255,243,239],[255,244,242],[255,245,245],[255,246,247],[255,248,251],[255,249,253],[254,249,255],[252,247,255],[249,246,255],[247,245,255],[245,243,255],[243,242,255],[240,241,255],[239,240,255],[237,239,255],[235,238,255],[233,237,255],[231,236,255],[230,235,255],[228,234,255],[227,233,255],[225,232,255],[224,231,255],[222,230,255],[221,230,255],[220,229,255],[218,229,255],[217,227,255],[216,227,255],[215,226,255],[214,225,255],[212,225,255],[211,224,255],[210,223,255],[209,223,255],[208,222,255],[207,221,255],[207,221,255],[206,220,255],[205,220,255],[207,218,255],[207,218,255],[206,217,255],[205,217,255],[204,216,255],[204,216,255],[203,215,255],[202,215,255],[202,214,255],[201,214,255],[200,213,255],[200,213,255],[199,212,255],[198,212,255],[198,212,255],[197,211,255],[197,211,255],[197,210,255],[196,210,255],[195,210,255],[195,209,255]];

	hint "debug_getTemperatureFromRGB done";
};
Test_fnc_debug_getRGBfromTemperature =
{
	diag_log "debug_getRGBfromTemperature";//bugged
	{
		_rgb = [_x] call Test_fnc_getRGBfromTemperature2;
		diag_log [_x,_rgb];
	} forEach [1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000,2100,2200,2300,2400,2500,2600,2700,2800,2900,3000,3100,3200,3300,3400,3500,3600,3700,3800,3900,4000,4100,4200,4300,4400,4500,4600,4700,4800,4900,5000,5100,5200,5300,5400,5500,5600,5700,5800,5900,6000,6100,6200,6300,6400,6500,6600,6700,6800,6900,7000,7100,7200,7300,7400,7500,7600,7700,7800,7900,8000,8100,8200,8300,8400,8500,8600,8700,8800,8900,9000,9100,9200,9300,9400,9500,9600,9700,9800,9900,10000,10100,10200,10300,10400,10500,10600,10700,10800,10900,11000,11100,11200,11300,11400,11500,11600,11700,11800,11900,12000];

	hint "debug_getRGBfromTemperature done";
};

[] spawn test_fnc_initLightingScene;

sleep 1;

enableSaving [ false, false ];
player allowDamage false;
player enableStamina false;

showHUD [true,false,false,false,false,false,false,true];

//temp
if ((productVersion select 4) == "diag") then
{
	createDialog "Test_TweakTerrainLightingDialog";
}
else
{
	hintC "Game not started with Diag.exe - updating of lighting scene wont work!";
};

//Action keys: https://community.bistudio.com/wiki/inputAction/actions
player addAction ["Open menu",'createDialog "Test_TweakTerrainLightingDialog";',nil,9999,true,false,"gear"];
player addAction ["InitLightingScene",'0 = [] spawn test_fnc_initLightingScene;',nil,9989,true,false,""];
player addAction ["DetermineLightingScene",'hint format ["%1",configName (call test_fnc_determineLightingScene)];',nil,9979,true,false,""];
player addAction ["ExportSceneToClipboard",'0 = [] call test_fnc_exportLightingParameters',nil,9969,true,false,""];

player addAction ["Splendid camera","0 = [46] spawn BIS_fnc_camera;",nil,9959,true,false,""];
//player addAction ["Open Virtual Arsenal",{["Open",true] call BIS_fnc_arsenal;},nil,9949,true,false,""];

player addAction ["Back to editor","endmission 'End1'",nil,1,true,false,""];

//player addAction ["debug_getTemperatureFromRGB",'0 = [] call Test_fnc_debug_getTemperatureFromRGB;',nil,666,true,false,""];
//player addAction ["debug_getRGBfromTemperature",'0 = [] call Test_fnc_debug_getRGBfromTemperature;',nil,555,true,false,""];

while {true} do
{
	[] call test_fnc_refreshTopBar;

	sleep 1;
};

_pressedButtonArray pushBack (_pressedButton - 620756991);//LWIN key combo
_pressedButtonArray pushBack (_pressedButton - 603979775);//RWIN key combo
_pressedButtonArray pushBack (_pressedButton - 587202559);//App menu key combo

if (_pressedShift) then
{
	_pressedButtonArray pushBack (_pressedButton + 704643073);//LShift key combo
	_pressedButtonArray pushBack (_pressedButton + 905969665);//RShift key combo
};
if (_pressedControl) then
{
	_pressedButtonArray pushBack (_pressedButton + 486539265);//LCtrl key combo
	_pressedButtonArray pushBack (_pressedButton - 1660944383);//RCtrl key combo
};
if (_pressedAlt) then
{
	_pressedButtonArray pushBack (_pressedButton + 939524097);//LAlt key combo
	_pressedButtonArray pushBack (_pressedButton - 1207959551);//RAlt key combo
};
// joypad handling
_pressedButtonArray pushBack (_pressedButton + 131327);
#include "Character.h"

void Character::setupStats(int _hp, int _str, int _def, int _agi)
{
	hp = _hp;
	hpMax = _hp;
	str = _str;
	def = _def;
	agi = _agi;

}

void Character::displayStats()
{
	std::cout << " HP: " << hpMax << std::endl
		<< " STR: " << str << std::endl
		<< " DEF: " << def << std::endl
		<< " AGI: " << agi << std::endl;
	

}
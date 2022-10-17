#include "Character.h"
#include <iostream>
#include <string>

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
	std::cout << " HP: " << hp << std::endl
		<< " STR: " << str << std::endl
		<< " DEF: " << def << std::endl
		<< " AGI: " << agi << std::endl;
	

}

int Character::getHP()
{
	return hp;
}
int Character::getHPmax()
{
	return hpMax;
}
int Character::getAGI()
{
	return agi;
}

int Character::getDamaged()
{
	return str;
}
void Character::takeDamage(int dmg)
{
	int dmgAftCalc = dmg - def;

	if (dmgAftCalc < 1)
	{
		dmgAftCalc = 1;
	}

	hp = hp - dmgAftCalc; 
}

std::string getName()
{
	return "Character";
}
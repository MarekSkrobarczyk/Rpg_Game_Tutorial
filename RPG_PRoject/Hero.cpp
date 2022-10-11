#include "Hero.h"
#include <iostream>
#include <string>

void Hero::setName(std::string s)
{
	name = s;
}

std::string Hero::getName()
{
	return name;
}

void Hero::heal(int amount)
{
	hp += amount;
	
	if (hp > hpMax)
	{
		hp = hpMax;
	}
}

void Hero::atkBoost(int amount)
{
	str += amount;
}

void Hero::defBoost(int amount)
{
	def += amount;
}

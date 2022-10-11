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
	hp ++ amount;
}
void Hero::atkBoost(int amount);
void Hero::defBoost(int amount);

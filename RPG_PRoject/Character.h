#pragma once

#include <iostream>

class Character
{
protected:
	int hp, hpMax, str, def, agi;
 
public:

	void setupStats(int _hp, int _str, int _def, int _agi);
	void displayStats();

	int getHP();
	int getHPmax();
	int getAGI();

	int getDamaged();
	void takeDamage(int damgage);

	std::string getName();
};


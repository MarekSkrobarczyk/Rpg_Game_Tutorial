#pragma once

#include <iostream>

class Character
{
public:
	int hp, hpMax, str, def, agi;
 

	void setupStats(int _hp, int _str, int _def, int _agi);
	void displayStats();
};


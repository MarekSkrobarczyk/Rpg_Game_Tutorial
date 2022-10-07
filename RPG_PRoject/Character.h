#pragma once

#include <iostream>

class Character
{
private:
	int hp, hpMax, str, def, agi;
 
public:

	void setupStats(int _hp, int _str, int _def, int _agi);
	void displayStats();
};


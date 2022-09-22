#pragma once
class Character
{
private:
	int hp, hpMax, str, def, agi;

public:
	Character();
	~Character(); 

	void setupStats(int _hp, int _str, int _def, int _agi);
};


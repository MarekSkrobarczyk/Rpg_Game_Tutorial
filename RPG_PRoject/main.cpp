
#include <iostream> 
#include <string> 
#include "Questions.h"
#include "Character.h"
#include "Hero.h"
#include "Glob.h"
#include "Mimic.h"






int main() {

	std::cout << "What is your name?" << std::endl;

	std::string name;

	std::cin >> name;

	std::cout << "Welcome to the dungeon " << name << ", muahahahaha!!!" << std::endl;

	std::cout << "How old are you?" << std::endl;
	int age;
	std::cin >> age;
	std::cout << "So you are " << age << " years old!" << std::endl;

	std::cout << "What is your favourite number: " << std::endl;
	int favoriteNumber;
	std::cin >> favoriteNumber;
	std::cout << "Well you are now stuck in this dungeon for " << favoriteNumber << " years! Muahahaha!" << std::endl;


	int newAge = age + favoriteNumber;
	std::cout << "Its time to escape before you turn " << newAge << " years old!" << std::endl;

	if (newAge >= 80)
	{
		std::cout << "You might not even live to this age!" << std::endl;
	}

	else if (favoriteNumber == 11)
	{
		std::cout << "Nice favourite number by the way!" << std::endl;
	}

	
	int hp = 0, str = 0, def = 0, agi = 0;

	bool characterSetup = false;
	
	while (characterSetup == false)
	{
		std::cout << "What type of character are you?" << std::endl;
		std::cout << "1 - Beserker" << std::endl;
		std::cout << "2 - Buff Nut" << std::endl;
		std::cout << "3 - Speedy Ninja" << std::endl;
		int choice;
		std::cin >> choice;
		if (choice == 1) {
			hp = 60;
			str = 10;
			def = 2;
			agi = 3;
		}
		else if (choice == 2) {
			hp = 100;
			str = 4;
			def = 5;
			agi = 1;
		}
		else if (choice == 3) {
			hp = 80;
			str = 3;
			def = 1;
			agi = 10;
		}
		else
		{
			std::cout << "Invalid choice! Try again...." << std::endl;
		}

		if (choice >= 1 && choice <= 3)
		{
			characterSetup = true;
		}
	}

	std::cout << "Stats" << std::endl;
	std::cout << "hp: " << hp << std::endl;
	std::cout << "strength: " << str << std::endl;
	std::cout << "defense: " << def << std::endl;
	std::cout << "agility: " << agi << std::endl;

	std::cout << "The first gate is opening, counting down..." << std::endl;

	for (int i = 10; i >= 0; i--) {
		std::cout << i << "..." << std::endl;
	}

	std::cout << "\n In the first room, stands a tall slander figure in a cloak \n Totally skull faced. He speaks: \n";
	std::cout << " I will ask you 3 questions with various punishment if get wrong \n";

	int dmg = questions(str, agi, "Reflection");	//puzzel1() + puzzel2(str, agi) + puzzel3("Reflection");

	hp = hp - dmg;

	std::cout << " Your life decreased by " << dmg << " hit points, now your health is " << hp;

	//Character testCharacter;

	//testCharacter.setupStats(200, 200, 200, 300);
	//testCharacter.displayStats(); 

	Hero hero;
	hero.setName(name);
	hero.setupStats(hp, str, def, agi);

	//Glob glob1; // calls constructor and fills base stats

	//std::cout << "Glob parameters before take a dmg \n";
	//glob1.displayStats();
	
	//std::cout << "\n\n Glob parameters after take a dmg \n";
	//hero.takeDamage(glob1.getDamaged());
	//glob1.takeDamage(hero.getDamaged());

    //hero.displayStats();
	//glob1.displayStats();
	//std::cout << "\n\n Hero stats\n";
	//hero.displayStats();
	std::cout << "\n\n";
	Glob* GlobPtr = new Glob();
	GlobPtr->displayStats();

	GlobPtr->takeDamage(5);
	std::cout << "\n\n";

	GlobPtr->displayStats();
	std::cout << GlobPtr->getName();

	delete GlobPtr;
	GlobPtr = nullptr;

	system("pause");
}

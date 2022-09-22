#include "Questions.h"

int questions(int x, int y, std::string name)
{
	int damaged = 0;
	int num1;

	std::cout << " On which port Mortal, is the SMTP service running ? ";
	std::cin >> num1;

	if (num1 == 25)
	{
		std::cout << " Hmm, that's right, but it's more luck than your knowledge \n";
	}

	else
	{
		std::cout << " Hahahaha, Pathetic mortal, you can't even google it correctly !!! \n \n";
		damaged += 5;
	}

	std::cout << " What is " << x << "+" << y << " ?\n";
	int answ;
	std::cin >> answ;


	if (answ == x + y)
	{
		std::cout << " Let's say it is correct \n";
	}

	else
	{
		std::cout << " Arithmetic is not your strong suit... \n\n";
		damaged += 15;
	}

	std::cout << " Everyone has me, but not everyone likes me,\n Can you believe that? \n"
		" You can touch me, you can see me, but you can’t hit me. \n"
		" Entertained the children, depressed the old man, delighted the girl charmingly. \n"
		" When you cry  I sob, when you laugh – I giggle. \n\n"
		" What am I ? (one word) \n\n ";

	std::cin >> name;

	if (name == "Reflection")
	{
		std::cout << " Respect, you are smarter than you look \n\n ";
	}

	else
	{
		std::cout << " Seriously ? ";
		damaged += 10;

	}

	return damaged;
}

#include <iostream>
#include <string>
#include "Monster.h"
#include "MonsterGenerator.h"
#include <ctime>
#include <cstdlib>

int main()
{
	srand(static_cast<unsigned int>(time(0)));
	rand();

	Monster m = MonsterGenerator::generateMonster();
	m.print();
	std::getchar();

	return 0;
}
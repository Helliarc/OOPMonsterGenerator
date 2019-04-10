#pragma once
#include "Monster.h"

class MonsterGenerator
{
private:

public:
	static Monster generateMonster();
	static int getRandomNumber(int min, int max);
};
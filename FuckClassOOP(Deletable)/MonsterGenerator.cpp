#include "MonsterGenerator.h"

Monster MonsterGenerator::generateMonster()
{
	Monster::MonsterType type = static_cast<Monster::MonsterType>(getRandomNumber(0, (Monster::MAX_MONSTER_TYPES - 1)));
	int hitPoints = getRandomNumber(1, 100);

	static const std::string s_names[6]{ "Walrus", "Buster", "Miscni", "Helliarc", "Blansiker", "Mystic" };
	static const std::string s_roars[6]{ "I'm gay", "Rock me Hard", "slap me like a queer", "Pistol Whip me", "I want a Mushroom Stamp", "I have Limp dick" };

	return Monster(type, s_names[getRandomNumber(0, 5)], s_roars[getRandomNumber(0, 5)], hitPoints);
}

int MonsterGenerator::getRandomNumber(int min, int max)
{
	static const double fraction = 1.0 / (static_cast<double>(RAND_MAX));
	return static_cast<int>(rand() * fraction * (max - min + 1) + min);
}
#include "Monster.h"


std::string Monster::getTypeString()
{	
	switch(m_Type)
	{
	case Monster::DRAGON: return "Dragon";
	case Monster::GOBLIN: return "Goblin";
	case Monster::OGRE: return "Ogre";
	case Monster::ORC: return "Orc";
	case Monster::SKELETON: return "Skeleton";
	case Monster::TROLL: return "Troll";
	case Monster::VAMPIRE: return "Vampire";
	case Monster::ZOMBIE: return "Zombie";
	}

	return "WAT D FAWK";
}

void Monster::print()
{
	std::cout << m_Name << " the " << getTypeString() << " has " << m_HitPoints << " hit points and says " << m_Roar << "! \n";
}
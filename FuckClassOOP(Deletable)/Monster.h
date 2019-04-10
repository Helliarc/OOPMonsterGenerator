#pragma once
#include <string>
#include <iostream>

class Monster
{
public:
	enum MonsterType
	{
		DRAGON,
		GOBLIN,
		OGRE,
		ORC,
		SKELETON,
		TROLL,
		VAMPIRE,
		ZOMBIE,
		MAX_MONSTER_TYPES
	};

private:
	MonsterType m_Type;
	std::string m_Name;
	std::string m_Roar;
	int m_HitPoints;
	   
public:
	Monster(MonsterType type, std::string name, std::string roar, int hitPoints) : m_Type(type), m_Name(name), m_Roar(roar), m_HitPoints(hitPoints){}

	std::string getTypeString();
	void print();
};
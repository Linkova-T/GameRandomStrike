#include <iostream>
#include <ctime>
#include "Header.h"
Hero::Hero(std::string nameinp) : name(nameinp) {}

std::string Hero::getName() { return name; }

int Hero::getHealth(){return health; }
void Hero::setHealth(int a) { health += a; }

int Hero::getStr() { return strength; }
void Hero::setStr(int a) { strength += a; }

int Hero::getLev() { return level; }
void Hero::setLev() { level++; }
int getRandomNumber(int min, int max)
{
	static const double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1.0);
	// Равномерно распределяем рандомное число в нашем диапазоне
	return static_cast<int>(rand() * fraction * (max - min + 1) + min);
}

void Hero::chekParam(){
	std::cout << "Strength = " << getStr() << "\n";
	std::cout << "Health = " << getHealth() << "\n";
	std::cout << "Level = " << getLev() << "\n";
}
void Hero::strike(Hero& otherHero) {
	int n = getHealth();
	srand(otherHero.getStr()*time(0));
	setHealth((-1) * getRandomNumber(-10, 10));
	otherHero.setHealth((-1) * getRandomNumber(-10, 10));
	std::cout << "New health = " << getHealth()<<"\n";
	if (getHealth() < 0)
	{
		std::cout << "Hero " << getName() << "dead\n";
	}
	else if (getHealth() == 0)
	{
		std::cout << "You are in danger!!!!!!\n";
	}
	else if (getHealth() > n+2)
	{
		setLev();
		std::cout << "NEW LEVEL: " << getLev() <<"\n";
		n = getHealth();
	}
	//for other Hero
	if (otherHero.getHealth() < 0)
	{
		std::cout << "Hero " << otherHero.getName() << "dead\n";
	}
	else if (getHealth() > 10)
	{
		otherHero.setLev();
		n = getHealth();
	}
}

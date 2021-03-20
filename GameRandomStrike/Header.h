#pragma once
#include<iostream>
class Hero
{
public:
	Hero(std::string nameinp);

	std::string getName();
	int getStr();
	void setStr(int a);
	int getLev();
	void setLev();
	int getHealth();
	void setHealth(int a);
	void strike(Hero& otherHero);
	void chekParam();
protected:
	int strength = 10;
	int health = 15;										
	int level = 1;						
	std::string name;
};

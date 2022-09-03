#include <iostream>
#include <string>
#include "Log.h"

class Printable
{
public:
	virtual std::string GetClassName() = 0;
};

class Entity : public Printable
{
public:
	std::string GetClassName() override { return "Entity"; }
};

class Player : public Entity
{
	std::string GetClassName() override { return "Player"; }
};

void Print(Printable* obj)
{
	std::cout << obj->GetClassName() << std::endl;
}

int main()
{
	Entity* entity = new Entity();
	Print(entity);

	Entity* player = new Player();
	Print(player);


	delete entity;
	delete player;
	std::cin.get();
}
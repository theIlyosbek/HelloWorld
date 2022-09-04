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
public:
	std::string GetClassName() override { return "Player"; }
};

void Print(Printable* obj)
{
	std::cout << obj->GetClassName() << std::endl;
}

void PrintString(const std::string& string)
{
	std::cout << string << std::endl;
}

int main()
{
	std::string name = std::string("Ilyosbek") + " hello!";
	PrintString(name);

	std::cin.get();
}
#include <iostream>
#include <string>
#include "Log.h"

class Example
{
public:
	Example()
	{
		std::cout << "Created Entity!" << std::endl;
	}

	Example(int x)
	{
		std::cout << "Created Entity with " << x << "!" << std::endl;
	}
};

class Entity
{
private:
	std::string m_Name;
	Example example;
public:
	Entity()
		: m_Name("Unknown"), example(8)
	{

	}

	Entity(const std::string& name)
		: m_Name(name)
	{

	}

	const std::string& GetName() const { return m_Name; }
};

int main()
{
	int a = 2;
	int* b = new int[50];

	Entity* e = new Entity();

	delete e;
	delete[] b;

	std::cin.get();
}
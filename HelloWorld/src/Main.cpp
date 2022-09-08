#include <iostream>
#include <string>
#include "Log.h"

class Entity
{
private:
	std::string m_Name;
	int m_Age;
public:
	explicit Entity(const std::string& name) // constructor which takes name is explicit, which means implicit conversation won't work!
		: m_Name(name), m_Age(-1)
	{

	}
	explicit Entity(int age)				 // constructor which takes age is explicit, which means implicit conversation won't work!
		: m_Name("Unknown"), m_Age(age)
	{

	}

	const std::string& GetName() const { return m_Name; }
};

int main()
{
	Entity a("Cherno");					// explicit conversation, this line will work
	Entity b(22);						// explicit conversation, this line will work
																
	Entity c = std::string("Cherno");   // implicit conversation, this line will be fail
	Entity d = 22;					    // implicit conversation, this line will be fail

	std::cin.get();
}
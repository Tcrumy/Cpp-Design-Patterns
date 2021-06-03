#include "Singleton.h"
#include <iostream>


Singleton Singleton::m_Instance;

Singleton& Singleton::Instance()
{
	return m_Instance;
}

void Singleton::displayCount()
{
	std::cout << "Count is: " << counter << std::endl;
}

void Singleton::incrementCount()
{
	counter++;
}


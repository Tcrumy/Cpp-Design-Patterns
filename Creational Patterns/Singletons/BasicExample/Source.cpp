#include "Singleton.h"
#include <iostream>

int main() {
	
	// Singleton reference can be created
	Singleton &s = Singleton::Instance();

	std::cout << "Using Singleton &s = Singleton::Instance()\n";
	s.displayCount();
	s.incrementCount();
	s.displayCount();

	// Or the singleton can be accessed using static instance method
	std::cout << "\nUsing Singleton::Instance().somemethod() \n";
	Singleton::Instance().displayCount();
	Singleton::Instance().incrementCount();
	Singleton::Instance().displayCount();



	// manual creation of an instance cannot be done, Compiler error
	//Singleton s1;

	return 0;
}
#include "ConcreteDecoratorA.h"
#include <iostream>

void ConcreteDecoratorA::Operation()
{
	std::cout << "[ConcreteDecoratorA] Operation Invoked\n";
	Decorator::Operation();
}

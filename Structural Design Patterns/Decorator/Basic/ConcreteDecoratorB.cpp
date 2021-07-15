#include "ConcreteDecoratorB.h"
#include <iostream>

void ConcreteDecoratorB::Operation()
{
	std::cout << "[ConcreteDecoratorB] Operation invoked\n";
	Decorator::Operation();
}

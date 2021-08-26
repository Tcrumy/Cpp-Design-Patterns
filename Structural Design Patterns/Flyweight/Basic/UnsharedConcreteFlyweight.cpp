#include "UnsharedConcreteFlyweight.h"
#include <iostream>

void UnsharedConcreteFlyweight::Operation(int extrinsic)
{
	std::cout << "Internal State: " << m_InternalState << std::endl;
	std::cout << "Extrinsic State: " << extrinsic << std::endl;
}

#include "Abstraction.h"
#include "ConcreteImplementor.h"
#include "ConcreteImplementorB.h"
#include "RefinedAbstraction.h"
#include <memory>

int main()
{
	ConcreteImplementor impl;
	auto p = std::make_unique<RefinedAbstraction>(&impl);
	p->Operation();
	
	ConcreteImplementorB implB;
	auto q = std::make_unique<RefinedAbstraction>(&implB);
	q->Operation();
}
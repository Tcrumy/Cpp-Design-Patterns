#include "FlyweightFactory.h"
#include "Flyweight.h"
#include "ConcreteFlyweight.h"
#include "UnsharedConcreteFlyweight.h"

int main()
{
	int extrinsicState = 1;
	FlyweightFactory factory;

	auto f1 = factory.GetFlyweight(1);
	auto f2 = factory.GetFlyweight(1);
	auto f3 = factory.GetFlyweight(1);

	f1->Operation(extrinsicState++);
	f2->Operation(extrinsicState++);
	f3->Operation(extrinsicState++);

	return 0;
}
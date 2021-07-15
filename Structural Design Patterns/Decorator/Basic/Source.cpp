#include "Component.h"
#include "ConcreteComponent.h"
#include "ConcreteDecoratorA.h"
#include "ConcreteDecoratorB.h"

int main()
{
	ConcreteComponent component{};
	ConcreteDecoratorA decA{ &component };

	//decA.Operation();

	ConcreteDecoratorB decB{ &decA };
	decB.Operation();

	return 0;
}
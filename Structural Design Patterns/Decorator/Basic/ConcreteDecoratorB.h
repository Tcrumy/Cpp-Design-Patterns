#pragma once
#include "Component.h"
#include "Decorator.h"
#include<memory>
class ConcreteDecoratorB: public Decorator
{

public:
	ConcreteDecoratorB(Component* ptr) : Decorator{ ptr }
	{};

	void Operation() override;
};


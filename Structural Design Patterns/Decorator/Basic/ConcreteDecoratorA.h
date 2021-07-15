#pragma once
#include "Component.h"
#include "Decorator.h"
#include <memory>
class ConcreteDecoratorA : public Decorator
{

public:
    ConcreteDecoratorA(Component* ptr) : Decorator{ ptr }
    {};

    void Operation() override;

};


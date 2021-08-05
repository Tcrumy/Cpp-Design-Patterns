#pragma once
#include "Implementor.h"

// A simple concrete implementation that inherits from the Implementor
// Base class. OperationImpl will print a simple message to the console
class ConcreteImplementor :
    public Implementor
{
public:
    void OperationImpl();
};


#pragma once

// Implementor is the base class for the Implementation heirarchy
// Abstraction class' will be able to use any concrete implementation
// through a pointer to the Implementor class
class Implementor
{
public:
	virtual void OperationImpl() = 0;
	virtual ~Implementor() = default;
};


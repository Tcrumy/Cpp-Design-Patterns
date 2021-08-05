#pragma once
#include "Implementor.h"

// Abstraction is the base class for the abstraction heirarchy. It provides
// a protected pointer to Implementor that will be the bridge between the
// abstraction and implmentation heirarchies. 
class Abstraction
{

protected:

	// Bridge between abstraction and implementation
	Implementor* m_pImplementor{};

public:
	explicit Abstraction(Implementor* m_p_Implementor) :m_pImplementor(m_p_Implementor)
	{}

	virtual void Operation() = 0;
	virtual ~Abstraction() = default;
};


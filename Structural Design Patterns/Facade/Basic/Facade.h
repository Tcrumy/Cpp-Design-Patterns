#pragma once
#include "A.h"
#include "B.h"
#include "C.h"
#include <memory>

//******************************************************************
// The Facade class simplifies interaction with the many subsystems*
// that it has access too                                          *
//******************************************************************
class Facade
{
	//************************************************************
	// These pointers are the subsystems that the Facade controls*
	//************************************************************
	std::unique_ptr<A> m_pA;
	std::unique_ptr<B> m_pB;
	std::unique_ptr<C> m_pC;

public:

	Facade();
	~Facade();

	//**************************************************************
	// Use calls the methods in the subsyetems needed to accomplish*
	// the task that is required by the user                       *
	//**************************************************************
	void Use();

};


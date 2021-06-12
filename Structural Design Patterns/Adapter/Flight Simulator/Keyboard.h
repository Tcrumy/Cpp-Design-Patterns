#pragma once
#include "Input.h"
#include <random>

//***************************************************************
// The Keyboard class represents an input device that a user    *
// can use to control the plane through the Input interface     *
// This class will not actually take input from a keyboard      *
// instead, it will randomly return true or false values from   *
// its member methods that will simulate keyboard input from    *
// the user. This class will not require an adpter because      *
// Keys can be mapped directly to methods in the Input interface*
//***************************************************************
class Keyboard : public Input
{

	int num = rand();

	//*****************************************************
	// m_Engine data member will be used to  generate     *
	// random numbers to return true false values from the*
	// SimulateInput method                               *
	//*****************************************************
	std::default_random_engine m_Engine{ num };

	//****************************************************
	// SimulateInput will return random true false values*
	// using the random engine's random numbers and the  *
	// bernoulli distribution                            *
	//****************************************************
	bool SimulateInput();

public:

	//*******************************************************
	// These four methods will return true false values     *
	// that are aquired via call to the SimulateInput method*
	//*******************************************************
	bool Up() override;
	bool Down() override;
	bool Left() override;
	bool Right() override;
};


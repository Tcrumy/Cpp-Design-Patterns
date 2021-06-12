#pragma once
#include "Target.h"
#include "Adaptee.h"

//***********************************************************
// The adapter class inherits the Target class interface    *
// and the Adaptee implementation to allow the client access*
// to the adptee's functionality                            *
//***********************************************************
class Adapter : public Target, public Adaptee
{
	//**************************************************************
	// Inheritance is used in this implementation, but uncommenting*
	// the Adaptee data member below accomplishes the same thing   *
	// using composition instead.                                  *
	//**************************************************************
	//Adaptee m_Adaptee;

public:

	//**********************************************
	// The request method will invoke the adaptee's* 
	// specificRequest member method               *
	//**********************************************
	void Request() override;
};


#pragma once

//*********************************************************************
// Adaptee is the class that must be adapted from in order for the    *
// client to with their interface. It serves as the original interface*
// that must be adapted from                                          *
//*********************************************************************
class Adaptee
{
public:

	//*******************************************************
	// spectficRequest is the method that the client invokes*
	// through the Target interface using the adapter class *
	//*******************************************************
	void specificRequest();
};


#include "Adapter.h"
#include <iostream>

void Adapter::Request()
{
	std::cout << "[Adapter] Calling SpecificRequest\n";
	specificRequest();

	//*******************************************************
	// Uncomment the line below, and comment our the call to*
	// specificRequest above if using composition instead of*
	// inheritance                                          *
	//*******************************************************
	//m_Adaptee.specificRequest();
}

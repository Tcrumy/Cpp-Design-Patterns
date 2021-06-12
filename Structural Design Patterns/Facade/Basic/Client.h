#pragma once
#include "Facade.h"
#include <memory>

//*****************************************************************
// The Client class is the interface that the user has access too.*
// It will provide a clean way to interact with all of the        *
// systems controlled by the Facade                               *
//*****************************************************************
class Client
{
	//********************************************************************
	// The Facade pointer will allow easy control of the subsystems that *
	// may have many individual components                               *
	//********************************************************************
	std::unique_ptr<Facade> m_pFacade;

public:
	Client();
	~Client();

	//*******************************************************
	// Invoke will call the use() method of the Facade class*
	//*******************************************************
	void Invoke();
};


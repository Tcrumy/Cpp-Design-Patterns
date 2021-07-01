#pragma once

//**********************************************************************
// Subject is an abstract base class from which real and proxy subjects*
// will inherit from. It will be the client interface                  *
//**********************************************************************
class Subject
{

public:
	virtual void Request() = 0;
	virtual ~Subject() = default;
};


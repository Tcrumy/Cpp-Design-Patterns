#pragma once

//******************************************************************
// The target class is the interface that the client has access to *
// It is the class that must be adapted too in order for the client*
// to use the adaptee                                              *
//******************************************************************
class Target
{
public:
	virtual void Request() = 0;
	virtual ~Target() = default;
};


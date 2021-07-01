#pragma once
#include "Subject.h"

//*************************************************************
// RealSubject is the class the client wants access to. A user*
// can create an instance of this class directly, or they can *
// create an instance of the ProxySubject to avoid creating an*
// instance until ProxySubject.Request() is invoked           *
//*************************************************************
class RealSubject : public Subject
{
public:
    virtual void Request() override;


};


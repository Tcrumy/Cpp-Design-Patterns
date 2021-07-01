#pragma once
#include "Subject.h"
#include "RealSubject.h"
#include "iostream"
#include "memory"

//*******************************************************************
// ProxySubject will allow the user access to the RealSubject class *
// without creating an instance of RealSubject unless the Request() *
// method is invoked                                                *
//*******************************************************************
class ProxySubject : public Subject
{

    std::unique_ptr<Subject> m_PRealSubject;

public:
    ProxySubject();
    virtual void Request() override;
};


#include "ProxySubject.h"

ProxySubject::ProxySubject()
{
	m_PRealSubject = std::make_unique<RealSubject>();
}

void ProxySubject::Request()
{

	std::cout << "[ProxySubject] Creating RealSubject\n";

	std::cout << "[ProxySubject] additional behavior\n";
	m_PRealSubject->Request();
}



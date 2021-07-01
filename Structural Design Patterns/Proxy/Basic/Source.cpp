#include "ProxySubject.h"
#include "RealSubject.h"
#include "Subject.h"

int main()
{
	std::unique_ptr<Subject> S = std::make_unique<RealSubject>();;

	S->Request();
	std::cout << "\n\n\n";

	std::unique_ptr<Subject> P = std::make_unique<ProxySubject>();;

	P->Request();

	return 0;
}
#include "Target.h" 
#include "Adapter.h"

//***************************************************
// The Client function accepts a pointer to a Target*
// and invokes the request method                   *
//***************************************************
void Client(Target* pTarget)
{
	pTarget->Request();
}

int main() {

	Adapter a;

	// The adaptee's specificRequest method can be called through
	// the adapters request method, of the client function
	a.Request();
	Client(&a);

	return 0;
}
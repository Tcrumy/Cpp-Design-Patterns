#include "Client.h"

Client::Client()
{
	m_pFacade = std::make_unique<Facade>();
}

Client::~Client()
{
}

void Client::Invoke()
{
	m_pFacade->Use();
}

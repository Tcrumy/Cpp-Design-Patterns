#pragma once
#include "InputStream.h"

// The InputDecorator will be the base class for all decorators for InputStream
// The InputStream interface is inherited, and InputStream is composed with
// InputDecorater. This allows InputDecorator to call any of InputStream's
// derived class' methods within InputDecoraters methods
class InputDecorator : public InputStream
{
	InputStream* m_pIS{};

public:

	InputDecorator(InputStream* pIs) : m_pIS{ pIs } 
	{	}

	bool Read(std::string& text) override = 0;
	void Close() override = 0;
};




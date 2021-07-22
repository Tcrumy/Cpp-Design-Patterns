#pragma once
#include "OutputStream.h"

// OutputDecorator will be the base class for all OutputStream decorators.
// The OutputStream interface is inherited, and an OutputStream pointer is 
// composed allowing OutputDecorator to call OutputStream methods though the
// pointer
class OutputDecorator :	public OutputStream
{
	
	OutputStream* m_pOS{};

public:

	OutputDecorator(OutputStream* pOs): m_pOS{ pOs } 
	{	}

	void Write(const std::string& text) override = 0;
	void Close() override = 0;
};


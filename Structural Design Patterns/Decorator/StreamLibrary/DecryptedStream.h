#pragma once
#include "FileInputStream.h"
#include "InputDecorator.h"

// DecryptedInputStream is a decorator for InputStream. It uses a basic formula to
// decrypt text that is given to the Read method.
class DecryptedStream :	public InputDecorator
{
public:


	DecryptedStream(InputStream* pIs): InputDecorator{ pIs } 
	{	}

	bool Read(std::string& text) override;
	void Close() override;
};


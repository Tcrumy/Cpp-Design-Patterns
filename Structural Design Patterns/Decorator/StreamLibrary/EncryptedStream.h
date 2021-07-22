#pragma once
#include "FileOutputStream.h"
#include "OutputDecorator.h"

// EncryptedStream is a decorator for OutputStream. It will accept text in it's
// write method and will encyrpt the text usign a basic formula.
class EncryptedStream :	public OutputDecorator
{
public:

	EncryptedStream(OutputStream* pOs) : OutputDecorator{ pOs } 
	{	}

	void Write(const std::string& text) override;
	void Close() override;
};


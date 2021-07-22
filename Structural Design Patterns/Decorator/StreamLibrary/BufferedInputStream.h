#pragma once
#include "FileInputStream.h"
#include "InputDecorator.h"

// BufferedInputStream is a decorator for InputStream. This class will not actually
// implement stream buffering as that would be complex and this class is meant to be
// an example of how the decorator class is used, not how buffering is implemented.
class BufferedInputStream :	public InputDecorator
{
public:

	BufferedInputStream(InputStream* pIs)
		: InputDecorator{ pIs } {
	}

	bool Read(std::string& text) override;
	void Close() override;
};


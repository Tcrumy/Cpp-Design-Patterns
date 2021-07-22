#pragma once
#include "FileInputStream.h"
#include "InputDecorator.h"

// DecompressInputStream is a decorator for the InputStream class. It will
// decompress text given to it's read method
class DecompressedInputStream : public InputDecorator
{
public:

	DecompressedInputStream(InputStream* pIs): InputDecorator{ pIs } 
	{	}

	bool Read(std::string& text);
	void Close();
};


#pragma once
#include "OutputStream.h"
#include "FileOutputStream.h"
#include "OutputDecorator.h"


// CompressedOutputStream is a decorator for the OutputStream class.
// Text given to the Write method will be compressed and then written
// to an OutputStream.
class CompressedOutputStream : public OutputDecorator
{
public:
	CompressedOutputStream(OutputStream* pOs) : OutputDecorator{ pOs } 
	{	}

	void Write(const std::string& text);
	void Close();
};


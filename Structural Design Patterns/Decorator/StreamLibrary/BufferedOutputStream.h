#pragma once
#include "FileOutputStream.h"
#include "OutputDecorator.h"


// BufferedOutputStream is a decorator for OutputStream. This class will not actually
// implement stream buffering as that would be complex and this class is meant to be
// an example of how the decorator class is used, not how buffering is implemented.
class BufferedOutputStream :public OutputDecorator
{

public:


	BufferedOutputStream(OutputStream* pOs)	: OutputDecorator{ pOs }
	{	}

	void Write(const std::string& text) override;
	void Close() override;
};


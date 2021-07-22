#pragma once
#include <string>

//Interface for input stream handling
class InputStream
{
public:
	virtual bool Read(std::string& text) = 0;
	virtual void Close() = 0;
	virtual ~InputStream() = default;
};


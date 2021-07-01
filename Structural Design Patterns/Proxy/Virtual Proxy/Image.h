#pragma once
#include <string>

class Image
{
	std::string m_FileName;
protected:
	void setFileName(const std::string& fileName);

public:
	Image() = default;
	Image(const std::string& fileName);

	const std::string& getFileName() const;
	virtual ~Image() = default;
	virtual void display() = 0;
	virtual void load() = 0;
	virtual void load(const std::string & fileName) = 0;

};


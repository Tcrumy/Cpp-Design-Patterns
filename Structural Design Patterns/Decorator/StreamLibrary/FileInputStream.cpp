#include "FileInputStream.h"

FileInputStream::FileInputStream() : m_Reader() {};


FileInputStream::FileInputStream(const std::string& fileName)
{
	m_Reader.open(fileName);
	if (!m_Reader)
	{
		throw std::runtime_error{ "Could not open the file for reading" };
	}
}

FileInputStream::~FileInputStream()
{
	this->Close();
}

bool FileInputStream::Read(std::string& text) 
{
	text.clear();
	std::getline(m_Reader, text);
	return !text.empty();
}

void FileInputStream::Close() {
	if (m_Reader.is_open()) {
		m_Reader.close();
	}
}

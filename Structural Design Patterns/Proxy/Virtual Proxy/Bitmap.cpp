#include "Bitmap.h"
#include <fstream>
#include <iostream>
#include <thread>
#include <stdexcept>

Bitmap::Bitmap(const std::string& fileName) : Image{fileName}
{
}

void Bitmap::display()
{
	std::cout << m_Buffer;
}

void Bitmap::load()
{
	m_Buffer.clear();
	std::ifstream file{ getFileName() };

	if (!file)
	{
		throw std::runtime_error{ "Failed to open file" };
	}

	using namespace std::chrono_literals;
	std::string line{};
	std::cout << "Loading bitmap[";

	while (std::getline(file, line))
	{
		m_Buffer += line + "\n";
		std::this_thread::sleep_for(100ms);
		std::cout << ".";
	}

	std::cout << "] Done\n";
}

void Bitmap::load(const std::string& fileName)
{
	setFileName(fileName);
	load();
}

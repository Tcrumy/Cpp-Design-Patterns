#pragma once
#include "Image.h"
#include <string>

class Bitmap : public Image
{
private:
	std::string m_Buffer{};

public:
	Bitmap() = default;
	Bitmap(const std::string& fileName);

	void display() override;
	void load() override;
	void load(const std::string& fileName) override;




};


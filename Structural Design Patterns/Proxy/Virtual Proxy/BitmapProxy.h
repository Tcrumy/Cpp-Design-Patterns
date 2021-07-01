#pragma once
#include "Image.h"
#include "Bitmap.h"
#include <string>
#include <memory>

class BitmapProxy : public Image
{
private:
	std::unique_ptr<Bitmap> m_pBitmap;
	std::string m_FileName;
	bool m_IsLoaded{false};

public:
	BitmapProxy();
	BitmapProxy(const std::string& fileName);
	void display() override;
	void load() override;
	void load(const std::string& fileName) override;


};


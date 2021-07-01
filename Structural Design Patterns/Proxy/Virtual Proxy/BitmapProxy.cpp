#include "BitmapProxy.h"
#include <iostream>

BitmapProxy::BitmapProxy() :BitmapProxy{ "" } {

}


BitmapProxy::BitmapProxy(const std::string& fileName) {
	m_pBitmap = std::make_unique<Bitmap>(fileName);
}


void BitmapProxy::display()
{
	if (!m_IsLoaded)
	{
		std::cout << "[Proxy] loading bitmap\n";

		if (m_FileName.empty())
		{
			m_pBitmap->load();
		}
		else
		{
			m_pBitmap->load(m_FileName);
		}
	}

	m_pBitmap->display();
}

void BitmapProxy::load()
{
	m_FileName.clear();
}

void BitmapProxy::load(const std::string& fileName)
{
	m_FileName = fileName;
}

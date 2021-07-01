#include <memory>
#include <iostream>
#include "Bitmap.h"
#include "BitmapProxy.h"

int main()
{
	std::unique_ptr<Image> P = std::make_unique < BitmapProxy> ("Smiley.txt");

	P->load("Smiley.txt");
	P->display();

	return 0;
}
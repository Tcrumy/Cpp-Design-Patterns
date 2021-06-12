#include "Projector.h"
#include <iostream>

void Projector::on()
{
	std::cout << "Projector has been turned on\n";
}

void Projector::off()
{
	std::cout << "Projector has been turned off\n";
}

void Projector::tvMode()
{
	std::cout << "Projector playing in tv mode\n";
}

void Projector::wideScreenMode()
{
	std::cout << "Projector playing in tv widescreen mode\n";
}

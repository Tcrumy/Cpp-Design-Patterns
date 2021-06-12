#include "Tuner.h"
#include "Tuner.h"
#include <iostream>

void Tuner::on()
{
	std::cout << "Tuner on\n";
}

void Tuner::off()
{
	std::cout << "Tuner off\n";
}

void Tuner::setAM()
{
	std::cout << "Tuner set to AM\n";
}

void Tuner::setFM()
{
	std::cout << "Tuner set to FM\n";
}

void Tuner::setFrequency()
{
	std::cout << "Frequency Adjusted\n";
}

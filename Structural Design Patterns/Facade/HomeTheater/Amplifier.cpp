#include "Amplifier.h"
#include <iostream>

void Amplifier::on()
{
	std::cout << "Amplifier on\n";
}

void Amplifier::off()
{
	std::cout << "Amplifier off\n";
}

void Amplifier::setStreamingService()
{
	std::cout << "Streaming service set\n";
}

void Amplifier::setStereoSound()
{
	std::cout << "Stereo sound set\n";
}

void Amplifier::setSurroundSound()
{
	std::cout << "Surround sound set\n";
}

void Amplifier::setTuner()
{
	std::cout << "Tuner Set\n";
}

void Amplifier::setVolume()
{
	std::cout << "Volume Set\n";
}

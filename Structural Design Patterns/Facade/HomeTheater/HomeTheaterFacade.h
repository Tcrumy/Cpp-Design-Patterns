#pragma once
#include "Amplifier.h"
#include "PopcornPopper.h"
#include "Projector.h"
#include "Screen.h"
#include "StreamingPlayer.h"
#include "TheaterLights.h"
#include "Tuner.h"
#include <memory>

class HomeTheaterFacade
{
private:
	std::unique_ptr<Amplifier> amp;
	std::unique_ptr<PopcornPopper> popcornPopper;
	std::unique_ptr<Projector> projector;
	std::unique_ptr<Screen> screen;
	std::unique_ptr<StreamingPlayer> streamer;
	std::unique_ptr<TheaterLights> lights;
	std::unique_ptr<Tuner> tuner;

public:
	HomeTheaterFacade();
	void turnSystemOn();
	void turnSystemOff();


};


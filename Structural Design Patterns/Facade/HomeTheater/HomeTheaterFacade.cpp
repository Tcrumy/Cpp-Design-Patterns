#include "HomeTheaterFacade.h"
#include <iostream>

HomeTheaterFacade::HomeTheaterFacade()
{
	amp = std::make_unique<Amplifier>();
	popcornPopper = std::make_unique<PopcornPopper>();
	projector = std::make_unique<Projector>();
	screen = std::make_unique<Screen>();
	streamer = std::make_unique<StreamingPlayer>();
	lights = std::make_unique<TheaterLights>();
	tuner = std::make_unique<Tuner>();

}

void HomeTheaterFacade::turnSystemOn()
{
	std::cout << "System is being turned on\n\n";

	popcornPopper->on();
	popcornPopper->pop();
	lights->dim();
	screen->down();
	projector->on();
	projector->wideScreenMode();
	amp->on();
	amp->setStreamingService();
	amp->setSurroundSound();
	amp->setVolume();
	streamer->on();
	streamer->play();

}

void HomeTheaterFacade::turnSystemOff()
{
	std::cout << "\n\nSystem is being turned off\n\n";

	popcornPopper->off();
	lights->on();
	screen->up();
	projector->off();
	amp->off();
	streamer->stop();
	streamer->off();
}

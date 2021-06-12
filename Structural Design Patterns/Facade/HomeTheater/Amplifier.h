#pragma once
#include "Tuner.h"
#include "StreamingPlayer.h"

class Amplifier
{
private:
	

public:
	Amplifier() = default;
	~Amplifier() = default;
	void on();
	void off();
	void setStreamingService();
	void setStereoSound();
	void setSurroundSound();
	void setTuner();
	void setVolume();


};


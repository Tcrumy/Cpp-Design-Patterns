#pragma once
#include "Amplifier.h"

class StreamingPlayer
{
private:

public:

	StreamingPlayer() = default;
	~StreamingPlayer() = default;
	void on();
	void off();
	void pause();
	void play();
	void setSurroundAudio();
	void setTwoChannelAudio();
	void stop();
};


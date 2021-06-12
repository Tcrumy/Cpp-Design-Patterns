#include "StreamingPlayer.h"
#include <iostream>

void StreamingPlayer::on()
{
	std::cout << "Streaming player on\n";
}

void StreamingPlayer::off()
{
	std::cout << "Streaming player off\n";
}

void StreamingPlayer::pause()
{
	std::cout << "Streaming player paused\n";
}

void StreamingPlayer::play()
{
	std::cout << "Streaming player playing\n";
}

void StreamingPlayer::setSurroundAudio()
{
	std::cout << "Audio set to surround\n";
}

void StreamingPlayer::setTwoChannelAudio()
{
	std::cout << "Audio set to stereo\n";
}

void StreamingPlayer::stop()
{
	std::cout << "Streaming player stopped\n";
}

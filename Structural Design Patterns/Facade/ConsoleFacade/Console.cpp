#include "Console.h"
#include <stdexcept>

Console Console::m_Instance;

WORD Console::GetColor(Color color)
{
	switch (color)
	{
	case Color::DARKBLUE:
		return FOREGROUND_BLUE;

	case Color::DARKGREEN:
		return FOREGROUND_GREEN;

	case Color::DARKCYAN:
		return FOREGROUND_GREEN | FOREGROUND_BLUE;

	case Color::DARKRED:
		return FOREGROUND_RED;	
	
	case Color::DARKMAGENTA:
		return FOREGROUND_RED | FOREGROUND_BLUE;

	case Color::DARKYELLOW:
		return FOREGROUND_RED | FOREGROUND_GREEN;
		
	case Color::DARKGREY:
		return FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE;

	case Color::GREY:
		return FOREGROUND_INTENSITY;

	case Color::BLUE:
		return FOREGROUND_INTENSITY | FOREGROUND_BLUE;

	case Color::GREEN:
		return FOREGROUND_INTENSITY | FOREGROUND_GREEN;

	case Color::CYAN:
		return FOREGROUND_INTENSITY | FOREGROUND_GREEN | FOREGROUND_BLUE;

	case Color::RED:
		return FOREGROUND_INTENSITY | FOREGROUND_RED;
	
	case Color::MAGENTA:
		return FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_BLUE;

	case Color::YELLOW:
		return FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN;
	}

	return FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE;
}

Console::Console()
{
	m_Std = GetStdHandle(STD_OUTPUT_HANDLE);
}


void Console::Write(const std::string& text, Color color)
{
	CONSOLE_SCREEN_BUFFER_INFO bufferInfo{};

	if (!GetConsoleScreenBufferInfo(m_Std, &bufferInfo))
	{
		throw std::runtime_error{ "Error while retrieving console information" };
	}

	SetConsoleTextAttribute(m_Std, GetColor(color));
	DWORD written{};
	WriteConsoleA(m_Std, text.c_str(), text.length(), &written, nullptr);
	SetConsoleTextAttribute(m_Std, bufferInfo.wAttributes);
}

void Console::WriteLine(const std::string& text, Color color)
{
	Write(text + "\n", color);
}

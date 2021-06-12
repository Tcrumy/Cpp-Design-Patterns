#include <Windows.h>
#include <string>
#include <iostream>
#include "Console.h"
#include <vector>

int main()
{
	// The commented code below  shows what would be required in order to use
	// the windows API to change text color in the console without the console
	// class,
	/*HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_SCREEN_BUFFER_INFO csInfo{};

	if (!GetConsoleScreenBufferInfo(hConsole, &csInfo))
	{
		std::cout << "Error getting console information\n";
		return -1;
	}
	SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
	std::string text{ "Hello World!" };
	DWORD written{};
	WriteConsoleA(hConsole, text.c_str(), text.length(), &written, nullptr);
	SetConsoleTextAttribute(hConsole, csInfo.wAttributes);
	*/


	// The code below this line shows the same thing being accomplished through
	// a console class that acts as a facade for the windows API, greatly
	// simplifying the client inteface

	std::vector<Color> colorVector{ Color::DARKBLUE, Color::DARKGREEN,Color::DARKCYAN,
		                            Color::DARKRED, Color::DARKMAGENTA, Color::DARKYELLOW,
		                            Color::DARKGREY, Color::GREY, Color::BLUE, Color::GREEN, 
		                            Color::CYAN, Color::RED, Color::MAGENTA, Color::YELLOW, 
		                            Color::WHITE };


	for (auto& color : colorVector)
	{
		Console::WriteLine("Using the console class WriteLine()", color);
		//std::cout << "Back in main()\n\n";
    }

	for (auto& color : colorVector)
	{
		Console::Write("\nUsing the console class Write()", color);
		//std::cout << "\nBack in main()\n\n";
	}
	

	return 0;
}
#pragma once
#include <windows.h>
#include <string>

//***********************************************************
// Color enum class will contain the selection of colors the*
// user may choose to use for the text in the console       *
//***********************************************************
enum class Color { DARKBLUE, DARKGREEN, DARKCYAN, DARKRED, DARKMAGENTA,
				   DARKYELLOW, DARKGREY, GREY, BLUE, GREEN, CYAN, 
	               RED, MAGENTA, YELLOW, WHITE};

//*******************************************************************
// The Console class acts as a facade for the Windows API. It gives *
// users a greatly simplified interface to change colors of console *
// text and prevents the need to interact with low level c API's    *
// Class is monostate preventing multiple handles from being created*
//*******************************************************************
class Console
{
	inline static HANDLE m_Std;
	static Console m_Instance;
	static WORD GetColor(Color color);
	Console();
	

public:
	static void Write(const std::string& text, Color color = Color::WHITE);
	static void WriteLine(const std::string& text, Color color = Color::WHITE);
};


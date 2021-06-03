#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <string>


class Logger
{
	FILE *m_pStream{};
	std::string m_Tag{};

	Logger();

	// Class variable ensuring only one logger class "Eager" instance 
	static Logger m_Instance;

public:

	// Prevents user from makng copies of the Logger class
	Logger(const Logger&) = delete;
	Logger& operator =(const Logger&) = delete;

	// Only way to access Logger Constructor
	static Logger &Instance();

	~Logger();

	void writeLog(const char *pMessage);
	void setTag(const char* pTag);
};


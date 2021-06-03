#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <string>
#include <memory>
#include <mutex>

class Logger
{

	struct Deleter{

		void operator()(Logger* p) 
		{
			delete p;
		}
	};

	// thread lock must be static to be used in static Instance method
	inline static std::mutex m_threadLock;

	FILE* m_pStream{};
	std::string m_Tag{};

	Logger();

	// Class variable ensuring only one logger class "Lazy" instance 
	inline static std::unique_ptr<Logger,Deleter> m_pInstance{};

public:

	// Prevents user from makng copies of the Logger class
	Logger(const Logger&) = delete;
	Logger& operator =(const Logger&) = delete;

	// Only way to access Logger Constructor
	static Logger& Instance();

	~Logger();

	void writeLog(const char* pMessage);
	void setTag(const char* pTag);
};


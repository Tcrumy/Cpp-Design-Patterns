#include "Logger.h"

Logger::Logger()
{
	m_pStream = fopen("applog.txt", "w");

}

Logger& Logger::Instance()
{

	/* Use of double check Locking Pattern
	
	// Use Double-Check Locking pattern to prevent negative performance 
	// impact due to multiple threads calling instance at the same time
	if (m_pInstance == nullptr) 
	{
		m_threadLock.lock();

		if (m_pInstance == nullptr)
		{
			m_pInstance.reset(new Logger{});
		}

		m_threadLock.unlock();
	}

	return *m_pInstance;

	*/

	// Use of Myers Singleton
	static Logger instance;
	return instance;
}

Logger::~Logger()
{
	fclose(m_pStream);
}

void Logger::writeLog(const char* pMessage)
{
	fprintf(m_pStream, "[%s] %s\n", m_Tag.c_str(), pMessage);
	fflush(m_pStream);
}

void Logger::setTag(const char* pTag)
{
	m_Tag = pTag;
}

#include "Logger.h"
#include <thread>

void openConnection() {

	Logger& lg = Logger::Instance();
	lg.writeLog("Attempting to open a connection");
}

int main() {

	std::thread t1{ []()
		{
			Logger& lg = Logger::Instance();
			lg.setTag("192.168.1.101");
			lg.writeLog("Thread 1 has started");
		}
	};

	std::thread t2{ []()
		{
			Logger& lg = Logger::Instance();
			lg.setTag("192.168.1.102");
			lg.writeLog("Thread 2 has started");
		}
	};

	t1.join();
	t2.join();

	/*Logger& lg = Logger::Instance();
	lg.setTag("192.168.1.101");
	lg.writeLog("Application has started");
	openConnection();
	lg.writeLog("Application is shutting down");

	*/

	return 0;
}
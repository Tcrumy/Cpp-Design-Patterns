#include "Logger.h"

void openConnection() {

	Logger &lg = Logger::Instance();
	lg.writeLog("Attempting to open a connection");
}

int main() {

	Logger &lg = Logger::Instance();
	lg.setTag("192.168.1.101");
	lg.writeLog("Application has started");
	openConnection();
	lg.writeLog("Application is shutting down");


	return 0;
}
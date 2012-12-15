#include "thread.h"

/*void Thread::printError(std::string msg, int status, std::string fileName, int lineNumber) {
	std::cout << msg << " " << fileName << ":" << lineNumber <<
		"-" << strerror(status) << std::endl;
}*/

Thread::Thread() {
	IsStarted = false;
};

Thread::~Thread() {
};

bool Thread::start() {
	if(IsStarted == false) {
		IsStarted = true;
		return (pthread_create(&_thread, NULL, InternalThreadEntryFunc, this) == 0);
	} else {
		return 1;
	}
};

void Thread::join() {
	(void) pthread_join(_thread, NULL);
};

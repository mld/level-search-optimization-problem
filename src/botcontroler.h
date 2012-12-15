#include "thread.h"
#include "mutex.h"
#include "board.h"

#include <unistd.h>	// usleep
#include <string>
#include <vector>
#include <boost/regex.hpp>

#ifndef _BOTCONTROLER
#define _BOTCONTROLER

class Botcontroler : public Thread {
	private:
		bool terminate;
		Mutex *coutMutex;
		Board *board;
		std::string *bot;

	public:
		Botcontroler(Mutex* mutexObj, Board* boardObj, std::string *botObj);
		void stop();
		void InternalThreadFunc();
};
#endif

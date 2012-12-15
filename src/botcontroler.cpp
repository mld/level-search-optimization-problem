#include "botcontroler.h"

Botcontroler::Botcontroler( Mutex* mutexObj, Board* boardObj, std::string *botObj) {
	terminate = false;
	coutMutex = mutexObj;
	board = boardObj;
	bot = botObj;
}

void Botcontroler::stop() {
	terminate = true;
};

void Botcontroler::InternalThreadFunc() {
	coutMutex->lock();
	std::cout << "BotControler is running" << std::endl;
	coutMutex->unlock();

	while(!terminate) {
		usleep(100000);
	}
};

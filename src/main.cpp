#include "botcontroler.h"
#include "board.h"
#include "mutex.h"

#include <boost/regex.hpp>
#include <iostream>
#include <sstream>
#include <string>

 
int AtoI (std::string input) {
	int iout;
	std::stringstream ss(input);
	ss >> iout;
	return iout;
}

int main (int argc, char** argv) {

	/** Allocate some memory */
	Board board;
	char* bot;
	Mutex coutMutex;
	unsigned int turnLimit;
	unsigned int turn;
	std::string line;

	/** Read arguments */
	if(argc != 6) {
		std::cout << "usage: " << argv[0] << " <board x> <board y> <board z> <turn limit> <bot>" << std::endl;
		return 1;
	} else {
		board = Board(AtoI(argv[1]), AtoI(argv[2]), AtoI(argv[3]));
		turnLimit = AtoI(argv[4]);
		bot = argv[5];
	}

	
	/** Start botcontrol thread */
	//Botcontroler bc(&coutMutex, &board, &bot);
	//bc->start();

	turn = 0;
	while(turn < turnLimit) {
		/** Do one turn */

		/** Get move */
		std::getline(std::cin, line);

		/** Parse input */
		boost::smatch m;
		if(boost::regex_match(line, m, boost::regex("(add|sub|get) (\\d+) (\\d+)"))) {
			if(m[1] == "add")
				board.add(AtoI(m[2]), AtoI(m[3]));
			else if(m[1] == "sub")
				board.sub(AtoI(m[2]), AtoI(m[3]));
			else if(m[1] == "get")
				std::cout << board.get(AtoI(m[2]), AtoI(m[3])) << std::endl;
		} else {
			std::cout << "unknown command: \"" << line << "\"" << std::endl;
		}

		/** Increment turn */
		turn++;
	}

	/** Print board and statistics */
	for(unsigned int y = 0; y < board.sizeY(); y++) {
		for(unsigned int x = 0; x < board.sizeX(); x++) {
			std::cout << board.get(x, y) << "\t";
		}
		std::cout << std::endl;
	}



	/** Stop botcontroler */
	//bc->stop();
	//bc->join();

	return 0;
}

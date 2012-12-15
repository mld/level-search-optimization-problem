#include <vector>

#ifndef _BOARD
#define _BOARD

class Board {
	private:
		std::vector< std::vector < unsigned int > > b;
		unsigned int zMax;
	public:
		Board();
		Board(unsigned int x, unsigned int y, unsigned int z);
};
#endif

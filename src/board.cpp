#include "board.h"

Board::Board() {};

Board::Board(unsigned int x, unsigned int y, unsigned int z) {
	b = std::vector< std::vector< unsigned int > > (y, std::vector< unsigned int > (x));
	zMax = z;
};

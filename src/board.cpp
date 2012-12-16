#include "board.h"

Board::Board() {
	xMax = 0;
	yMax = 0;
	zMax = 0;
};

Board::Board(unsigned int x, unsigned int y, unsigned int z) {
	b = std::vector< std::vector< unsigned int > > (y, std::vector< unsigned int > (x));
	xMax = x;
	yMax = y;
	zMax = z;
};

unsigned int Board::sizeX() {
	return xMax;
}

unsigned int Board::sizeY() {
	return yMax;
}

unsigned int Board::sizeZ() {
	return zMax;
}

void Board::update(unsigned int x, unsigned int y) {
	/** Uppdate board acordingly to game rules */
};

int Board::add(unsigned int x, unsigned int y) {
	if(y < b.size()
		&& x < b[y].size()
		&& (b[y][x] + 1) != zMax) {

		b[y][x]++;
		update(x, y);
		return 1;
	}
	return 0;
};

int Board::sub(unsigned int x, unsigned int y) {
	if(y < b.size()
		&& x < b[y].size()
		&& (b[y][x] + 1) != zMax) {

		b[y][x]++;
		update(x, y);
		return 1;
	}
	return 0;
};

int Board::get(unsigned int x, unsigned int y) {
	if(y < b.size()
		&& x < b[y].size())

		return b[y][x];

	return -1;
};

bool Board::zeroed() {
	for(unsigned int y = 0; y < yMax; y++) {
		for(unsigned int x = 0; x < xMax; x++) {
			if(b[y][x] != 0)
				return false;
		}
	}
	return true;
};

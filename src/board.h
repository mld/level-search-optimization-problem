#include <vector>

#ifndef _BOARD
#define _BOARD

class Board {
	private:
		std::vector< std::vector < unsigned int > > b;
		unsigned int xMax;
		unsigned int yMax;
		unsigned int zMax;

		void update(unsigned int x, unsigned int y);

	public:
		Board();
		Board(unsigned int x, unsigned int y, unsigned int z);
		unsigned int sizeX();
		unsigned int sizeY();
		unsigned int sizeZ();
		int add(unsigned int x, unsigned int y);
		int sub(unsigned int x, unsigned int y);
		int get(unsigned int x, unsigned int y);
		bool zeroed();
};
#endif

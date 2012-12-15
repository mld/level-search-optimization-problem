level-search-optimization-problem
=================================

Level based Search Optimization Problem


Bulding dependencies
----------------------------------------
This basecode got some dependencies to handle easy text parsing.

### Boost::regex
1. Fetch a copy of the latest boost version: http://www.boost.org/  
2. Untar the archive  

		$ tar -xzvf boost_1_52_0.tar.gz   

3. Building boost::regex:  

		$ cd boost_1_52_0/libs/regex/build/  
		$ make -f gcc.mak  

4. Edit the projects Makefile to link the boost directory aswell as the newly built lib  

		...
		INC = -I../boost_1_52_0/  
		LIBS = -lpthread ../boost_1_52_0/libs/regex/build/gcc/libboost_regex-gcc-1_52.a  
		...

Build
----------------------------------------
	$ cd src/
	$ make


Usage
----------------------------------------
	$ ./lsop 10 10 10 40 ./sort-bot

CC = g++
CFLAGS = -g -Wall
INC = -I../../boost_1_52_0/
LIBS = -lpthread ../../boost_1_52_0/libs/regex/build/gcc/libboost_regex-gcc-1_52.a
PROG = lsop
SRCS = main.cpp board.cpp botcontroler.cpp thread.cpp mutex.cpp


all: $(PROG)

$(PROG):	$(SRCS)
	$(CC) $(CFLAGS) -o $(PROG) $(SRCS) $(INC) $(LIBS)

clean:
	rm -f $(PROG)

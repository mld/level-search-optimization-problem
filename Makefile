CC = g++
#CFLAGS = -Wall
PROG = dsort-game
CFLAGS = -g
INC = -I../boost_1_49_0/
LIBS = -lpthread ../boost_1_49_0/libs/regex/build/gcc/libboost_regex-gcc-1_47.a
SRCS = main.cpp board.cpp botcontroler.cpp thread.cpp mutex.cpp


all: $(PROG)

$(PROG):	$(SRCS)
	$(CC) $(CFLAGS) -o $(PROG) $(SRCS) $(INC) $(LIBS)

clean:
	rm -f $(PROG)

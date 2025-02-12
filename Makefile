CC = g++
DEBUG = -g
CFLAGS = -Wall -c $(DEBUG)
LFLAGS = -Wall $(DEBUG)

OBJS = main.o 

lcw : $(OBJS)
	$(CC) $(LFLAGS) $(OBJS) -o lcw

main.o : main.cpp
	$(CC) $(CFLAGS) main.cpp
clean :
	rm *~

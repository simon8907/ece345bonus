CC = g++
DEBUG = -g
CFLAGS = -Wall -c $(DEBUG)
LFLAGS = -Wall $(DEBUG)

OBJS = main.o 

lcs : $(OBJS)
	$(CC) $(LFLAGS) $(OBJS) -o lcs

main.o : main.cpp
	$(CC) $(CFLAGS) main.cpp
clean :
	rm *~

CC = g++
CFLAGS = -Wall -g

DupFinder: DupFinder.o
	$(CC) $(CFLAGS) -o DupFinder DupFinder.o

DupFinder.o: DupFinder.cpp 
	$(CC) $(CFLAGS) -c DupFinder.cpp

Clean:
	rm *.o DupFinder
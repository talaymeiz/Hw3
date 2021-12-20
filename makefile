CC = gcc
AR = ar
ACTIONS = function.o
FLAGS = -g -Wall
LM = -lm
HEADER = head.h
MAIN = main.o


all: main_ran

functions.o: function.c $(HEADER)
	$(CC) $(FLAGS) -c function.c

#creat main
main_ran: $(MAIN) function.o
	$(CC) $(FLAGS) -o main_ran $(MAIN) function.o $(LM)


main.o: main.c $(HEADER)
	$(CC) $(FLAGS) -c main.c

.PHONY: clean all

clean:
	rm -f *.o *.a main_ran
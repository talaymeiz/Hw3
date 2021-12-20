CC = gcc
AR = ar
ACTIONS = function.o
FLAGS = -g -Wall
LM = -lm
HEADER = head.h
MAIN = main.o


all: stringProg

functions.o: function.c $(HEADER)
	$(CC) $(FLAGS) -c function.c

#creat main
stringProg: $(MAIN) function.o
	$(CC) $(FLAGS) -o stringProg $(MAIN) function.o $(LM)


main.o: main.c $(HEADER)
	$(CC) $(FLAGS) -c main.c

.PHONY: clean all

clean:
	rm -f *.o *.a stringProg
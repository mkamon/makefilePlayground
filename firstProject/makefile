CC=gcc
CFLAGS= -g -Wall

all: hello

hello: hello.c test.o
	$(CC) $(CFLAGS) -o hello hello.c

test.o: test.c 
	$(CC) $(CFLAGS) -c test.c -o test.o

clean: 
	rm hello test.o



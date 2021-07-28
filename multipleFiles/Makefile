CC=gcc
CFLAGS=-g -Wall
OBJS=allocator.o memtest.o
BIN=main
SUBMITNAME=projectFiles.zip

all:$(BIN)

main: $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o main

%.o: %.c 
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) -r main *.o

submit:
	$(RM) $(SUBMITNAME)
	zip $(SUBMITNAME) $(BIN)

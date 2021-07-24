CC=gcc
CFLAGS=-g -Wall

all: myapp
	
clean:
	rm *.o myapp

#### the goal is to replace following repeatative code with 
#### automatic variables  
# list.o: list.h list.c 
# 	$(CC) $(CFLAGS) -c list.c 
# tree.o: tree.h tree.c
# 	$(CC) $(CFLAGS) -c tree.c
# myapp: list.o tree.o main.c
# 	$(CC) $(CFLAGS) -o myapp main.c list.o tree.o

### one level of improvement is achieved by using $@ and $^
### the $@ is used for replacing target 
### the $^ is used for dependency list
### using above the makefile can be written as: 
# list.o: list.h list.c
# 	$(CC) $(CFLAGS) -c $^
# tree.o: tree.h tree.c 
# 	$(CC) $(CFLAGS) -c $^
# myapp: list.o tree.o main.c
# 	$(CC) $(CFLAGS) -o $@ $^

### the above can be improved by specifing a pattern rule for each '.o' extension:
%.o: %.c 
	$(CC) $(CFLAGS) -c $^

myapp: list.o tree.o main.c 
	$(CC) $(CFLAGS) -o $@ $^

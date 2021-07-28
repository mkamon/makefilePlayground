CC=gcc
CFLAGS=-g -Wall
SRCDIR=src
OBJDIR=obj
BINDIR=bin
BIN=$(BINDIR)/main
#evaluates to all .c files in SRCDIR
SRCS=$(wildcard $(SRCDIR)/*.c)
# OBJS=$(OBJDIR)/allocator.o $(OBJDIR)/memtest.o
#patern substitution: take % from 1st, make % in 2nd, for all in 3rd
OBJS=$(patsubst $(SRCDIR)/%.c, $(OBJDIR)/%.o, $(SRCS))
SUBMITNAME=projectFiles.zip

all: $(BIN)

$(BIN): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $@

$(OBJDIR)/%.o: $(SRCDIR)/%.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) -r $(BINDIR)/* $(OBJDIR)/*

submit:
	$(RM) $(SUBMITNAME)
	zip $(SUBMITNAME) $(BIN)

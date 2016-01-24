CC = gcc

CFLAGS = -std=c11 -Wall

EXE = calc

HDRS = numinput.h

LIBS = -lm

SRCS = calculator.c numinput.c

OBJS = $(SRCS:.c=.o)

$(EXE): $(OBJS) Makefile
	$(CC) $(CFLAGS) -o $@ $(OBJS) $(LIBS)

$(OBJS): $(HDRS) Makefile

clean:
	rm -f core *.o

cleanall:
	rm -f core $(EXE) *.o

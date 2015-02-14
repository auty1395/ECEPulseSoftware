EXE = puzzle0
CC  = gcc

CFLAGS = -g -Wall -o
SOURCES = main.c
OBJECTS = $(SOURCES:.c = .o)

all: $(EXE)

$(EXE): $(SOURCES)
	$(CC) $(SOURCES) $(CFLAGS) $(EXE)

clean:
	rm -f *.o $(EXE)

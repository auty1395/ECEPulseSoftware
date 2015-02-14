CC = gcc
CFLAGS = -g -Wall 
TARGET = puzzle3
OBJS = main.o add.o delete.o pass.o 

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) main.c

main.o: add.h delete.h pass.h

%.o: %.c
	${CC} ${CFLAGS} -c $< -o $@


clean:
	rm $(TARGET)
	rm -f *.o 

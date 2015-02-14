CC = gcc
CFLAGS = -g -Wall 
CLIBS  = -lcrypto
TARGET = puzzle3
OBJS   = files.o pass.o add.o encrypt.o delete.o 


all: $(TARGET)

$(TARGET): main.c $(OBJS)
	$(CC) $(CFLAGS) $(CLIBS) -o $(TARGET) $(OBJS) main.c

%.o: %.c
	$(CC) $(CFLAGS) $(CLIBS) -c $< -o $@

clean:
	rm $(TARGET)
	rm -f *.o

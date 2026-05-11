CC = gcc
CFLAGS = -Wall -g
OBJ = main.o device.o utils.o
TARGET = device_system

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(OBJ) -o $(TARGET)

main.o: main.c device.h utils.h
	$(CC) $(CFLAGS) -c main.c

device.o: device.c device.h
	$(CC) $(CFLAGS) -c device.c

utils.o: utils.c utils.h
	$(CC) $(CFLAGS) -c utils.c

clean:
	rm -f $(OBJ) $(TARGET)
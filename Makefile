CC = gcc
CFLAGS = -Iinclude -Wall
SRC = src/main.c src/player.c
OBJ = build/main.o build/player.o
TARGET = bin/game

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) -o $(TARGET) $(OBJ)

build/%.o: src/%.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf build/*.o bin/game

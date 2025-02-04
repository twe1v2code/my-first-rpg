CC = gcc
CFLAGS = -Iinclude -Wall

SRC = $(wildcard src/*.c)      
OBJ = $(patsubst src/%.c, build/%.o, $(SRC))  
TARGET = bin/game

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) -o $(TARGET) $(OBJ)

build/%.o: src/%.c
	mkdir -p build
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf build/*.o bin/game

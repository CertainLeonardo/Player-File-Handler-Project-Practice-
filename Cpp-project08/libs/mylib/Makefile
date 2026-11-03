
CC = clang
AR = ar

CCFLAGS = -g -O2 -Wall -Wextra

SRC = $(wildcard src/*.c)

OBJ = $(patsubst src/%.c, build/%.o, $(SRC))

TARGET = lib/libmylib.a

.PHONY: all clean

all: $(TARGET)

$(TARGET): $(OBJ) | lib
	$(AR) rcs $@ $^

build/%.o: src/%.c | build
	$(CC) $(CCFLAGS) -Iinclude -c $< -o $@

build:
	mkdir -p build

lib:
	mkdir -p lib

clean:
	rm -f $(OBJ) $(TARGET)
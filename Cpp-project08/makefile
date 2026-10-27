# Step 1: Tell the Makefile what compiler to use
CXX = clang++

# Step 2: Set compiler flags (warnings and optimization)
CXXFLAGS = -g -std=c++23 -O2

INCLUDE = -Iinclude

STATIC = -static -static-libgcc -static-libstdc++

# Step 3: Define the name of your final program
TARGET = bin/main.exe

# Step 4: Specify the source files for your project
SRC = src/main.cpp src/player.cpp src/enemy.cpp src/prompts.cpp src/file_handler.cpp src/array.cpp src/threads.cpp

# generate a list of all .cpp files in the src directory
SRC_2 = $(wildcard src/*.cpp)

# generate a list of all .o files in the build directory corresponding to the .cpp files in the src directory
OBJ = $(patsubst src/%.cpp, build/%.o,$(SRC))

.PHONY: all build build2 run clean clean2

all: build

# 
$(TARGET): $(OBJ) | bin
	$(CXX) $(OBJ) -o $@

# Compile each source file into an object file
build/%.o: src/%.cpp | build
	$(CXX) $(CXXFLAGS) $(INCLUDE) -c $< -o $@

# compile each object file into the final executable
build2: $(OBJ) | bin
	$(CXX) $(OBJ) -o $(TARGET)


# this is a build command that compiles the source files specified in the SRC variable into an executable file specified by the TARGET variable, using the compiler and flags defined earlier
# build: $(SRC)
#	$(CXX) $(SRC) $(CXXFLAGS) $(INCLUDE) $(STATIC) -o $(TARGET)

# this command runs the compiled program specified by the TARGET variable, allowing you to execute your C++ project after building it
run:
	./$(TARGET)

# Step 5: A task to delete the compiled program to start fresh

# this command removes the compiled executable file specified by the TARGET variable, allowing for a clean build environment
clean:
	rm -f $(TARGET)

clean2:
	rm -f $(OBJ)

CXX = clang++

C = clang

# Set compiler flags (warnings and optimization)
CXXFLAGS = -g -std=c++23 -O2

LDLIBS = -L"C:\msys64\ucrt64\lib" -lraylib -lopengl32 -lgdi32 -lwinmm

INCLUDE = -Iinclude

STATIC = -static -static-libgcc -static-libstdc++

# Define the name of your final program
TARGET = bin/main.exe

# generate a list of all .cpp files in the src directory
SRC = $(wildcard src/*.cpp)

# generate a list of all .o files in the build directory corresponding to the .cpp files in the src directory
OBJ = $(patsubst src/%.cpp, build/%.o,$(SRC))

.PHONY: all build build2 run clean clean2

all: build

$(TARGET): $(OBJ) | bin
	$(CXX) $(OBJ) $(STATIC) -o $@ $(LDLIBS)

# Compile each source file into an object file
build/%.o: src/%.cpp | build
	$(CXX) $(CXXFLAGS) $(STATIC) $(INCLUDE) -c $< -o $@

# compile each object file into the final executable
build: $(OBJ) | bin
	$(CXX) $(OBJ) -o $(TARGET) $(LDLIBS)

run:
	./$(TARGET)

clean:
	rm -f $(TARGET)

clean2:
	rm -f $(OBJ)

# Makefile for compiling the Dish program

# Compiler
CXX = g++

# Compiler flags
CXXFLAGS = -std=c++11 -Wall

# Target executable
TARGET = dishProgram

# Source files (include test.cpp here)
SRCS = Dish.cpp test.cpp

# Object files
OBJS = $(SRCS:.cpp=.o)

# Build the executable
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

# Compile the object files
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $<

# Clean the build directory
clean:
	rm -f $(OBJS) $(TARGET)

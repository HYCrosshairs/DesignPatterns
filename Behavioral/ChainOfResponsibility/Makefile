# Compiler options
CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra -pedantic

# Source files
SRCS = main.cpp BaseValidator.cpp NotEmptyValidator.cpp LengthValidator.cpp

# Object files
OBJS = $(SRCS:.cpp=.o)

# Binary output
BIN = run

# Default target
all: $(BIN)

# Link object files to create binary
$(BIN): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^

# Compile source files to object files
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean up
clean:
	rm -f $(OBJS) $(BIN)

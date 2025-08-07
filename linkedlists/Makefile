# Environment Variables - Why use them?
CC = gcc                    # Compiler (can be overridden: make CC=clang)
CFLAGS = -Wall -Wextra -std=c99  # Compiler flags (can be overridden: make CFLAGS=-O2)
TARGET = linkedlist      # Executable name (can be overridden: make TARGET=myapp)
SOURCES = main.c LinkedList.c    # Source files list
OBJECTS = $(SOURCES:.c=.o)       # Automatically converts .c to .o

# DEFAULT TARGET - This is the first target, so it runs when you just type 'make'
all: $(TARGET)

# Link object files into executable
$(TARGET): $(OBJECTS)
	$(CC) $(OBJECTS) -o $(TARGET)
	@echo "Build complete! Run with: ./$(TARGET)"

# Compile source files to object files
main.o: main.c LinkedList.h
	$(CC) $(CFLAGS) -c main.c

LinkedList.o: LinkedList.c LinkedList.h
	$(CC) $(CFLAGS) -c LinkedList.c

clean:
	rm -f $(OBJECTS) $(TARGET)
	@echo "Cleaned up!"

run: $(TARGET)
	./$(TARGET)

# This tells make these targets don't create files with these names
.PHONY: all clean run debug release 
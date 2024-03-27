OBJS	= basic_operations.o
SOURCE	= basic_operations.cpp
OUT	= basic_operations.bin
CC = g++
FLAGS = -g -c -Wall

all: $(OBJS)
	$(CC) -g $(OBJS) -o $(OUT) $(LFLAGS)

hello_world.o: basic_operations.cpp
	$(CC) $(FLAGS) basic_operations.cpp -std=c++11

clean:
	rm -f $(OBJS) $(OUT)

run: $(OUT)
	./$(OUT)
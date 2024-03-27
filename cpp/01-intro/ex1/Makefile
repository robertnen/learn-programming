OBJS	= hello_world.o
SOURCE	= hello_world.cpp
OUT	= hello.bin
CC = g++
FLAGS = -g -c -Wall

all: $(OBJS)
	$(CC) -g $(OBJS) -o $(OUT) $(LFLAGS)

hello_world.o: hello_world.cpp
	$(CC) $(FLAGS) hello_world.cpp -std=c++11

clean:
	rm -f $(OBJS) $(OUT)

run: $(OUT)
	./$(OUT)
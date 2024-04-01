OBJS	= playground.o
SOURCE	= playground.cpp
OUT	= playground.bin
CC = g++
FLAGS = -g -c -Wall

all: $(OBJS)
	$(CC) -g $(OBJS) -o $(OUT) $(LFLAGS)

playground.o: playground.cpp
	$(CC) $(FLAGS) $(SOURCE) -std=c++11

clean:
	rm -f $(OBJS) $(OUT)

run: $(OUT)
	./$(OUT)
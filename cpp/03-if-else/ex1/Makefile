OBJS	= if_basics.o
SOURCE	= if_basics.cpp
OUT	= if_basics.bin
CC = g++
FLAGS = -g -c -Wall

all: $(OBJS)
	$(CC) -g $(OBJS) -o $(OUT) $(LFLAGS)

if_basics.o: if_basics.cpp
	$(CC) $(FLAGS) $(SOURCE) -std=c++11

clean:
	rm -f $(OBJS) $(OUT)

run: $(OUT)
	./$(OUT)
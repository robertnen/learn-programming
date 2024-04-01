OBJS	= if_else_basics.o
SOURCE	= if_else_basics.cpp
OUT	= if_else_basics.bin
CC = g++
FLAGS = -g -c -Wall

all: $(OBJS)
	$(CC) -g $(OBJS) -o $(OUT) $(LFLAGS)

if_else_basics.o: if_else_basics.cpp
	$(CC) $(FLAGS) $(SOURCE) -std=c++11

clean:
	rm -f $(OBJS) $(OUT)

run: $(OUT)
	./$(OUT)
OBJS	= basic_operations_3.o
SOURCE	= basic_operations_3.cpp
OUT	= basic_operations_3.bin
CC = g++
FLAGS = -g -c -Wall

all: $(OBJS)
	$(CC) -g $(OBJS) -o $(OUT) $(LFLAGS)

basic_operations_3.o: basic_operations_3.cpp
	$(CC) $(FLAGS) basic_operations_3.cpp -std=c++11

clean:
	rm -f $(OBJS) $(OUT)

run: $(OUT)
	./$(OUT)
OBJS	= sum_and_diff.o
SOURCE	= sum_and_diff.cpp
OUT	= sum_and_diff.bin
CC = g++
FLAGS = -g -c -Wall

all: $(OBJS)
	$(CC) -g $(OBJS) -o $(OUT) $(LFLAGS)

sum_and_diff.o: sum_and_diff.cpp
	$(CC) $(FLAGS) $(SOURCE) -std=c++11

clean:
	rm -f $(OBJS) $(OUT)

run: $(OUT)
	./$(OUT)
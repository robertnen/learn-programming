OBJS	= cin_cout_basics_2.o
SOURCE	= cin_cout_basics_2.cpp
OUT	= cin_cout_basics_2.bin
CC = g++
FLAGS = -g -c -Wall

all: $(OBJS)
	$(CC) -g $(OBJS) -o $(OUT) $(LFLAGS)

cin_cout_basics_2.o: cin_cout_basics_2.cpp
	$(CC) $(FLAGS) $(SOURCE) -std=c++11

clean:
	rm -f $(OBJS) $(OUT)

run: $(OUT)
	./$(OUT)
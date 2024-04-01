OBJS	= par_impar.o
SOURCE	= par_impar.cpp
OUT	= par_impar.bin
CC = g++
FLAGS = -g -c -Wall

all: $(OBJS)
	$(CC) -g $(OBJS) -o $(OUT) $(LFLAGS)

par_impar.o: par_impar.cpp
	$(CC) $(FLAGS) $(SOURCE) -std=c++11

clean:
	rm -f $(OBJS) $(OUT)

run: $(OUT)
	./$(OUT)
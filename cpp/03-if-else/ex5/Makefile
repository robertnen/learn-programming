OBJS	= cifra_litera.o
SOURCE	= cifra_litera.cpp
OUT	= cifra_litera.bin
CC = g++
FLAGS = -g -c -Wall

all: $(OBJS)
	$(CC) -g $(OBJS) -o $(OUT) $(LFLAGS)

cifra_litera.o: cifra_litera.cpp
	$(CC) $(FLAGS) $(SOURCE) -std=c++11

clean:
	rm -f $(OBJS) $(OUT)

run: $(OUT)
	./$(OUT)
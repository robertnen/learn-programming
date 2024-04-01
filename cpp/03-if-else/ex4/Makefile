OBJS	= ultima_cifra.o
SOURCE	= ultima_cifra.cpp
OUT	= ultima_cifra.bin
CC = g++
FLAGS = -g -c -Wall

all: $(OBJS)
	$(CC) -g $(OBJS) -o $(OUT) $(LFLAGS)

ultima_cifra.o: ultima_cifra.cpp
	$(CC) $(FLAGS) $(SOURCE) -std=c++11

clean:
	rm -f $(OBJS) $(OUT)

run: $(OUT)
	./$(OUT)
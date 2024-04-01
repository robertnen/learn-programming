OBJS	= fin_fout_basics.o
SOURCE	= fin_fout_basics.cpp
OUT	= fin_fout_basics.bin
CC = g++
FLAGS = -g -c -Wall

all: $(OBJS)
	$(CC) -g $(OBJS) -o $(OUT) $(LFLAGS)

fin_fout_basics.o: fin_fout_basics.cpp
	$(CC) $(FLAGS) $(SOURCE) -std=c++11

clean:
	rm -f $(OBJS) $(OUT)

run: $(OUT)
	./$(OUT)
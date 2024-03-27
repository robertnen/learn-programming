#!/bin/bash

# recompilam in cazul in care s-a uitat
make clean
sleep 1
make
sleep 1

# executam programul
output=$(./hello.bin 2>/dev/null)

# verificam outputul
if [ "$output" = "Hello, World!" ]; then
    echo "Schimba mesajul cu 'Bye, World!'"
elif [ "$output" = "Bye, World!" ]; then
    echo "Ai terminat exercitiul 1."
else
    echo "Output-ul este gresit."
fi

make clean > /dev/null
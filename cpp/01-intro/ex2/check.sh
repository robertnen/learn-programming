#!/bin/bash

# recompilam in cazul in care s-a uitat
make clean > /dev/null
make > /dev/null

# executam programul
output=$(./basic_operations.bin  2>/dev/null)

# verificam outputul
if [ "$output" = "a + b = 8\na - b = 2\na * b = 15\na / b = 1\na % b = 2" ]; then
    echo "Rezultat gresit.'"
else
    echo "Ai terminat exercitiul 2."
fi

# make clean > /dev/null
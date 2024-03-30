#!/bin/bash

# recompilam in cazul in care s-a uitat
make clean > /dev/null
make > /dev/null

ref_result="11111"

# executam programul
output=$(./cin_basics.bin | tee /dev/tty)

last_line=$(echo "$output" | tail -n 1)

# verificam outputul
if [ "$last_line" = "$ref_result" ]; then
    echo "Ai terminat exercitiul 2."
else
    echo "Rezultat gresit."
fi
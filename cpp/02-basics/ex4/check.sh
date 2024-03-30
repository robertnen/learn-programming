#!/bin/bash

# recompilam in cazul in care s-a uitat
make clean > /dev/null
make > /dev/null


lines=(
    "n = 210"
    "30"
    "n este 20"
)

ref_result=$(printf "%s\n" "${lines[@]}")

# executam programul
output=$(./cin_cout_basics_2.bin | tee /dev/tty)

# verificam outputul
if [ "$output" = "$ref_result" ]; then
    echo "Ai terminat exercitiul 4."
else
    echo "Rezultat gresit."
fi
#!/bin/bash

# recompilam in cazul in care s-a uitat
make clean > /dev/null
make > /dev/null


lines=(
    "2 este mai mare decat 1"
    "Relatia x == 3 este adevarata."
    "Relatia este adevarata."
)

ref_result=$(printf "%s\n" "${lines[@]}")

# executam programul
output=$(./if_basics.bin)

# verificam outputul
if [ "$output" = "$ref_result" ]; then
    echo "Ai terminat exercitiul 1."
else
    echo "Rezultat gresit."
fi
#!/bin/bash

# recompilam in cazul in care s-a uitat
make clean > /dev/null
make > /dev/null


lines=(
    "Conditie falsa."
    "Maximul este: 4"
    "Minimul este: 2"
)

ref_result=$(printf "%s\n" "${lines[@]}")

# executam programul
output=$(./par_impar.bin)

# verificam outputul
if [ "$output" = "$ref_result" ]; then
    echo "Ai terminat exercitiul 2."
else
    echo "Rezultat gresit."
fi
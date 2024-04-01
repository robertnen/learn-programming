#!/bin/bash

# recompilam in cazul in care s-a uitat
make clean > /dev/null
make > /dev/null

lines=(
    "Suma este: 18"
    "Diferenta este: -8"
    "Produsul este: 65"
    "Maximul este: 13"
    "Minimul este: 5"
)

ref_result=$(printf "%s\n" "${lines[@]}")

# executam programul
output=$(./fin_fout_basics.bin | cat output.txt)

# verificam outputul
if [ "$output" = "$ref_result" ]; then
    echo "Ai terminat exercitiul 5."
else
    echo "Rezultat gresit."
fi
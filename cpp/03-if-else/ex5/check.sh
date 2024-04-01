#!/bin/bash

# recompilam in cazul in care s-a uitat
make clean > /dev/null
make > /dev/null


lines=(
    "A sau F."
    "Conditie falsa negata."
)

ref_result=$(printf "%s\n" "${lines[@]}")

# executam programul
output=$(./cifra_litera.bin)

# verificam outputul
if [ "$output" = "$ref_result" ]; then
    echo "Ai terminat exercitiul 5."
else
    echo "Rezultat gresit."
fi
#!/bin/bash

# recompilam in cazul in care s-a uitat
make clean > /dev/null
make > /dev/null


lines=(
    "IIPPPIPPPI"
)

ref_result=$(printf "%s\n" "${lines[@]}")

# executam programul
output=$(./par_impar.bin)

# verificam outputul
if [ "$output" = "$ref_result" ]; then
    echo "Ai terminat exercitiul 3."
else
    echo "Rezultat gresit."
fi
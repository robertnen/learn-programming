#!/bin/bash

# recompilam in cazul in care s-a uitat
make clean > /dev/null
make > /dev/null


lines=(
    "Ai 6 cu ultima cifra <= decat 3."
)

ref_result=$(printf "%s\n" "${lines[@]}")

# executam programul
output=$(./ultima_cifra.bin)

# verificam outputul
if [ "$output" = "$ref_result" ]; then
    echo "Ai terminat exercitiul 4."
else
    echo "Rezultat gresit."
fi
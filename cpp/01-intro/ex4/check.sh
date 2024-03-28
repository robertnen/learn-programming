#!/bin/bash

# recompilam in cazul in care s-a uitat
make clean > /dev/null
make > /dev/null

lines=(
    "max(a, b) = 5"
    "max(a, c) = 8"
    "min(a, b) = 3"
    "min(a, c) = 5"
    "min(a, max(b, c)) = 5"
    "max(a, min(b, c)) = 5"
    "Ai gasit maximul."
    "Ai gasit minimul."
)

ref_result=$(printf "%s\n" "${lines[@]}")

# executam programul
output=$(./basic_operations_3.bin 2>/dev/null)

# verificam outputul
if [ "$output" = "$ref_result" ]; then
    echo "Ai terminat exercitiul 4."
else
    echo "Rezultat gresit."
fi
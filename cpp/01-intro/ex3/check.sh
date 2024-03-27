#!/bin/bash

# recompilam in cazul in care s-a uitat
make clean > /dev/null
make > /dev/null

lines=(
    "a + c = 10.1"
    "c + a = 10.1"
    "c + d = 10.1"
    "a + b = 8"
    "a * c = 25.5"
    "c * a = 25.5"
    "c * d = 15.81"
    "a * b = 15"
    "a / b = 1"
    "a / d = 1.6129"
)

ref_result=$(printf "%s\n" "${lines[@]}")

# executam programul
output=$(./basic_operations_2.bin 2>/dev/null)

# verificam outputul
if [ "$output" = "$ref_result" ]; then
    echo "Ai terminat exercitiul 3."
else
    echo "Rezultat gresit."
fi
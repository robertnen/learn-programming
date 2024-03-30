#!/bin/bash

# recompilam in cazul in care s-a uitat
make clean > /dev/null
make > /dev/null

lines=(
    "1"
    "Aceste este un string cu linie noua"
    "Poti pune mai multe mesaje pe o linie"
    "Anaaremere"
    "9"
    "3"
    "8"
    "Simt cum ma sufoca febra"
    "Numai cand citesc algebra!"
)

ref_result=$(printf "%s\n" "${lines[@]}")

# executam programul
output=$(./cout_basics.bin 2>/dev/null)

# verificam outputul
if [ "$output" = "$ref_result" ]; then
    echo "Ai terminat exercitiul 1."
else
    echo "Rezultat gresit."
fi
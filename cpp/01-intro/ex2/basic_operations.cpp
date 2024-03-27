#include "../../utils/logs.h" // o sa vorbim mai tarziu

using namespace std;

int main() {
    int a = 5; // int inseamna numar intreg
    int b = 3;

    // afiseaza este o functie ce te va ajuta la inceput
    // TODO: inlocuieste EXPRESIE cu operatia din stanga ei. Exemplu: afiseaza("a + b", a + b);
    afiseaza("a + b", EXPRESIE); //? adunare
    afiseaza("a - b", EXPRESIE); //? scadere
    afiseaza("a * b", EXPRESIE); //? inmultire
    afiseaza("a / b", EXPRESIE); //? impartire (nu exista zecimale la numere intregi)
    afiseaza("a % b", EXPRESIE); //? modulo sau restul impartirii

    return 0;
}
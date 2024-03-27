#include "../../utils/logs.h" // o sa vorbim mai tarziu

using namespace std;

int main() {
    //! int inseamna numar intreg
    int a = 5;  //* a = 5 (fara zecimale)
    int b = 3;  //* b = 5 (fara zecimale)

    //! double inseamna numar cu zecimale (adica reale)
    double c = 5.1; //* c = 5.100000...
    double d = 3.1; //* d = 3.100000...

    //* se observa ca a = c si b = d daca aproximam

    // TODO: inlocuieste EXPRESIE cu operatia din stanga ei. Exemplu: afiseaza("a + b", a + b);
    afiseaza("a + c", EXPRESIE); //? adunare    int + double = double
    afiseaza("c + a", EXPRESIE); //? adunare double +    int = double
    afiseaza("c + d", EXPRESIE); //? adunare double + double = double
    afiseaza("a + b", EXPRESIE); //? adunare    int +    int =    int

    //* cand aduni doua numere, se va incerca automat tipul "mai mare"din expresie
    //* Exemple daca avem int a si double c si facem a + c va fi int + double deci double

    // TODO: inlocuieste EXPRESIE cu operatia din stanga ei. Exemplu: afiseaza("a * b", a * b);
    afiseaza("a * c", EXPRESIE); //? inmultire     int * double = double
    afiseaza("c * a", EXPRESIE); //? inmultire  double *    int = double
    afiseaza("c * d", EXPRESIE); //? inmultire  double * double = double
    afiseaza("a * b", EXPRESIE); //? inmultire     int *    int =    int

    // TODO: inlocuieste EXPRESIE cu operatia din stanga ei. Exemplu: afiseaza("a / b", a / b);
    afiseaza("a / b", EXPRESIE); //? impartire intre 2 numere intregi e un intreg
    afiseaza("a / d", EXPRESIE); //? impartire intre un double si un int e un numar double

    return 0;
}
#include "../../utils/logs.h"

using namespace std;

int main() {

    //! if (conditie) {
    //!    in1           <----- se executa in1 si in2 doar daca
    //!    in2                      conditie e adevarat
    //! } else {
    //!     in3          <----- se executa in3 si in4 doar daca
    //!     in4                     conditie e fals
    //!   }

    //? > - mai mare; < - mai mic
    //? >= - mai mare sau egal; <= - mai mic sau egal

    //* e fals, deci se afiseaza "Conditie falsa.\n"
    if (1 > 2) {
        cout << "Conditie adevarata.\n";
    } else {
        cout << "Conditie falsa.\n";
    }

    //TODO: fara a folosi functiile max sau min, calculeaza maximul, respectiv minimul a 3 numere
    int a = 3, b = 2, c = 4;
    int maxim, minim; //? in ele trebuie puse rezultatele

    //* Algoritm pentru maxim (minim se rezolva similar):
    //* 1. Pun in maxim pe a (primul numar)
    //* 2. Compar maxim cu b, si memorez in maxim care e mai mare
    //* 3. La fel si cu c
    //? Ai nevoie de 2 if-else-uri pentru a afla maximul

    //TODO: scrie aici rezolvarea pentru fiecare

    //* asta e pentru testare, nu modifica
    cout << "Maximul este: " << maxim << "\nMinimul este: " << minim << "\n";

    return 0;
}
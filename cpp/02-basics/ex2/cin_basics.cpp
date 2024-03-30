#include "../../utils/logs.h"

using namespace std;

int main() {

    int x, y, z; //* numar intreg
    char ch;  //? char inseamna caracter
    double r; //* numar real

    //* cin este folosit pentru a citi in terminal o variabila (sau mai multe)
    //* forma ei este: cin >> X1 >> X2 >> X3 >> ... >> Xn;
    //? X1, X2, ..., Xn sunt variabile
    //! dupa ce introduci o valoarea, trebuie sa apesi Enter
    //! cand rulezi programul, acesta va astepta input de la tastatura

    //TODO: pentru a trece mai departe, cand rulezi programul, scrie ce e trecut dupa tipul de date

    cin >> x; //* int -> 3

    //? ca sa stim cand citim o variabila, o metoda simpla este sa aratam ce asteptam
    //! cand rulezi programul, introdu valori valide
    cout << "y = "; cin >> y; //* int -> 2
    cout << "Inca un numar: "; cin >> z; //* int -> 5
    cout << "ch -> "; cin >> ch; //* char -> 'h' (nu pune ')
    cout << "orice mesaj pt input merge! <=- "; cin >> r; //* double 2.1

    //TODO: pune in loc de VARIABILA ce este cerut
    cout << "x = " << x << '\n';
    cout << "y = " << y << '\n';
    cout << "z = " << z << '\n';
    cout << "ch = " << ch << '\n';
    cout << "r = " << r << '\n';

    //! daca pentru un tip de date pui ceva ce nu ii apartine, pot aparea erori
    //! ele pot duce la leak-uri sau pot pune sistemul de calcul in pericol in anumite conditii

    //* test e o functie de verifica daca ai introdus valorea corecta pentru o variabila
    cout << test(x, 3) << test(y, 2) << test(z, 5) << test(ch, 'h') << test(r, 2.1) << '\n';

    return 0;
}
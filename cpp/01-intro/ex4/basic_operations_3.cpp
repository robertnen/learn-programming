#include "../../utils/logs.h" // o sa vorbim mai tarziu

using namespace std;

int main() {
    int a = 5;
    int b = 3;
    int c = 8;

    // TODO: inlocuieste EXPRESIE cu operatia din stanga ei. Exemplu: afiseaza("a + b", a + b);
    afiseaza("max(a, b)", EXPRESIE); //? maximul a doua numere
    afiseaza("max(a, c)", EXPRESIE); //? maximul a doua numere
    afiseaza("min(a, b)", EXPRESIE); //? minimul a doua numere
    afiseaza("min(a, c)", EXPRESIE); //? minimul a doua numere
    afiseaza("min(a, max(b, c))", EXPRESIE); //? minimul dintre primul si maximul ultimelor 2 numere
    afiseaza("max(a, min(b, c))", EXPRESIE); //? maximul dintre primul si minimul ultimelor 2 numere

    // TODO: calculeazaza maximul si minimul si pune in loc de INLOCUIESTE
    int maxim = INLOCUIESTE;
    int minim = INLOCUIESTE;

    //* Astea verifica daca ai rezultatul corect.
    checkMax(a, b, c, maxim);
    checkMin(a, b, c, minim);

    return 0;
}
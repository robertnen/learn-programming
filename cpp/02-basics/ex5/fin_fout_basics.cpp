#include "../../utils/logs.h"

using namespace std;

int main() {
    ifstream fin("input.txt");   //? folosind ifstream citim un fisier
    ofstream fout("output.txt"); //? folosind ofstream scrie in fisier

    //* Presupunem ca din fisier citim 2 numere intregi
    int x, y;

    fin >> x >> y; //? se comporta exact ca cin

    //TODO: inlocuieste OPERATIE cu ce este scris in mesaj. Dupa verifica fisierele
    fout << "Suma este: " << x + y << '\n';
    fout << "Diferenta este: " << x - y << '\n';
    fout << "Produsul este: " << x * y << '\n';
    fout << "Maximul este: " << max(x, y) << '\n';
    fout << "Minimul este: " << min(x, y) << '\n';

    //? eliberam memora (vorbim mai tarziu de asta)
    fin.close();
    fout.close();

    return 0;
}
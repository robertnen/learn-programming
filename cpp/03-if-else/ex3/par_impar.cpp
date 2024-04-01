#include "../../utils/logs.h"

using namespace std;

void par_impar(int x) { //? vom vorbi mai tarziu
    //? x % 2 este 0 => numarul este par
    //? x % 2 este 1 => numarul este impar
    //! alt rest nu exista: D = I * C + R, unde 0 <= R < I, deci 0 <= R < 2 => R poate fi 0 sau 1
    //! orice numar natural este fie par, fie impar

    //* ai un numar natural x.
    //TODO: daca e par afiseaza caracterul 'P', iar daca e impar afiseaza 'I'
    //* pune ce conditie e necesara in loc de INLOCUIESTE si in loc de EXPRESIE afisarea corecta

    //? x este numarul pe care il am acum
    if (INLOCUIESTE) //? adevarat
        EXPRESIE;
    else             //? fals
        EXPRESIE;
}

//* ignora ce e mai jos, sunt folosite la testare
int main() {
    int arr[] = {1, 1, 2, 4, 4, 5, 6, 8, 8, 9};

    for(int i = 0; i < 10; i++)
        par_impar(arr[i]);

    cout << '\n';

    return 0;
}
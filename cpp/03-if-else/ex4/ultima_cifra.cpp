#include "../../utils/logs.h"

using namespace std;

static int numarator; //? variabila globala (mereu e 0)

void ultima_cifra(int x) { //? vom vorbi mai tarziu
    //? x % 10 este ultima cifra a unui numar

    //* ai un numar natural x.
    //TODO: afiseaza cate numere au ultima cifra <= 3
    //* scrie in loc de INLOCUIESTE ce e necesar

    //? x este numarul pe care il am acum
    if (INLOCUIESTE) //? adevarat
        numarator++; //! numarator = numarator + 1; (prescurtare)
}

//* ignora ce e mai jos, sunt folosite la testare
int main() {
    int arr[] = {132, 2410, 24, 27, 12534, 19, 52, 1, 3, 13};

    for(int i = 0; i < 10; i++)
        ultima_cifra(arr[i]);

    cout << "Ai " << numarator << " cu ultima cifra <= decat 3." << '\n';

    return 0;
}
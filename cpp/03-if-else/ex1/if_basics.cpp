#include "../../utils/logs.h"

using namespace std;

int main() {

    //! if (conditie) {
    //!    in1           <----- se executa in1 si in2 doar daca
    //!    in2                      conditie e adevarat
    //! }

    //? > - mai mare; < - mai mic
    //? >= - mai mare sau egal; <= - mai mic sau egal

    //* se observa ca este fals deci nu se afiseaza
    if (1 > 2) {
        cout << "1 este mai mare decat 2\n";
    }

    //* se observa ca este adevarat deci se afiseaza
    if (2 > 1) {
        cout << "2 este mai mare decat 1\n";
    }

    //TODO: scrie in loc de INLOCUIESTE ce este necesar pentru a afisa ce e in if-urile de mai jos
    int x = 3, y = INLOCUIESTE;

    //! pentru a verifica daca doua lucruri sunt egale
    //! se scrie == nu doar = (asta e pentru atribuire)
    if (x == INLOCUIESTE) //? daca ai o singura instructiune, o poti pune fara {}
        cout << "Relatia x == 3 este adevarata.\n";

    if (INLOCUIESTE > INLOCUIESTE)
        cout << "Relatia este adevarata.\n";

    return 0;
}
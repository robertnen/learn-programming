#include "../../utils/logs.h"

using namespace std;

//* acesta e de urmarit mai mult
//* doar rulezi sa vezi
int main() {

    //? conditii multiple (le notam x si y)

    //! && -> inseamna si (ambele trebuie sa fie A ca sa fie totul A)
    //! || -> inseamna sau (una din ele trebuie sa fie A ca sa fie totul A)
    //!  ! -> negare (adica !x inseamna not x)

    //* 0 -> fals, 1 -> adevarat
    //? | x | y | x & y |       | x | y | x || y |      | x | !x |
    //? | 0 | 0 |   0   |       | 0 | 0 |   0    |      | 0 |  1 |
    //? | 1 | 0 |   0   |       | 1 | 0 |   1    |      | 1 |  0 |
    //? | 0 | 1 |   0   |       | 0 | 1 |   1    |
    //? | 1 | 1 |   1   |       | 1 | 1 |   1    |

    int x = 2, y = 5;

    if (x == 2 && y == 4) //? x == 2 e A, dar y == 4 e F si avem && intre ele, deci F
        cout << "A si F.\n";

    if (x == 2 || y == 4) //? la fel ca mai sus doar ca avem ||, deci A
        cout << "A sau F.\n";

    if (!(y == 4)) //? y == 4 e F, deci !(y == 4) e !F = A
        cout << "Conditie falsa negata.\n";

    //! de retinut
    //* && e folosit cand vrei sa se intample mai multe conditii
    //* || e cand vrei sa se intample macar una
    //*  ! e folosit cand vrei sa vezi daca se intampla opusul

    return 0;
}
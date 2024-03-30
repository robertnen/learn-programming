#include "../../utils/logs.h"

using namespace std;

int main() {

    int a = 3, b = 5;

    //* cout este folosit pentru a afisa in terminal ce contine o variabila (sau mai multe)
    //* forma ei este: cout << X1 << X2 << X3 << ... << Xn;
    //? X1, X2, ..., Xn pot fi o operatie / expresie / variabila / un string / etc.
    //? semnul << inseamna ca se scrie in cout, >> e folosit in cin pentru a scoate din el

    //! '\n' este caracterul de linie noua
    //? va afisa: 1\n
    cout << 1 << '\n';

    //! ' ' este caracterul pentru spatiu
    //? va afisa: Aceste este un string cu linie noua\n
    cout << "Aceste este un string cu linie noua\n";

    //? va afisa: Poti pune mai multe mesaje pe o linie\n
    cout << "Poti pune " << "mai multe mesaje" << " pe o linie" << '\n';

    //! daca ai un string "" si pui in el spatiu si/sau \n au acelasi efect
    //? va afisa: Anaaremere\n deoarece nu am pus caracterul spatiu dupa cuvinte
    cout << "Ana" << "are" << "mere" << '\n';

    cout << NUMAR << '\n';      // TODO: sa afiseze 9
    cout << VARIABILA << '\n';  // TODO: sa afiseze valoarea variabilei a
    cout << OPERATIE << '\n';   // TODO: pune operatia a + b

    //TODO: adauga caractere spatiu ca propozitia sa fie usor de citit
    cout << "Simt cum" << "ma sufoca febra\n" << "Numai" << "cand citesc" << "algebra!\n";

    return 0;
}
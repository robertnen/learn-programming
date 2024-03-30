#include "../../utils/logs.h"

using namespace std;

int main() {

    int a, b;

    //TODO: citeste a si b
    cout << "a = "; cin >> variabila;
    cout << "b = "; cin >> variabila;

    //TODO: adauga operatiile necesare pentru a obtine 20, respectiv 10
    cout << "a + b = " << OPERATIE << '\n';
    cout << "a - b = " << OPERATIE << '\n';

    //* test e o functie de verifica daca ai introdus valorea corecta pentru o variabila
    cout << test(a + b, 20) << test(a - b, 10) << '\n';

    return 0;
}
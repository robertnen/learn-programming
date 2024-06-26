#ifndef _UTILS_H_
#define _UTILS_H_ 1

    #include <bits/stdc++.h>

    const std::string EXPRESIE = "Inlocuieste aici";
    const int INLOCUIESTE = -1;
    const std::string NUMAR = "(Pune un numar aici)";
    const std::string OPERATIE = "(Pune o operatie aici)";
    const std::string VARIABILA = "(Pune o variabila aici)";

    int variabila;

    template <typename T>
    void afiseaza(std::string msg, T result) {
        std::cout << msg << " = " << result << '\n';
    }

    template <typename T>
    bool test(T x, T y) {
        return !(x - y);
    }

    void checkMax(int x, int y, int z, int maxim) {
        int m = x;

        if(m < y) m = y;
        if(m < z) m = z;

        std::cout << (maxim == m ? "Ai gasit maximul.\n" : "Raspuns gresit.\n");
    }

    void checkMin(int x, int y, int z, int minim) {
        int m = x;

        if(m > y) m = y;
        if(m > z) m = z;

        std::cout << (minim == m ? "Ai gasit minimul.\n" : "Raspuns gresit.\n");
    }

#endif
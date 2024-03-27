#ifndef _UTILS_H_
#define _UTILS_H_ 1

    #include <iostream>

    const std::string EXPRESIE = "Inlocuieste aici";

    template <typename T>
    void afiseaza(std::string msg, T result) {
        std::cout << msg << " = " << result << '\n';
    }

#endif
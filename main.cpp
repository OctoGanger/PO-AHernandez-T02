#include <iostream>
#include "formatohora.h"

int main() {


    FormatoHora primera(1, 10, 15);
    FormatoHora segunda(2, 20, 25);
    FormatoHora resultop;


    resultop= primera+segunda;
    std::cout<< resultop.to_String();

    resultop = segunda - primera;
    std::cout << resultop.to_String();

    bool rescomp;
    segunda <= primera ? rescomp = true : rescomp = false;
    std::cout << "segunda <= primera "
              << segunda.to_String()
              << " <= " << primera.to_String()
              << " resultado= " << rescomp"\n";

    return 0;
};
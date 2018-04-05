//
// Created by AnaLuz on 06/03/2018.
//

#ifndef FORMATOHORA_FORMATOHORA_H
#define FORMATOHORA_FORMATOHORA_H

#include <iostream>

class FormatoHora {
private:
    int hs;
    int ms;
    int ss;

    void validar();

public:
    FormatoHora();
    FormatoHora (int horas, int minutos, int segundos);
    std::string to_String();
    bool valhoras(int horas);
    bool valminutos(int minutos);
    bool valsegundos(int segundos);

    friend FormatoHora operator+ (const FormatoHora &h1, const FormatoHora &h2);
    friend FormatoHora operator- (const FormatoHora &h1, const FormatoHora &h2);


    friend bool operator< (const FormatoHora &h1, const FormatoHora &h2);
    friend bool operator> (const FormatoHora &h1, const FormatoHora &h2);
    friend bool operator<= (const FormatoHora &h1, const FormatoHora &h2);
    friend bool operator>= (const FormatoHora &h1, const FormatoHora &h2);
    friend bool operator== (const FormatoHora &h1, const FormatoHora &h2);
    friend bool operator!= (const FormatoHora &h1, const FormatoHora &h2);

std::string toString();

};




#endif //FORMATOHORA_FORMATOHORA_H
//
// Created by AnaLuz on 06/03/2018.

#include "formatohora.h"
#include "FormatoHora.h"
FormatoHora::FormatoHora() {
    hs=0;
    ms=0;
    ss=0;
}
//Para que pueda funcionar como un reloj normal y no excederse
//se va a usar un booleano en donde
//cuando minutos y horas > 60
//se incrementa la sguiente unidad
FormatoHora::FormatoHora(int horas, int minutos, int segundos) {

    valhoras(horas)?this->hs=horas:this->hs;
    valminutos(minutos)?this->ms=minutos:this->ms;
    valsegundos(segundos)?this->ss=segundos:this->ss;
}

void FormatoHora::validar() {

    this->ss > 60? this->ss=this->ss - 60, this->ms++ : this->ss;
    this->ms > 60? this->ms=this->ms - 60, this->hs++ : this->ms;


    this->ss<0?
    this->ss+=60 ,

            this->ms--this->ss;

    this->ms<0? this->ms+=60,
            this->hs--: this->ms;

    this->hs<0? this->hs+=24: this->hs;
}


bool FormatoHora::valhoras(int horas) {

    return 23 > horas > 0;
}

bool FormatoHora::valminutos(int ms) {

    return 59 > ms > 0;
}

FormatoHora operator+ (const FormatoHora &h1, const FormatoHora &h2){

    FormatoHora resultado (h1.hs+h2.hs,h1.ms+h2.ms,h1.ss+h2.ss);
    resultado.validar();
    return resultado;
}

FormatoHora operator- (const FormatoHora &h1, const FormatoHora &h2){

    FormatoHora resultado (h1.hs-h2.hs,h1.ms-h2.ms,h1.ss-h2.ss);
    resultado.validar();
    return resultado;
}

bool operator< (const FormatoHora &h1, const FormatoHora &h2){

    return h1.hs < h2.hs;
}

bool operator> (const FormatoHora &h1, const FormatoHora &h2){

    return h1.hs > h2.hs;
}

bool operator<= (const FormatoHora &h1, const FormatoHora &h2){

    return h1.hs <= h2.hs && h1.ms <= h2.ms && h1.ss <= h2.ss;
}

bool operator>= (const FormatoHora &h1, const FormatoHora &h2){

    return h1.hs >= h2.hs || h1.ms >= h2.ms || h1.ss >= h2.ss;
}

bool operator== (const FormatoHora &h1, const FormatoHora &h2){

    return h1.hs == h2.hs && h1.ms == h2.ms && h1.ss == h2.ss;
}

bool operator!= (const FormatoHora &h1, const FormatoHora &h2){

    return h1.hs != h2.hs || h1.ms != h2.ms || h1.ss != h2.ss;
}

std::string FormatoHora::to_String() {

    return std::to_string(hs) + ":" + std::to_string(ms) + ":" + std::to_string(ss);

}

};

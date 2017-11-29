#include "Circulo.h"

float Circulo::getSuperficie(){
    return 3.14 * radio * radio;
}

float Circulo::getPerimetro() {
    return 3.14 * 2 * radio;
}

float Circulo::getRadio(){
    return radio;
}

void Circulo::setRadio(float r) {

    radio = r;
}
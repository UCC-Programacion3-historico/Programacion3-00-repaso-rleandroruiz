#include "Circulo.h"

virtual float getSuperficie(){
    return 3.14 * radio * radio;
}

virtual float getPerimetro() {
    return 3.14 * 2 * radio;
}

float getRadio(){
    return radio;
}


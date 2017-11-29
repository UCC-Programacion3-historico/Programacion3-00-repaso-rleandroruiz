#include "Geometria.h"

Geometria::Geometria(float al, float anc){
    alto = al;
    ancho = anc;
}

float Geometria::getAlto() const {
    return alto;
}

void Geometria::setAlto(float alto) {
    Geometria::alto = alto;
}

float Geometria::getAncho() const {
    return ancho;
}

void Geometria::setAncho(float ancho) {
    Geometria::ancho = ancho;
}

uint32_t Geometria::getCol() {
    return col.getColor();
}

void Geometria::setCol(uint8_t r, uint8_t v, uint8_t a) {
    col.tenirColor(r, v, a);
}

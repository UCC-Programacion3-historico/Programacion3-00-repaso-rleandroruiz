#include "Geometria.h"

Geometria::Geometria(int al, int anc){
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

const Color &Geometria::getCol() const {
    return col;
}

void Geometria::setCol(const Color &col) {
    Geometria::col = col;
}

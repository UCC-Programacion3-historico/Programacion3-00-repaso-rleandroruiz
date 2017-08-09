#include "Cuadrado.h"
#include <math.h>

virtual float getSuperficie(){
    return alto * ancho;
}

virtual float getPerimetro(){
    return alto * 4;
}

float getDiagonal(){
    int d;
    d = alto * alto + ancho * ancho;
    return sqrt(d);
}
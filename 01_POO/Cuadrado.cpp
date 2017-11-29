#include "Cuadrado.h"


float Cuadrado::getSuperficie(){
    return alto * ancho;
}

float Cuadrado::getPerimetro(){
    return alto * 2 + ancho * 2;
}

float Cuadrado::getDiagonal(){
    float d;
    d = alto * alto + ancho * ancho;
    d = sqrt(d);
    return d;
}
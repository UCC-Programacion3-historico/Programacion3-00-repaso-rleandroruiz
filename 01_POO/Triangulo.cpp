#include "Triangulo.h"

float Triangulo::getSuperficie(){
    return alto * ancho / 2;
}

float Triangulo::getPerimetro(){

}

float Triangulo::getAngulo(){
    return angulo;
}

void Triangulo::setAngulo(float ang) {

    angulo = ang;
}
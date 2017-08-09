#include <iostream>
#include "Circulo.h"
#include "Cuadrado.h"
#include "Triangulo.h"
#include <math.h>

using namespace std;

int main() {

    Cuadrado c;

    c.setAlto(30);
    c.setAncho(30);

    cout << "Diagonal " << c.getDiagonal() << endl;

    if(c.getDiagonal() == sqrt(20 * 20 + 20 * 20))
        cout << "La funcion diagonal funciona" << endl;

    cout << "Ejercicio 00/01\n" << endl;
    return 0;
}
#ifndef REPASO_TRIANGULO_H
#define REPASO_TRIANGULO_H

#include "Geometria.h"

class Triangulo: public Geometria {
private:
    float angulo;

public:

    float getAngulo();

   void setAngulo(float ang);

    float getSuperficie();

    float getPerimetro();
};


#endif //REPASO_TRIANGULO_H

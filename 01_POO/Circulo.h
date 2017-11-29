#ifndef REPASO_CIRCULO_H
#define REPASO_CIRCULO_H

#include "Geometria.h"

class Circulo: public Geometria {
private:
    float radio;

public:
    float getRadio();

    void setRadio(float r);

    float getSuperficie();

    float getPerimetro();
};


#endif //REPASO_CIRCULO_H

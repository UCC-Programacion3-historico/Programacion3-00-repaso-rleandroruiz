#ifndef REPASO_GEOMETRIA_H
#define REPASO_GEOMETRIA_H

#include "Color.h"
#include <math.h>

class Geometria {
protected:
    float alto;
    float ancho;

public:
    Color col;

    Geometria(float, float);

    Geometria(){};

    float getAlto() const;

    void setAlto(float alto);

    float getAncho() const;

    void setAncho(float ancho);

    uint32_t getCol();

    void setCol(uint8_t r, uint8_t v, uint8_t a);

    virtual float getSuperficie() = 0;

    virtual float getPerimetro() = 0;
};


#endif //REPASO_GEOMETRIA_H

#ifndef REPASO_GEOMETRIA_H
#define REPASO_GEOMETRIA_H

#include "Color.h"

class Geometria {
protected:
    float alto;
    float ancho;

public:
    Color col;

    Geometria(int, int);

    Geometria();

    float getAlto() const;

    void setAlto(float alto);

    float getAncho() const;

    void setAncho(float ancho);

    const Color &getCol() const;

    void setCol(const Color &col);

    virtual float getSuperficie() = 0;
    virtual float getPerimetro() = 0;
};


#endif //REPASO_GEOMETRIA_H

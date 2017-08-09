#ifndef REPASO_GEOMETRIA_H
#define REPASO_GEOMETRIA_H

class Geometria {
protected:
    float alto;
    float ancho;
    char* color;

public:
    virtual float getSuperficie() = 0;
    virtual float getPerimetro() = 0;
};


#endif //REPASO_GEOMETRIA_H

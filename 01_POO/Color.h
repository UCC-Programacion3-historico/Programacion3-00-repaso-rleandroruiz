#ifndef REPASO_COLOR_H
#define REPASO_COLOR_H

#include <stdint.h>



class Color {

private:
    uint8_t rojo;
    uint8_t verde;
    uint8_t azul;

public:
    uint32_t  getColor();

    void tenirColor(uint8_t r, uint8_t v, uint8_t a);
};


#endif //REPASO_COLOR_H

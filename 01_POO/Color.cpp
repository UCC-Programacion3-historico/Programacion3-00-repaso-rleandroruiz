#include "Color.h"

uint32_t Color::getColor() {

    uint32_t tmp = 0;
    tmp = rojo * 256 * 256;
    tmp += verde * 256;
    tmp += azul;
    return tmp;

}

void Color::tenirColor(uint8_t r, uint8_t v, uint8_t a) {

    rojo += r;
    verde += v;
    azul += a;

}
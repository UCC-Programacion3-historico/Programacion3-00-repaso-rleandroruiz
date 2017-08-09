#ifndef REPASO_CALCULADORA_H
#define REPASO_CALCULADORA_H


template <class T>

class Calculadora {

private:
    T a;
    T b;

public:
    T getA() const {
        return a;
    }

    void setA(T a) {
        Calculadora::a = a;
    }

    T getB() const {
        return b;
    }

    void setB(T b) {
        Calculadora::b = b;
    }

    T sumar(){
        return a + b;
    }

    T restar(){
        return a - b;
    }

    T dividir(){
        if(b == 0)
                throw 95;
        return a / b;
    }

    T multiplicar(){
        return a * b;
    }




};


#endif //REPASO_CALCULADORA_H

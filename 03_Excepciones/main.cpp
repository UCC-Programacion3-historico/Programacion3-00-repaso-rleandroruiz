#include <iostream>
#include "Calculadora.h"

using namespace std;

int main() {
    Calculadora<int> calc;

    calc.setA(300);
    calc.setB(5);

    try {
        cout << calc.dividir() << endl;
    }catch (int e) {
        cout << "B no puede ser 0: "  << e << endl;
    }

    return 0;
}
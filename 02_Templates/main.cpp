#include <iostream>
#include "Calculadora.h"
#include <string.h>

using namespace std;

int main() {

    Calculadora<int> calcInt;
    Calculadora<char> calcChar;
    Calculadora<float> calcFloat;
    Calculadora<string> calcString;

    //Enteros
    calcInt.setA(4);
    calcInt.setB(8);

    cout<<calcInt.sumar()<<endl;
    cout<<calcInt.dividir()<<endl<<endl;

    //Char
    calcChar.setA(4);
    calcChar.setB(8);

    cout<<calcChar.sumar()<<endl;
    cout<<calcChar.dividir()<<endl<<endl;

    //Float
    calcFloat.setA(4);
    calcFloat.setB(8);

    cout<<calcFloat.sumar()<<endl;
    cout<<calcFloat.dividir()<<endl<<endl;

    //String
    calcString.setA("Hola");
    calcString.setB(" mundo");

    cout<<calcString.sumar()<<endl<<endl;

    cout << "Ejercicio 00/02\n" << endl;
    return 0;
}
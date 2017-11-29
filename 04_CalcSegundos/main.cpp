#include <iostream>

using namespace std;

int main() {
    int segundos;
    int minutos;
    int horas;
    cout << "Ejercicio 00/04\n" << endl;
    cout<<"Ingrese la cantidad de segundos"<<endl;
    cin>> segundos;
    horas = segundos/3600;
    segundos %= 3600;
    minutos = segundos/60;
    segundos %= 60;
    cout<<"Son "<<horas<<" horas, "<<minutos<<" minutos y "<<segundos<<" segundos"<<endl;
    return 0;
}
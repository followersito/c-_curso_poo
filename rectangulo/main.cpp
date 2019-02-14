#include <cstdlib>
#include<iostream>
#include<stdlib.h>
#include"perimetro.h"

using namespace std;

int main(int argc, char** argv) {
    float solicita_alto, solicita_ancho;
    cout<<"Ingrese el alto del Rectangulo"<<endl;
    cin>>solicita_alto;
    cout<<"Ingrese al ancho del Rectangulo"<<endl;
    cin>>solicita_ancho;
    Rectangulo r1(solicita_alto,solicita_ancho);
    r1.area();
    r1.perimetro();
    cin.get();
   // system("pause");
    return 0;
}

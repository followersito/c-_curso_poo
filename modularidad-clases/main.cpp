#include "melchor.h"
#include <cstdlib>
#include<iostream>
#include<stdlib.h>

using namespace std;


int main(int argc, char** argv) {
   Punto punto1, punto2;
    punto2.setPunto(56,98);
    punto1.setPunto(15,30);
    cout<<"El punto X del punto 1 es: "<<punto1.getPuntoX()<<endl;
    cout<<"El punto Y del punto 1 es: "<<punto1.getPuntoY()<<endl;
    cout<<"El punto X del punto 2 es: "<<punto2.getPuntoX()<<endl;
    return 0;
}


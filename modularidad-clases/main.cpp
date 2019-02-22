#include "melchor.h"
#include <cstdlib>
#include<iostream>
#include<stdlib.h>

using namespace std;


int main(int argc, char** argv) {
   Punto punto1, punto2,punto3;
   int punto_x, punto_y;
   cout<<"Ingrese coordenada en X del punto 3: "<<endl;
   cin>>punto_x;
   cout<<"Ingrese coordenada en Y del punto 3: "<<endl;
   cin>>punto_y;
   // punto2.setPunto(56,98);
   // punto1.setPunto(15,30);
    punto3.setPunto(punto_x,punto_y);
    cout<<"Las coordenadas del punto 3 son: X= "<<punto3.getPuntoX()<<", Y= "<<punto3.getPuntoY()<<endl;
    /* Se comentaron estas lineas para probar el funcionamiento de la aplicacion
     * por medio del ingreso de las coordenadas por parte del usuario y no por 
     * medio de los constructores.
    cout<<"El punto X del punto 1 es: "<<punto1.getPuntoX()<<endl;
    cout<<"El punto Y del punto 1 es: "<<punto1.getPuntoY()<<endl;
    cout<<"El punto X del punto 2 es: "<<punto2.getPuntoX()<<endl;
    */
     return 0;
}


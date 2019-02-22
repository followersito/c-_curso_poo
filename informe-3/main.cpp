#include "melchor.h"
using namespace std;

int main(int argc, char** argv) {
    Hombre h;
    Mujer m;
    h.setNombre("Carlos Ivan Melchor");
    cout<<"El nombre del hombre es: "<<h.getNombre()<<endl;
    m.setNombre("Maria");
    m.setEdad(25);
    cout<<"El nombre de la mujer es: "<<m.getNombre()<<" y tiene "<<m.getEdad()<<" años"<<endl;
    
    return 0;
}


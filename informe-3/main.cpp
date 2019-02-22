#include "melchor.h"
using namespace std;

int main(int argc, char** argv) {
    Hombre h;
    Mujer m;
    Restaurante r;
    h.setNombre("Carlos Ivan Melchor");
    cout<<"El nombre del hombre es: "<<h.getNombre()<<endl;
    m.setNombre("Maria");
    m.setEdad(25);
    cout<<"El nombre de la mujer es: "<<m.getNombre()<<" y tiene "<<m.getEdad()<<" años"<<endl;
    r.setNombre("Pizza pizza");
    r.setDireccion("9-15 Zona 9");
    r.setHorario("9:00-22:00");
    cout<<"El restaurante "<<r.getNombre()<<" ubicado en: "<<r.getDireccion()<<" está abierto de: "<<r.getHorario()<<endl;
    return 0;
}


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
    r.setNombre("Pizza");
    r.setDireccion("Zona 9 6-15");
    r.setHorario("9:00-22:00");
    cout<<"El nombre de la mujer es: "<<m.getNombre()<<" y tiene "<<m.getEdad()<<" años"<<endl;
    cout<<"El restaurante "<<r.getNombre()<<" ubicado en "<<r.getDireccion()<<" atiende en horario de: "<<r.getHorario()<<endl;
    return 0;
}

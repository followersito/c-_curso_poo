#include "melchor.h"
using namespace std;

int main(int argc, char** argv) {
    string nombreEstudiante;
    int notaFinal;
    Estudiante e1;
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
    cout<<"El restaurante "<<r.getNombre()<<" ubicado en: "<<r.getDireccion()<<" está abierto de: "<<r.getHorario()<<endl;
    cout<<"Ingrese el nombre de un estudiante: "<<endl;
    cin>>nombreEstudiante;
    cout<<"Ingrese la nota del estudiante: "<<endl;
    cin>>notaFinal;
    e1.setNota(notaFinal);
    e1.setNombre(nombreEstudiante);
    //e1(nombreEstudiante);
    cout<<"El estudiante "<<e1.getNombre()<<" obtuvo una nota de "<<e1.getNota()<<" puntos."<<endl;
    
    
    return 0;
}

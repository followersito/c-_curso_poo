
#include "melchor.h"

void Hombre::setNombre(std::string _nombre){
    nombre=_nombre;
}
std::string Hombre::getNombre(){
    return this->nombre;
}
Hombre::Hombre(){}

#include "melchor.h"
/**
 * Declaracion de metodos de la clase Hombre
 * @param _nombre 
 */
void Hombre::setNombre(std::string nombre){
    this->nombre=nombre;
}
std::string Hombre::getNombre(){
    return this->nombre;
}
Hombre::Hombre(){}

/**
 Declaracion de metodos de la clase Mujer
 */
void Mujer::setNombre(std::string nombre){
    this->nombre=nombre;
}
std::string Mujer::getNombre(){
    return this->nombre;
}
void Mujer::setEdad(int edad){
    this->edad=edad;
}
int Mujer::getEdad(){
    return this->edad;
}
Mujer::Mujer(){}
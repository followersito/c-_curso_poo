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

/**Declaracion de metodos de la clase Restaurante
 */
Restaurante::Restaurante(){}        //Constructor

void Restaurante::setNombre(std::string){
    this->nombre=nombre;
}
std::string Restaurante::getNombre(){
    return this->nombre;
}

void Restaurante::setDireccion(std::string){
    this->direccion=direccion;
}
std::string Restaurante::getDireccion(){
    return this->direccion;
}

void Restaurante::setHorario(std::string){
    this->horario=horario;
}
std::string Restaurante::getHorario(){
    return this->horario;
}

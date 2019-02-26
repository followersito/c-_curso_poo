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

/**
 * Metodos de la clase Estudiante
 * @param nombre
 */
Estudiante::Estudiante(){}
Estudiante::Estudiante(std::string nombre){
    this->nombre=nombre;
}
Estudiante::Estudiante(int nota){
    this->nota=nota;
}
Estudiante::Estudiante(std::string carnet, int nota){
    this->carnet=carnet;
    this->nota=nota;
}
void Estudiante::setNombre(std::string nombre){
    this->nombre=nombre;
}
std::string Estudiante::getNombre(){
    return this->nombre;
}
void Estudiante::setCarnet(std::string carnet){
    this->carnet=carnet;
}
std::string Estudiante::getCarnet(){
    return this->carnet;
}
void Estudiante::setNota(int nota){
    this->nota=nota;
}
int Estudiante::getNota(){
    return this->nota;
}


/**Declaracion de metodos de la clase Restaurante
 */
     //Constructor

void Restaurante::setNombre(std::string nombre){
    this->nombre=nombre;
}
std::string Restaurante::getNombre(){
    return this->nombre;
}

void Restaurante::setDireccion(std::string direccion){
    this->direccion=direccion;
}
std::string Restaurante::getDireccion(){
    return this->direccion;
}

void Restaurante::setHorario(std::string horario){
    this->horario=horario;
}
std::string Restaurante::getHorario(){
    return this->horario;
}
Restaurante::Restaurante(){} 

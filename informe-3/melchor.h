#ifndef MELCHOR_H
#define MELCHOR_H
#include <cstdlib>
#include<iostream>
#include<string>

/**
 Declaración de la clase Hombre
 */
struct Hombre
{
private:
    std::string nombre;
public:
    Hombre();
    void setNombre(std::string);
    std::string getNombre();
};

/** 
 *Declaración de la clase Mujer
 */
struct Mujer
{
private:
    std::string nombre;
    int edad;
public:
    Mujer();
    void setNombre(std::string);
    std::string getNombre();
    void setEdad(int);
    int getEdad();
};

/**
 Declaración de la clase Estudiante
 */
struct Estudiante
{
private:
    std::string nombre;
    std::string carnet;
    int nota;
public:
    Estudiante();                   //Constructor vacío
    Estudiante(std::string);        //Constructor 1
    Estudiante(int);                //Constructor 2 
    Estudiante(std::string,int);    //Constructor 3
    void setNombre(std::string);
    std::string getNombre();
    void setNota(int);
    int getNota();
    void setCarnet(std::string);
    std::string getCarnet();
};


/**
 Declaración de la clase Restaurante
 */
struct Restaurante{
private: 
    std::string nombre;
    std::string direccion; 
    std::string horario;
public:
    Restaurante();
    void setNombre(std::string);
    std::string getNombre();
    void setDireccion(std::string);
    std::string getDireccion();
    void setHorario(std::string);
    std::string getHorario();
};
#endif /* MELCHOR_H */

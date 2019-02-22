#ifndef MELCHOR_H
#define MELCHOR_H
#include <cstdlib>
#include<iostream>
#include<string>

struct Hombre
{
private:
    std::string nombre;
public:
    Hombre();
    void setNombre(std::string);
    std::string getNombre();
};

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
#endif /* MELCHOR_H */


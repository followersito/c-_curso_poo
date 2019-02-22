

#ifndef MELCHOR_H
#define MELCHOR_H
#include <cstdlib>
#include<iostream>
#include<string>
struct Hombre{
private:
    std::string nombre;
public:
    Hombre();
    void setNombre(std::string);
    std::string getNombre();
};

#endif /* MELCHOR_H */


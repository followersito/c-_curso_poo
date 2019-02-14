#include <cstdlib>
#include<iostream>
#include<stdlib.h>

using namespace std;
class Rectangulo{
private:
    float largo, ancho;
public:
    Rectangulo(float,float);
    void perimetro();
    void area();  
};
/**
 * Constructor que recibe los parametros de largo y ancho del rectangulo
 * @param _largo Almacena el largo del rectangulo
 * @param _ancho Almacena el ancho del rectangulo
 */
Rectangulo::Rectangulo(float _largo,float _ancho){
    largo=_largo;
    ancho=_ancho;
}
/**
 * Funcion que calcula el perimetro del rectangulo
 * @return _perimetro Variable que contiene el valor del perimetro del mouse
 * @Ejemplo objeto.perimetro()
 */
void Rectangulo::perimetro(){
    float _perimetro;
    _perimetro=(2*largo)+(2*ancho);
    cout<<"El perimetro es "<<_perimetro<<endl;
}
/**
 * Función que calcula el area del rectangulo
 * @return _area Almacena el valor del area del rectangulo
 */
void Rectangulo::area(){
    float _area;
    _area=largo*ancho;
    cout<<"El area del Rectangulo es "<<_area<<endl;
}
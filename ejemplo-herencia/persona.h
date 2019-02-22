#include <cstdlib>
#include<iostream>
#include<stdlib.h>

using namespace std;

class Persona{
private:
    string nombre;
    int edad;
public:
    Persona(string,int);
    void mostrarPersona();
};

class Empleado : public Persona{
private:
    string puesto;
    float sueldo;
public:
    Empleado(string,int,string,float);
    void mostrarEmpleado();
};

class Estudiante : public Persona{
private:
    string carnet;
    float notaFinal;
public:
    Estudiante(string,int,string,float);
    void mostrarEstudiante();
};
class Universitario : public Estudiante {
private:
    string universidad;
    string carrera;
public:
    Universitario(string,int,string,float,string,string);
    void mostrarUniversitario();
};
Universitario::Universitario(string _nombre,int _edad,string _carnet,
                             float _notaFinal,string _universidad,string _carrera) : 
                                             Estudiante(_nombre,_edad,_carnet,_notaFinal){
    universidad=_universidad;
    carrera=_carrera;
}
void Universitario::mostrarUniversitario(){
    mostrarEstudiante();
    cout<<"Universidad: "<<universidad<<endl;
    cout<<"Carrera: "<<carrera<<endl;
}
Estudiante::Estudiante(string _nombre,int _edad,string _carnet,float _notaFinal):Persona(_nombre,_edad){
    carnet=_carnet;
    notaFinal=_notaFinal;
}
void Estudiante::mostrarEstudiante(){
    mostrarPersona();
    cout<<"No Carnet: "<<carnet<<endl;
    cout<<"Nota final: "<<notaFinal<<endl;
}

Empleado::Empleado(string _nombre,int _edad,string _puesto,float _sueldo) : Persona(_nombre,_edad){
    puesto=_puesto;
    sueldo=_sueldo;
}
void Empleado::mostrarEmpleado(){
    mostrarPersona();
    cout<<"Puesto: "<<puesto<<endl;
    cout<<"Sueldo: "<<sueldo<<endl;
}

Persona::Persona(string _nombre,int _edad){
    nombre=_nombre;
    edad=_edad;
}
void Persona::mostrarPersona(){
    cout<<"Nombre: "<<nombre<<endl;
    cout<<"Edad: "<<edad<<endl;
}

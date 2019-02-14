/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Ingetelca
 *
 * Created on 14 de febrero de 2019, 12:09
 */

#include <cstdlib>
#include<iostream>
#include<stdlib.h>
#include"persona.h"

using namespace std;


int main(int argc, char** argv) {
    Empleado p1("Ivan", 21, "Supervisor", 5433);
    //p1.mostrarPersona();
    Estudiante e1("Ivan", 21, "51454545", 56);
    Universitario u1("Ivan", 21, "51515151", 76, "UMG", "Ingenieria");
    u1.mostrarUniversitario();
    cout << "-----------------------------------------------------------" << endl;
   // e1.mostrarEstudiante();
  //  cout << "-----------------------------------------------------------" << endl;
    p1.mostrarEmpleado();
    cout << "-----------------------------------------------------------" << endl;

    return 0;
}


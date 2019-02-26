/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package melchor;

/**
 *
 * @author Ingetelca
 */
public class Estudiante {
    private String nombre;
    private String carnet;
    private int notaFinal;
    public Estudiante(){}           //Constructor vacío
    //Constructor que recibe nombre
    public Estudiante(String nombre){       
        this.nombre=nombre;
    }
    //Constructor que recibe nombre y carnet
    public Estudiante(String nombre, String carnet){ 
        this.nombre=nombre;
        this.carnet=carnet;
    }
    //Constructor que recibe nombre, carnet y notaFinal
    public Estudiante(String nombre, String carnet, int notaFinal){
        this.nombre=nombre;
        this.carnet=carnet;
        this.notaFinal=notaFinal;
    }
    //Setter de nombre
    public void setNombre(String nombre){
        this.nombre=nombre;
    }
    //Getter de nombre
    public String getNombre(){
        return this.nombre;
    }
    //Setter de carnet
    public void setCarnet(String carnet){
        this.carnet=carnet;
    }
    //Getter de carnet
    public String getCarnet(){
        return this.carnet;
    }
    //Setter de nota
    public void setNota(int notaFinal){
        this.notaFinal=notaFinal;
    }
    //Getter de nota
    public int getNota(){
        return this.notaFinal;
    }
    
}

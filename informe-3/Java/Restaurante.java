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
public class Restaurante {
    private String nombre;
    private String horario;
    private String direccion;
    public Restaurante(){}
    public void setNombre(String nombre){
        this.nombre=nombre;
    }
    public String getNombre(){
        return this.nombre;
    }
    public void setHorario(String horario){
        this.horario=horario;
    }
    public String getHorario(){
        return this.horario;
    }
    public void setDireccion(String direccion){
        this.direccion=direccion;
    }
    public String getDireccion(){
        return this.direccion;
    }
}

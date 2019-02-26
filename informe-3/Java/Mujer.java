package melchor;

/**
 * Clase Mujer
 * @author Ivan
 */
public class Mujer {
    private String nombre;
    private int edad;
    public Mujer(){}        //Constructor
    //Setter de nombre 
    public void setNombre(String nombre){
        this.nombre=nombre;
    }
    //Getter de nombre
    public String getNombre(){
        return this.nombre;
    }
    //Setter de edad
    public void setEdad(int edad){
        this.edad=edad;
    }
    //Getter de edad
    public int getEdad(){
        return this.edad;
    }   
}

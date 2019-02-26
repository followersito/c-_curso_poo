package melchor;

/**
 * Clase Hombre
 * @author Ivan
 */
public class Hombre {
    private String nombre;
    //Constructor que recibe nombre
    public Hombre(String nombre){
        this.nombre=nombre;
    }
    //Setter de nombre
    public void setNombre(String nombre){
        this.nombre=nombre;
    }
    //Getter de nombre
    public String getNombre(){
        return this.nombre;
    }
}

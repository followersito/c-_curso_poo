package melchor;

/**
 * Clase Restaurante
 * @author Ivan
 */
public class Restaurante {
    private String nombre;
    private String horario;
    private String direccion;
    public Restaurante(){}      //Constructor
    //Setter de nombre
    public void setNombre(String nombre){
        this.nombre=nombre;
    }
    //Getter de nombre
    public String getNombre(){
        return this.nombre;
    }
    //Setter de horario
    public void setHorario(String horario){
        this.horario=horario;
    }
    //Getter de horario
    public String getHorario(){
        return this.horario;
    }
    //Setter de direccion
    public void setDireccion(String direccion){
        this.direccion=direccion;
    }
    //Getter de direccion
    public String getDireccion(){
        return this.direccion;
    }
}

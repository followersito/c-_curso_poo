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
public class Melchor {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Hombre h = new Hombre("Ivan");
        Mujer m = new Mujer();
        Restaurante r = new Restaurante();
        Estudiante e = new Estudiante();
        System.out.println("El nombre del hombre es: " + h.getNombre());
        m.setNombre("Maria");
        m.setEdad(22);
        System.out.println("El nombre de la mujer es: "+ m.getNombre() + " y tiene " 
                            + m.getEdad()+ " años");
        r.setNombre("Pizza pizza");
        r.setDireccion("Zona 9 Guatemala");
        r.setHorario("9:00-23:00");
        System.out.println("El restaurante "+r.getNombre()+" ubicado en "+r.getDireccion()
                           + " atiende en horario de "+r.getHorario());
        e.setNombre("Ivan Melchor");
        e.setCarnet("6190-15-7886");
        e.setNota(76);
        System.out.println("Datos del estudiante: \n "
                + "Nombre: " + e.getNombre() +"\n "
                + "No. Carnet: "+e.getCarnet()+"\n "
                + "Nota Final: "+e.getNota());
    }
       
}

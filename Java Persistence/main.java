import entity.Universidad;
import javax.persistence.EntityManager;
import javax.persistence.EntityManagerFactory;
import javax.persistence.Persistence;


public class NewMain {

    public static void main(String[] args) {
      //select();
       //insert();
      // select();
    update();
//       delete();
    }
    public static Universidad select(){
        EntityManagerFactory factory = Persistence.createEntityManagerFactory("ISPSQL2PU");
        EntityManager entityManager = factory.createEntityManager();
        Universidad universidad = entityManager.find(Universidad.class,1);
        System.out.println(universidad);
        entityManager.close();
        factory.close();
        return universidad;
    }
    public static void insert (){
        EntityManagerFactory factory = Persistence.createEntityManagerFactory("ISPSQL2PU");
        EntityManager entityManager = factory.createEntityManager();
        Universidad universidad = new Universidad();
        universidad.setCodigoUniversidad(1);
        universidad.setNombre("UMG");
        universidad.setFechaCreacion("1");
        entityManager.getTransaction().begin();
        entityManager.persist(universidad);
        entityManager.getTransaction().commit();
        System.out.println(universidad);
        entityManager.close();
        factory.close();
    }
    public static void update(){
        EntityManagerFactory factory = Persistence.createEntityManagerFactory("ISPSQL2PU");
        EntityManager entityManager = factory.createEntityManager();
        Universidad universidad = entityManager.find(Universidad.class,1);
        if(universidad!=null){
        universidad.setNombre("Universidad Mariano Galvez");
        universidad.setFechaCreacion("1966");
        entityManager.getTransaction().begin();
        entityManager.merge(universidad);
        entityManager.getTransaction().commit();
        }
        entityManager.close();
        factory.close();
    }
    public static void delete(){
        EntityManagerFactory factory = Persistence.createEntityManagerFactory("ISPSQL2PU");
        EntityManager entityManager = factory.createEntityManager();
        Universidad universidad = entityManager.find(Universidad.class,2);
        if(universidad!=null){
        entityManager.getTransaction().begin();
        entityManager.remove(universidad);
        entityManager.getTransaction().commit();
        }
        entityManager.close();
        factory.close();
    }
    
}


public class LibraryInterfaceDemo {
    public static void main(String[] args) {

        System.out.println("Testing KidUser");
        KidUser kid = new KidUser();
        

        System.out.println("Scenario 1: Age = 10, BookType = \"Kids\"");
        kid.setAge(10);
        kid.registerAccount();
        kid.setBookType("Kids");
        kid.requestBook();
        System.out.println();

        System.out.println("Scenario 2: Age = 18, BookType = \"Fiction\"");
        kid.setAge(18);
        kid.registerAccount();
        kid.setBookType("Fiction");
        kid.requestBook();
        System.out.println();


        System.out.println("Testing AdultUser ");
        AdultUser adult = new AdultUser();
        
  
        System.out.println("Scenario 1: Age = 5, BookType = \"Kids\"");
        adult.setAge(5);
        adult.registerAccount();
        adult.setBookType("Kids");
        adult.requestBook();
        System.out.println();

        System.out.println("Scenario 2: Age = 23, BookType = \"Fiction\"");
        adult.setAge(23);
        adult.registerAccount();
        adult.setBookType("Fiction");
        adult.requestBook();
    }
}
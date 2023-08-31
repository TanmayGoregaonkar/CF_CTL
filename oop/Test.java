class Base{
    int id;
    Base(){
        System.out.println("This is base");
    }
}
class Child extends Base{
    
    Child(int id){
        this.id = id;
            System.out.println("This is child"+id);
    }
}
public class Test {
    public static void main(String[] args) {
        // Child c = new Child(5);
    }
}

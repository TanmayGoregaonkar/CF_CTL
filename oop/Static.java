class Todo{
    static String name;
    int id;
    public void display(){
        System.out.println("id : "+id+" name : "+name);
    }
}
public class Static {
    public static void main(String[] args) {
        System.out.println("Hello");
        Todo t  = new Todo();
        t.id = 7;
        Todo.name = "Tan";
        t.display();
        Todo g = new Todo();
        g.id = 89;
        Todo.name = "Man";
        g.display();

        
    }
}

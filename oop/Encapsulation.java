class Encap{
    private String name;
    private int id;

    public void set_name(String name){
        this.name = name;
    }

    public void set_id(int _id){
        this.id = _id;
    }

    public int get_id(){
        return id;
    }
    public String get_name(){
        return name;
    }
}
public class Encapsulation {
    public static void main(String[] args) {
        Encap e = new Encap();
        e.set_id(56);
        e.set_name("yuji");
        System.out.println(e.get_id());
        System.out.println(e.get_name());
    }
}

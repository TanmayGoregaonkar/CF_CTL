abstract class None{
    abstract void fun();

    None(){
        System.out.println("hello const");
    }

    public void fushiguro(){
        System.out.println("YO");
    }
}

abstract class Shape{
    abstract double area();
}
class Circle extends Shape{
    int radius;
    double area(){
        return Math.PI*(radius*radius);
    }
}

class Rect extends Shape{
    int l,b;
    double area(){
        return (double)(l*b);
    }
}
public class Abstraction {
    public static void main(String[] args) {
        Circle c = new Circle();
        c.radius = 90;
        System.out.println(c.area());
        Rect r = new Rect();
        r.b=9;
        r.l=8;
        System.out.println(r.area());

        
    }
}

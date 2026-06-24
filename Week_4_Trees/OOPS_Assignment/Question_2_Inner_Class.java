// Question_2_Inner_Class
class Outer {
    void display() {
        System.out.println("I am Outer class display()");
    }

    class Inner {
        void display() {
            System.out.println("I am Inner class display()");
        }
    }
}

class Question_2_Inner_Class {
    public static void main(String[] args) {
        Outer outer = new Outer();
        outer.display();

        Outer.Inner inner = outer.new Inner();
        inner.display();
    }
}
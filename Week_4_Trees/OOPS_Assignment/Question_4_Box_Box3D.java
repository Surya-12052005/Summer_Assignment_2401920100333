// Question_4_Box_Box3D
class Box {
    private int length, breadth;

    // Constructor
    public Box(int length, int breadth) {
        this.length = length;
        this.breadth = breadth;
    }

    public int getLength() { return length; }
    public int getBreadth() { return breadth; }

    public int area() {
        return length * breadth;
    }

    public void display() {
        System.out.println("Length: " + length + ", Breadth: " + breadth);
        System.out.println("Area: " + area());
    }
}

class Box3D extends Box {
    private int height;

    // Constructor
    public Box3D(int length, int breadth, int height) {
        super(length, breadth);
        this.height = height;
    }

    public int volume() {
        return getLength() * getBreadth() * height;
    }

    public void display() {
        super.display();
        System.out.println("Height: " + height);
        System.out.println("Volume: " + volume());
    }
}

class Question_4_Box_Box3D {
    public static void main(String[] args) {
        Box box = new Box(5, 4);
        System.out.println("--- Box ---");
        box.display();

        System.out.println("\n--- Box3D ---");
        Box3D box3d = new Box3D(5, 4, 3);
        box3d.display();
    }
}
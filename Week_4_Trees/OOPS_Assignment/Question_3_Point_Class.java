// Question_3_Point_Class
class Point {
    private int x, y;

    // Constructors
    public Point() {
        x = 0;
        y = 0;
    }

    public Point(int x, int y) {
        this.x = x;
        this.y = y;
    }

    // Methods
    public void setX(int x) { this.x = x; }
    public void setY(int y) { this.y = y; }
    public void setXY(int x, int y) { this.x = x; this.y = y; }

    public void display() {
        System.out.println("Point: (" + x + ", " + y + ")");
    }
}

class Question_3_Point_Class {
    public static void main(String[] args) {
        Point p1 = new Point();
        p1.display();

        Point p2 = new Point(3, 7);
        p2.display();

        p2.setX(10);
        p2.setY(20);
        p2.display();

        p2.setXY(5, 5);
        p2.display();
    }
}
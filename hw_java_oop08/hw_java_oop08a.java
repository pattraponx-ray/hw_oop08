import java.util.*;

public class Main {
    public static void main(String[] args) {
      System.out.println("========== Class Shape ============");
      var s = new Shape();
      s.printInfo();
      s.setName("New");
      s.printInfo();
      System.out.println("========== Circle ============");
      var c = new Circle();
      c.printInfo();
      c.setRadius(2);
      c.setName("Muy");
      c.printInfo();
      System.out.println("========== Cylinder ============");
      var cy = new Cylinder(); 
      cy.printInfo();
      System.out.println("========== Rectangle ============");
      var r = new Rectangle();
      r.printInfo();
      System.out.println("========== Prlygon ============");
      var p = new Polygon();
      p.printInfo();
  }
}

class Shape{
    //------------------------------------attri
    protected String name;
    //------------------------------------conduc
    public Shape(String name){
      this.name = name;
    }
    public Shape(){
      this("Shape");
    }
    //------------------------------------Get
    public String getName(){return name;}
    //------------------------------------Set
    public void setName(String name){
      this.name = name;
    }
    //------------------------------------area()
    public double area(){
      return 0.0 ;
    }
    //------------------------------------printInfo()
    public void printInfo() {
        System.out.println("Shape: " + name + ", Area: " + area());
    }
}

class Circle extends Shape{
  //------------------------------------attri
  protected double radius;
  //------------------------------------conduc
  public Circle(String name , double radius){
    super(name);
    this.radius = radius;
  }
  public Circle(){
    this("Circle" , 1);
  }
  //------------------------------------Get
  public double getRadius() {
    return radius;
  }
  //------------------------------------Set
  public void setRadius(double radius) {
    this.radius = radius;
  }
  //------------------------------------area()
  @Override
  public double area() {
    // สูตร: PI * radius^2
    return Math.PI * radius * radius;
  }
  //------------------------------------printInfo()
  @Override
  public void printInfo() {
    System.out.println("Shape: " + name + ", Area: " + area());
    System.out.println("Radius: " + radius);
  }
}

class Cylinder extends Circle {
  //------------------------------------attri
  protected double length;
  //------------------------------------contruc
  public Cylinder(String name , double radius , double length){
    super(name, radius); 
    this.length = length;
  }
  public Cylinder(){
    this("Cylinder" , 2 , 2);
  }
  //------------------------------------Get
  public double getLength() {
    return length;
  }
  //------------------------------------Set
  public void setLength(double length) {
    this.length = length;
  }
  //------------------------------------area()
  @Override
  public double area(){
    return 2 * super.area() + 2 * Math.PI * radius * length;
    //return 2 * Math.PI * radius * (radius * length);
  }
  //------------------------------------volume()
  public double volume() {
        // เรียกใช้ area() จากคลาส Circle มาคำนวณได้เลย
    return area() * length; 
  }
  //------------------------------------printInfo()
  @Override
  public void printInfo() {
    System.out.println("Shape: " + name + ", Area: " + area());
    System.out.println("Radius: " + radius);
    System.out.println("Volume: " + volume());
  }
}

class Rectangle extends Shape{
  //------------------------------------attri
  protected double width;
  protected double height;
  //------------------------------------contruc
  public Rectangle (String name , double width , double height){
    super(name);
    this.width = width;
    this.height = height;
  }
  public Rectangle(){
    this("Rectangle" , 2 , 2);
  }
  //------------------------------------Get
  public double getWidth(){
    return width;
  }
  public double getHeight(){
    return height;
  }
  //------------------------------------Set
  public void setWidth(double width){
    this.width = width;
  }
  public void setHeight(double height){
    this.height = height;
  }
  //------------------------------------area()
  @Override
  public double area(){
    return width * height;
  }
  //------------------------------------printInfo()
  @Override
  public void printInfo() {
    System.out.println("Shape: " + name + ", Area: " + area());
    System.out.println("Width: " + width + ", Height: " + height);
  }
}

class Polygon extends Rectangle {
  //------------------------------------attri
  protected int n; 
  //------------------------------------contruc
  public Polygon(String name ,double width , double height , int n){
    super(name , width , height);
    this.n = n;
  }
  public Polygon(){
    this("Polygon" , 3 , 3 , 5);
  }
  //------------------------------------Get
  public double getN(){
    return n;
  }
  //------------------------------------Set
  public void setN(int n) {
    this.n = n;
  }
  //------------------------------------area()
  //------------------------------------Volume()
  public double volume() {
    return area() * n ;
  }
  //------------------------------------printInfo()
  @Override
  public void printInfo() {
    System.out.println("Shape: " + name + ", Area: " + area());
    System.out.println("Width: " + width + ", Height: " + height);
    System.out.println("n: " + n + ", Volume: " + volume() );
  }
}
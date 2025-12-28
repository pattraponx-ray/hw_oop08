#include <iostream>
#include <cmath>

using namespace std;

class Shape{
  ///----------------------------------------------Attri
  protected:
  string name;
  ///----------------------------------------------contruc
  public:
  Shape(string name): name(name){}
  Shape():Shape("name"){}
  ///----------------------------------------------Get()
  string getName(){
    return name;
  }
  ///----------------------------------------------Set()
  void setName(string name){
    this->name = name;
  }
  ///----------------------------------------------method area()
  virtual double area(){
    return 2;
  }
  ///----------------------------------------------method info()
  virtual void info(){
    cout << "============= Shape ============"<< endl;
    cout << "Name: " << name << ", Area: " << area() << endl;
    cout << "============= ===== ============"<< endl;
  }
};

class Circle:public Shape{
  ///----------------------------------------------Attri
  protected:
  double radius;
  ///----------------------------------------------contruc
  public:
  Circle(string name, double radius):Shape(name), radius(radius){}
  Circle():Circle("Circle" , 2){}
  //------------------------------------------------Get
  double getRadius(){
    return radius;
  }
  //------------------------------------------------Set
  void setRadius(double radius){
    this->radius = radius;
  }
  ///----------------------------------------------method area()
  virtual double area() override {
    return  M_PI * (radius * radius);
  }
  ///----------------------------------------------method info()
  virtual void info() override{
    cout << "============= Circle ============"<< endl;
    cout << "Name: " << name << ", Area: " << area() << endl;
    cout << "Radius: " << radius << endl;
    cout << "============= ====== ============"<< endl;
  } 
};

class Cylinder : public Circle{
  ///----------------------------------------------Attri
  protected:
  double length;
  ///----------------------------------------------contruc
  public:
  Cylinder(string name , double radius , double length):Circle(name , radius) , length(length){}
  Cylinder():Cylinder("Cylinder" , 2 , 2 ){}
  //------------------------------------------------Get
  double getLength(){
    return length;
  }
  //------------------------------------------------Set
  void setLength(double length){
    this->length = length;
  }
  ///----------------------------------------------method area()
  double area() override{
    return 2 * M_PI * radius * (radius + length);
  }
  ///----------------------------------------------method volume()
  double volume(){
    return M_PI * (radius * radius) * length;
  }
  ///----------------------------------------------method info()
  virtual void info() override{
    cout << "============= Cylinder ============"<< endl;
    cout << "Name: " << name << ", Area: " << area() << endl;
    cout << "Radius: " << radius << ", length: " << length << endl;
    cout << "Volume: " << volume() << endl;
    cout << "============= ====== ============"<< endl;
  } 
};

class Rectangle : public Shape{
  protected:
  double width;
  double height;
  public:
  Rectangle(string name , double width ,double height): Shape(name), width(width) , height(height){}
  Rectangle():Rectangle("Rectangle" , 2 , 3){}
  //------------------------------------------------Get
  double getWidth(){
    return width;
  }
  double getHeight(){
    return height;
  }
  //------------------------------------------------Set
  void setWidth(double width){
    this->width = width;
  }
  void setHeight(double height){
    this->height = height;
  }
  //--------------------------------------------------
  virtual double area() override{
    return width * height ;
  }
  virtual void info() override{
    cout << "============= Rectangle ============"<< endl;
    cout << "Name: " << name << ", Area: " << area() << endl;
    cout << "Width: " << width << ", Height: " << height << endl;
    cout << "============= ====== ============"<< endl;
  } 
};

class Polygon : public Rectangle{
  protected:
  int n;
  public:
  Polygon(string name , double width , double height ,int n):Rectangle(name , width , height), n(n){}
  Polygon():Polygon("Polygon" , 2 , 3 , 5){}
  //------------------------------------------------Get
  int getN(){
    return n;
  }
  //------------------------------------------------Set
  void setN(int n){
    this-> n = n;
  }
  double area()override{
    return (0.5 * width * height) * n;
  }
  double volume(){
    return area() * height;
  }
  virtual void info() override{
    cout << "============= Rectangle ============"<< endl;
    cout << "Name: " << name << ", Area: " << area() << endl;
    cout << "Width: " << width << ", Height: " << height << endl;
    cout << "Volume: " << volume() << ", N: " << n << endl;
    cout << "============= ====== ============"<< endl;
  } 
};



int main() 
{
    Shape s;
    s.info();
    
    Circle c;
    c.info();
    
    Cylinder cy;
    cy.info();
    
    Rectangle r;
    r.info();
    
    Polygon p;
    p.info();
    p.setN(8);
    p.info();
    
    return 0;
}
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text.RegularExpressions;

namespace HelloWorld
{
	public class Program
	{
		public static void Main(string[] args)
		{
			var s = new Shape();
			s.info();
			
			var c = new Circle();
			c.info();
			
			var cy = new Cylinder();
			cy.info();
			
			var r = new Rectangle();
			r.info();
			
			var p = new Polygon();
			p.info();
		}
	}
	
	public class Shape{
	  //-----------------------------------------------attri / get /set /contruc
	  protected string Name {get; set;} = "Shape" ;
	  //-----------------------------------------------contruc
	 // public Shape(string name){
	 //   Name = name;
	 // }
	  //-----------------------------------------------method
	  public virtual double Area => 2;
	  //-----------------------------------------------info()
	  public virtual void info(){
	    Console.WriteLine("============= Shape ================");
	    Console.WriteLine("Name: " + Name + ", Area: " + Area);
	  }
	}
	
	public class Circle : Shape {
	  //-----------------------------------------------attri  / get /set
	  protected double Radius {get; set;} = 2;
	  //-----------------------------------------------method
	  public override double Area => Math.PI * Math.Pow(Radius, 2);  
	  //-----------------------------------------------info()
	  public new void info(){
	    Console.WriteLine("============= Circle ================");
	    Console.WriteLine("Name: " + Name + ", Area: " + Area);
	    Console.WriteLine("Radius: " + Radius +", PI: " + Math.PI );
	  }
	}
	
	public class Cylinder : Circle {
	  //-----------------------------------------------attri  / get /set / contruc
	  protected double Length {get; set;} = 2;
    //-----------------------------------------------method Area()
    public override double Area => 2 * Math.PI * Radius * (Radius + Length);
    //-----------------------------------------------method volume()
    public double Volume => Math.PI * (Radius * Radius) * Length;
	  //-----------------------------------------------info()
	  public new void info(){
	    Console.WriteLine("============= Cylinder ================");
	    Console.WriteLine("Name: " + Name + ", Area: " + Area);
	    Console.WriteLine("Radius: " + Radius +", PI: " + Math.PI );
	    Console.WriteLine("Volume: " + Volume +", Length: " + Length );
	  }
	}
	
	public class Rectangle : Shape {
	  //-----------------------------------------------attri  / get /set / contruc
	  protected double Width {get; set;} = 2;
	  protected double Height {get; set;} = 2;
	  //-----------------------------------------------method Area()
	  public override double Area => Width * Height ; 
	  //-----------------------------------------------info()
	  public new void info(){
	    Console.WriteLine("============= Rectangle ================");
	    Console.WriteLine("Name: " + Name + ", Area: " + Area);
	    Console.WriteLine("Width: " + Width + ", Height: " + Height);
	  }
	}
	
	public class Polygon : Rectangle{
	  //-----------------------------------------------attri  / get /set / contruc
	  protected double N {get; set;} = 5;
	  //-----------------------------------------------method Area()
    public override double Area => (0.5 * Width * Height) * N; 
	  //-----------------------------------------------method volume()
	  public double Volume => Area * Height;
	  //-----------------------------------------------info()
	  public new void info(){
	    Console.WriteLine("============= Polygon ================");
	    Console.WriteLine("Name: " + Name + ", Area: " + Area);
	    Console.WriteLine("Width: " + Width + ", Height: " + Height);
	    Console.WriteLine("Volume: " + Volume + ", N: " + N);
	  }
	}
}
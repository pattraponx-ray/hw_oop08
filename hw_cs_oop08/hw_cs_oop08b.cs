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
			var s = new Stack();
			s.info();
			
			var s1 = new Stack{
			  elements = {"Jack", "Jahn" , "Joe" ,"Jane" ,"Jim"}
			};
			s1.info();
			
			var l = new List();
			l.info();
			
			var l2 = new List{
			  elements = {"Jack" , "Jim" , "Joe" , "Jane" ,"Jim"}
			};
			l2.info();
			l2.InsertFront("TOT");
			l2.InsertIndex(1, "UwU");
			l2.InsertBack(":p");
			l2.info();
			l2.RemoveIndex(3);
			l2.RemoveBack();
			l2.info();
		}
	}
	
	public class Stack {
	  //----------------------------------------------------ทำStack
	  public List<string> elements = new List<string>();
	  //---------------------------------------------------------Push
	  public void Push(string item) => elements.Add(item);
	  //---------------------------------------------------------Pop
	  public string Pop(){
	    if (elements.Count == 0) return null;
	    string top = elements[elements.Count - 1 ];
	    elements.RemoveAt(elements.Count - 1);
	    return top;
	  } 
	  //---------------------------------------------------------Peek
	  public string Peek() => elements.Count > 0 ? elements[elements.Count - 1 ]: "Empty";
	  //---------------------------------------------------------size
	  public int Size() => elements.Count;
	  //---------------------------------------------------------Empty
	  public bool Empty() => elements.Count == 0;
	  //---------------------------------------------------------Info()
	  public virtual void info(){
	    Console.WriteLine("======================= Stack ==================");
	    Console.WriteLine($"Elements: [ " + string.Join (", " , elements) + " ]");
	    Console.WriteLine($"Size :" + Size());
	    Console.WriteLine($"Empty :" + Empty());
	    Console.WriteLine($"Peek :" + Peek());
	  }
	}
	
	public class List : Stack {
	  //------------------------------------------------------------InsertFront()
	  public void InsertFront(string item) => elements.Insert(0 , item);
	  //------------------------------------------------------------InsertIndex()
	  public void InsertIndex(int index , string item){
	    if(index >= 0 && index <= elements.Count) elements.Insert(index , item);
	    else Console.WriteLine("ตำแหน่งไม่ถูกต้อง");
	  }
	  //------------------------------------------------------------InsertBack()
	  public void InsertBack(string item) => this.Push(item);
	  //------------------------------------------------------------RemoveIndex()
	  public void RemoveIndex(int index){
	    if(index >= 0 && index <= elements.Count) elements.RemoveAt(index);
	  }
	  //------------------------------------------------------------RemoveBack()
	  public string RemoveBack() => this.Pop();
	  //------------------------------------------------------------PeekFront()
	  public string PeekFront() => elements.Count > 0 ? elements[0] : "None";
	  //------------------------------------------------------------Info()
	  public override void info(){
	    Console.WriteLine("======================= List ==================");
	    Console.WriteLine($"Elements: [ " + string.Join (", " , elements) + " ]");
	    Console.WriteLine($"Size :" + Size());
	    Console.WriteLine($"Empty :" + Empty());
	    Console.WriteLine($"Peek :" + Peek());
	    Console.WriteLine($"PeekFront :" + PeekFront());
	  }
	}
}
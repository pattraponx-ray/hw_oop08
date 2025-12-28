import java.util.*;

public class Main {
    public static void main(String[] args) {
      var s1 = new Stack();
      s1.info();
      
      var s = new Stack();
      //var s = new Stack("Jack", "John", "Joe", "Jane", "Jim");
      s.elements.addAll(Arrays.asList("Jack", "John", "Joe", "Jane", "Jim"));
      s.info();
      
      var l = new List();
      l.info();
      
      l.elements.addAll(Arrays.asList("Jack", "John", "Joe", "Jane", "Jim"));
      l.info();
      l.insertFront("Mama");
      l.insertIndex(1, "Yaya");
      l.info();
  }
}

class Stack {
  public ArrayList<String> elements = new ArrayList<>();
  //-------------------------------------------------------------Push
  public void push(String item){
    elements.add(item);
  }
  //-------------------------------------------------------------Pop
  public String pop(){
    if (!isEmpty()) return elements.remove(elements.size() - 1);
    return null;
  }
  //-------------------------------------------------------------Peek
  public String peek(){
    if (!isEmpty()) return elements.get(elements.size() - 1);
    return "Empty";
  }
  //-------------------------------------------------------------Empty
  public Boolean isEmpty() {
    return elements.isEmpty();
  }
  //-------------------------------------------------------------Size
  public int size(){
    return elements.size();
  }
  //-------------------------------------------------------------info()
  public void info(){
    System.out.println("========================= Stack ========================");
    System.out.println("Elements: " + elements);
    System.out.println("Peek: " + peek());
    System.out.println("Size: " + size());
    System.out.println("Empty: " + isEmpty());
  }
}

class List extends Stack {
  //----------------------------1------------------------------insertFront ()
  public void insertFront(String item){
    elements.add(0 , item);
  }
  //----------------------------2------------------------------insertIndex 
  public void insertIndex(int index , String item){
    if (index >= 0 && index <= elements.size()) elements.add(index , item);
  }
  //----------------------------3------------------------------insertBlack(push)
  public void insertBack(String item){
     push(item);
  }
  //----------------------------4------------------------------peekFront
  public String peekFront(){
    return !isEmpty() ? elements.get(0): "Empty";  //if ,else
  }
  //----------------------------5------------------------------peek
  public String back(){
    return peek();
  }
  //----------------------------6------------------------------remove
  public String removeBack(){
    return pop();
  }
  //----------------------------7------------------------------removeIndex()
  public String removeIndex(int index){
    if (index >= 0 && index < elements.size())return  elements.remove(index);
    return  null;
  }
  //----------------------------8------------------------------info()
  @Override
  public void info(){
    System.out.println("============= List ===========");
    System.out.println("Elements: " + elements);
    System.out.println("Peek Front: " + peekFront());
    System.out.println("Back: " + back());
    System.out.println("Size: " + size());
  }
}




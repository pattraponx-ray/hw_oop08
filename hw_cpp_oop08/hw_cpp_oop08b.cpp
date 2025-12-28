#include <iostream>
#include <vector>
using namespace std;



class Stack{
  public:
  //--------------------------------------------ทำStack
  vector<string> elements;
  //--------------------------------------------Push
  void Push(string item){
    elements.push_back (item);
  }
  //---------------------------------------------Pop
  string Pop(){
    if(!isEmpty()){
      string topItem = elements.back();
      elements.pop_back();
      return topItem;
    }
    return "?" ;
  }
  //----------------------------------------------Peek
  string Peek(){
    if (!isEmpty()){
      return elements.back();
    }
    return "Stack is Empty";
  }
  //------------------------------------------------Empty
  bool isEmpty(){
    return elements.empty();
  }
  //-------------------------------------------------Size
  int Size(){
    return elements.size();
  }
  //-------------------------------------------------info()
  virtual void info(){
    cout << "======================== Stack ======================" << endl;
    cout << "Elements: [";
    for(int i = 0; i < elements.size(); ++ i){
      cout << elements[i];
      if (i < elements.size() - 1) {
        cout << ", ";
      }
    }
    cout << "]" << endl;
    cout << "Size: " << Size() <<endl;
    cout << "Peek: " << Peek() <<endl;
    cout << "Empty: " << isEmpty() <<endl;
  }
};

  //------------------------------------------------------------สืบทอดคลาส
class List : public Stack {
  public:
  //------------------------------------------------------------InsertFront()
  void InsertFront(string item){
    elements.insert(elements.begin(), item);
  }
  //------------------------------------------------------------InsertIndex()
  void InsertIndex(int index, string item){
    if (index >= 0 && index <= (int)elements.size()) {
      elements.insert(elements.begin() +  index, item); 
    }
  }
  //------------------------------------------------------------InsertBack() แบบสืบทอดมา
  void InsertBack(string item){
    Push(item);
  }
  //------------------------------------------------------------RemoveIndex()
  string RemoveIndex(int index){
    if (index >= 0 && index < (int)elements.size()){
      string item = elements[index];
      elements.erase(elements.begin() + index);
      return item;
    }
    return "";
  }
  //------------------------------------------------------------RemoveBack() แบบสืบทอดมา
  string RemoveBack(){
    return Pop();
  }
  //------------------------------------------------------------PeekFront()
  string PeekFront(){
    if (!isEmpty()) return elements.front();
    return "List is Empty";
  }
  //------------------------------------------------------------Info()
  void info() override {
    cout << "======================== List ======================" << endl;
    cout << "Elements: [";
    for(int i = 0; i < elements.size(); ++ i){
      cout << elements[i];
      if (i < elements.size() - 1) {
        cout << ", ";
      }
    }
    cout << "]" << endl;
    cout << "Size: " << Size() <<endl;
    cout << "Back: " << Peek() <<endl;
    cout << "PeekFront: " << PeekFront() <<endl;
    cout << "Empty: " << isEmpty() <<endl;
  }
  
};




int main() 
{
    Stack s;
    s.info();
    s.Push("jack");
    s.Push("john");
    s.Push("joe");
    s.Push("jane");
    s.Push("jim");
    s.info();
    s.Pop();
    s.info();
    
    List l;
    l.info();
    l.Push("jack");
    l.Push("john");
    l.Push("joe");
    l.Push("jane");
    l.Push("jim");
    l.info();
    l.InsertFront("TuT");
    l.InsertBack("Back");
    l.InsertIndex(2, "2");
    l.info();
    l.RemoveBack();
    l.RemoveIndex(2);
    l.info();
    
    return 0;
}
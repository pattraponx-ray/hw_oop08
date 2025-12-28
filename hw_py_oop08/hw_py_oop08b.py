class Stack:
  ##-------------------------------------------------Elements
  def __init__(self):
    self.elements = []
  ##-------------------------------------------------Push
  def Push(self, item:str):
    self.elements.append(item)
  ##-------------------------------------------------Pop
  def Pop(self):
    if not self.is_empty():
      return self.elements.pop()
    return None
  ##-------------------------------------------------Peek
  def Peek(self):
    if not self.is_empty():
      return self.elements[-1]
    return "ว่างเปล่า"
  ##-------------------------------------------------Size
  def Size(self):
    return len(self.elements)
  ##-------------------------------------------------Empty
  def is_empty(self):
    return len(self.elements) == 0
  ##-------------------------------------------------info()
  def Info(self):
    print("=================== Stack =======================")
    print(f"Elements: {self.elements}")
    print(f"Peek: {self.Peek()}")
    print(f"Size: {self.Size()}")
    print(f"IsEmpty: {self.is_empty()}")
##------------------------------------------------------------สืบทอดคลาส
class List(Stack):
  def __init__(self):
    super().__init__()
  ##//------------------------------------------------------------InsertFront()
  def InsertFront(self, item:str):
    self.elements.insert(0, item)
  ##//------------------------------------------------------------InsertIndex()
  def InsertIndex(self, index:int , item:str):
    if 0 <= index <= self.Size():
      self.elements.insert(index , item)
  ##//------------------------------------------------------------InsertBack()
  def InsertBack(self, item:str):
    return self.Push(item)
  ##//------------------------------------------------------------RemoveIndex()
  def RemoveIndex(self, index:int ):
    if 0 <= index < self.Size():
      return self.elements.pop(index)
  ##//------------------------------------------------------------RemoveBack()
  def Remove(self):
    return self.Pop()
  ##//------------------------------------------------------------PeekFront()
  def PeekFront(self):
    if not self.is_empty():
      return self.elements[0]
    return "ลิสว่างเปล่า"
  ##//------------------------------------------------------------Info()
  def Info(self):
    print("=================== List =======================")
    print(f"Elements: {self.elements}")
    print(f"Peek: {self.Peek()}")
    print(f"PeekFront: {self.PeekFront()}")
    print(f"Size: {self.Size()}")
    print(f"IsEmpty: {self.is_empty()}")
  
s = Stack()
s.Info()
s.Push("JacK")
s.Push("John")
s.Push("Joe")
s.Push("Jane")
s.Push("Jim")
s.Info()
s.Pop()
s.Info()

l = List()
l.Info()
l.Push("JacK")
l.Push("John")
l.Push("Joe")
l.Push("Jane")
l.Push("Jim")
l.InsertFront("UwU")
l.InsertIndex(1 , "TNT")
l.InsertBack("UOU")
l.Info()
l.Remove()
l.RemoveIndex(0)
l.Info()
  
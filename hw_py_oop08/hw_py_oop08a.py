import math

class Shape:
  ##----------------------------------------------Attri
  def __init__(self, name:str = "Shape"):
    self._name = name
  ##----------------------------------------------Get
  @property
  def name(self):
    return self._name
  ##----------------------------------------------Set
  @name.setter
  def name(self, name:str = "Shape?"):
    self._name = name
  ##----------------------------------------------area()
  def area(self):
    return 5;
  ##----------------------------------------------info()
  def info(self):
    print("================== Shape ================")
    print(f"Name: {self._name}" )
    print(f"Area: {self.area()}" )
    print("================== ===== ================")

class Circle(Shape):
  ##----------------------------------------------Attri
  def __init__(self, name:str = "Circle" , radius:float = 3 ):
    super().__init__(name)
    self._radius = radius
  ##----------------------------------------------Get
  @property
  def radius(self):
    return self._radius
  ##----------------------------------------------Set
  @radius.setter
  def radius(self, radius:float = 4):
    self._radius = radius
  ##----------------------------------------------area()
  def area(self):
    return  math.pi *(self._radius * self._radius )
  ##----------------------------------------------info()
  def info(self):
    print("================== Circle ================")
    print(f"Name: {self._name}" )
    print(f"Area: {self.area()}" )
    print(f"Radius: {self._radius}" )
    print("================== ===== ================")


class Cylinder(Circle):
  ##----------------------------------------------Attri
  def __init__(self, name:str = "Cylinder" , radius:float = 3  , lenght:float = 5):
    super().__init__(name , radius)
    self._lenght = lenght
  ##----------------------------------------------Get
  @property
  def lenght(self):
    return self._lenght;
  ##----------------------------------------------Set
  @lenght.setter
  def lenght(self, lenght:float = 2):
    self._lenght = lenght
  ##----------------------------------------------area()
  def area(self):
    return  2 * math.pi * self._radius * (self._radius + self._lenght) 
  ##----------------------------------------------area()
  def volume(self):
    return math.pi * (self._radius * self._radius) * self._lenght
  ##----------------------------------------------info()
  def info(self):
    print("================== Cylinder ================")
    print(f"Name: {self._name}" )
    print(f"Area: {self.area()}" )
    print(f"Radius: {self._radius}" )
    print(f"Lenght: {self._lenght}" )
    print("================== ===== ================")


class Rectangle(Shape):
  ##----------------------------------------------Attri
  def __init__(self, name:str = "Rectangle" , width:float = 4  , height:float = 7):
    super().__init__(name )
    self._width = width
    self._height = height
  ##----------------------------------------------Get
  @property
  def width(self):
    return self._width
  @property
  def height(self):
    return self._height
  ##----------------------------------------------Set
  @width.setter
  def width(self, width:float = 3):
    self._width = width
  @height.setter
  def height(self, height:float = 5):
    self._height = height
  ##----------------------------------------------area()
  def area(self):
    return  self._width * self._height 
  ##----------------------------------------------info()
  def info(self):
    print("================== Rectangle ================")
    print(f"Name: {self._name}" )
    print(f"Area: {self.area()}" )
    print(f"Width: {self._width}" )
    print(f"Height: {self._height}" )
    print("================== ===== ================")


class Polygon(Rectangle):
  ##----------------------------------------------Attri
  def __init__(self, name:str = "Polygon" , width:float = 4  , height:float = 7 ,n:int = 9):
    super().__init__(name, width , height)
    self._n = n
  ##----------------------------------------------Get
  @property
  def n(self):
    return self._n
  ##----------------------------------------------Set
  @n.setter
  def n(self, n:float=5):
    self._n = n
  ##----------------------------------------------area()
  def area(self):
    return  (.5 * self._width * self._height ) * self._n
  ##----------------------------------------------volume()
  def volume(self):
    return  self.area() * self._height
  ##----------------------------------------------info()
  def info(self):
    print("================== Polygon ================")
    print(f"Name: {self._name}" )
    print(f"Area: {self.area():.2f}" )
    print(f"Width: {self._width}" )
    print(f"Height: {self._height}" )
    print(f"N: {self._n}" )
    print(f"Volume: {self.volume():.2f}" )
    print("================== ===== ================")
    
s = Shape()
s.info()

c = Circle()
c.info()

cy = Cylinder()
cy.info()

r = Rectangle()
r.info()

p = Polygon()
p.info()
p.width = 5
p.info()
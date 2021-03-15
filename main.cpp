#include <iostream>
#include "Circle.h"
#include "Figure.h"
#include "Square.h"
#include "Ellipse.h"
#include "Triangle.h"
#include "ETriangle.h"
#include "ITriangle.h"
#include "RTriangle.h"
#include "Rectangle.h"
#include "Parallelogram.h"

int main() {
  std::cout << "Hello World!\n";
  Circle circle = Circle(5);
  Square square = Square(5);
  Ellipse ellipse = Ellipse(4, 5);
  Triangle triangle = Triangle(3, 4, 5);
  ETriangle etriangle = ETriangle(6);
  ITriangle itriangle = ITriangle(5, 6);
  RTriangle rtriangle = RTriangle(5, 6);
  Rectangle rectangle = Rectangle(3, 4);
  Parallelogram parallelogram = Parallelogram(3, 4, 30);
  std::cout << "Calculate S: " << " Circle = " << circle.calculateS() << " Square = " << square.calculateS() << " Ellipse = " << ellipse.calculateS() << " Triangle = " << triangle.calculateS() << " ETriangle = " << etriangle.calculateS() << " ITriangle = " << itriangle.calculateS() << " RTriangle = " << rtriangle.calculateS() << " Rectangle = " << rectangle.calculateS() << " Parallelogram = " << parallelogram.calculateS() << std::endl; 

  std::cout << "Calculate P: " << " Circle = " << circle.calculateP() << " Square = " << square.calculateP() << " Ellipse = " << ellipse.calculateP() << " Triangle = " << triangle.calculateP() << " ETriangle = " << etriangle.calculateP() << " ITriangle = " << itriangle.calculateP() << " RTriangle = " << rtriangle.calculateP() << " Rectangle = " << rectangle.calculateP() << " Parallelogram = " << parallelogram.calculateP() << std::endl; 
  return 0;
}
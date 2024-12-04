#include <iostream> 
#include <cmath> 
using namespace std; 
class Shape { 
public: 
 virtual double area() const = 0; 
 virtual ~Shape() {} 
}; 
class Circle : public Shape { 
private: 
 double radius; 
public: 
 Circle(double r) : radius(r) {} 
 double area() const override { 
 return M_PI * radius * radius; 
 } 
}; 
class Rectangle : public Shape { 
private: 
 double width, height; 
public: 
Rectangle(double w, double h) : width(w), height(h) {} 
double area() const override { 
return width * height; 
} 
}; 
void displayArea(Shape* shape) { 
cout << "Area: " << shape->area() << endl; 
} 
int main() { 
cout << "Name : vaishnavi khokle" << endl; 
Shape* circle = new Circle(5.0); 
Shape* rectangle = new Rectangle(9.0, 6.0); 
cout << "Circle Information:" << endl; 
displayArea(circle); 
cout << "\nRectangle Information:" << endl; 
displayArea(rectangle); 
delete circle; 
delete rectangle; 
return 0; 
}
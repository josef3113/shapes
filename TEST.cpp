#include "Circle.h"
#include "Rectangleh.h"
#include "Triangle.h"

void main() {
	Point o(0, 0);
	Point a(0, 1);
	Point b(1, 0);
	Shape *shapes[] = {
		new Rectangle(a, b),
		new Triangle(o, a, b),
		new Circle(o, 1) };
		for (int i = 0; i < 3; ++i)
			cout << i << ") area=" << shapes[i]->getArea() <<
			" perim=" << shapes[i]->getPerimeter() << endl;
		for (int i = 0; i < 3; ++i)
			delete shapes[i];
		
		system("pause");
}
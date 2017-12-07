#include <iostream>
#include "Circle.h"
#include "Rectangleh.h"
#include "Triangle.h"
using namespace std;



//void main()
//{
//	int x;
//	Shape *s[2];
//	s[1]=new Circle((0,1),3);
//	s[0]=new Circle((0,1),5);
//
//
//	for(int i=0;i<2;i++)
//	{
//		cout<<s[i]->getPerimeter()<<endl;
//	}
//
//	Point a(1,2),b(3,3),c(3,1);
//	 Rectangle re(a,b);
//	cout<<re.getArea()<<endl;
//	cout<<re.getPerimeter()<<endl;
//
//	Triangle sd(a,b,c);
//	cout<<sd.getArea()<<endl;
//
//	delete s[0] ;
//	delete s[1] ;
//
//
//	cin>>x;
//	
//	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF|_CRTDBG_LEAK_CHECK_DF);
//
//}

void main() 
{
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

		_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF|_CRTDBG_LEAK_CHECK_DF);
		system ("pause");
}
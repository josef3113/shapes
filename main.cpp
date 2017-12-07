#include <iostream>
#include "Circle.h"
#include "Rectangleh.h"
using namespace std;



void main()
{
	int x;
	Shape *s[2];
	s[1]=new Circle((0,1),3);
	s[0]=new Circle((0,1),5);


	for(int i=0;i<2;i++)
	{
		cout<<s[i]->getPerimeter()<<endl;
	}

	Polygon *p=new Rectangle();
	cout<<p[0].getArea()<<endl;
	cout<<p[0].getPerimeter()<<endl;

	delete p;

	delete s[0] ;
	delete s[1] ;


	cin>>x;
	
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF|_CRTDBG_LEAK_CHECK_DF);

}
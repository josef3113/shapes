#include "Triangle.h"
#include "Pointh.h"
#include <math.h>


Triangle::Triangle(Point A,Point B,Point C)
{
	this->A=A;
	this->B=B;
	this->C=C;

	this->AB=distancePoint(A,B);
	this->BC=distancePoint(B,C);
	this->CA=distancePoint(C,A);

	cout<<"Tri co"<<endl;      //to follow after creation objeckt

	
}


Triangle::~Triangle(void)
{
	cout<<"Tri dis"<<endl;   //to follow after destruction  objeckt
}



//---fontcion of Triangle

double Triangle::getArea()const
{
	 return	 sqrt( (AB+BC+CA)*(AB+BC-CA)*(AB-BC+CA)*(BC+CA-AB)  ) / 4;
}

double Triangle::getPerimeter()const
{
	return AB+BC+CA;
}


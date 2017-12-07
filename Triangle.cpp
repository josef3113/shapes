#include "Triangle.h"
#include <math.h>


Triangle::Triangle(Point A,Point B,Point C)
{
	this->A=A;
	this->B=B;
	this->C=C;

	this->AB=distance(A,B);
	this->BC=distance(B,C);
	this->CA=distance(C,A);

	cout<<"Tri co"<<endl;      //to follow after creation objeckt

	
}


Triangle::~Triangle(void)
{
	cout<<"Tri dis"<<endl;   //to follow after destruction  objeckt
}



//---fontcion of Triangle

double Triangle::getArea()const
{
  return	sqrt( sqrt( (AB+BC+CA)*(AB+BC-CA)*(AB-BC+CA)*(BC+CA-AB) ) );
}

//escort function 

double distance(Point A ,Point B)
{

	double s=A.getX()-B.getX();     //  (X1-X2)
	double p=A.getY()-B.getY();     //  (Y1-Y2)

	return sqrt(s*s + p*p);        //sqrt of (x1-x2)^2 + (y1-y2)^2 is a distance between two point

}

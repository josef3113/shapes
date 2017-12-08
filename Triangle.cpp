#include "Triangle.h"
#include "Pointh.h"
#include <math.h>


Triangle::Triangle(Point A,Point B,Point C)
{
	this->A=A;
	this->B=B;
	this->C=C;

	cout<<"Tri co"<<endl;      //to follow after creation objeckt


}


Triangle::~Triangle(void)
{
	cout<<"Tri dis"<<endl;   //to follow after destruction  objeckt
}


//-------getrs           _getA and _getC is inheritance from Polygon

Point Triangle::getB()const
{
	return this->B;
}

//-------setrs

Triangle& Triangle::setA(const Point & p)
{
	this->A=p;
	return (*this);
}

Triangle& Triangle::setB(const Point & p)
{
	this->B=p;
	return (*this);
}

Triangle& Triangle::setC(const Point & p)
{
	this->C=p;
	return (*this);
}


//---fontcion of Triangle

double Triangle::getArea()const
{
	double AB=this->getAB();     // size of edge AB
	double BC=this->getBC();     // size of edge BC
	double CA=this->getCA();     // size of edge CA


	return	 sqrt( (AB+BC+CA)*(AB+BC-CA)*(AB-BC+CA)*(BC+CA-AB)  ) / 4;
}

double Triangle::getPerimeter()const
{

	double AB=this->getAB();     // size of edge AB
	double BC=this->getBC();     // size of edge BC
	double CA=this->getCA();     // size of edge CA

	return AB+BC+CA;
}

//-------- considered attribute

double Triangle::getAB()const
{
	return distancePoint(A,B);

}

double Triangle::getBC()const
{
	return distancePoint(B,C);

}

double Triangle::getCA()const
{
	return distancePoint(C,A);

}

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

Triangle::Triangle(const Triangle& other)
{
	(*this)=other;
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

//-------operators

Triangle& Triangle::operator=(const Triangle & other)
{
	this->A=other.A;
	this->B=other.B;
	this->C=other.C;

	return (*this);
}

//---fontcion of Triangle

double Triangle::getArea()const
{
	double AB=this->getEdge(this->A,this->B);     // size of edge AB
	double BC=this->getEdge(this->B,this->C);     // size of edge BC
	double CA=this->getEdge(this->C,this->A);    // size of edge CA


	return	 sqrt( (AB+BC+CA)*(AB+BC-CA)*(AB-BC+CA)*(BC+CA-AB)  ) *0.25;
}

double Triangle::getPerimeter()const
{

	double AB=this->getEdge(this->A,this->B);     // size of edge AB
	double BC=this->getEdge(this->B,this->C);     // size of edge BC
	double CA=this->getEdge(this->C,this->A);    // size of edge CA

	return AB+BC+CA;
}



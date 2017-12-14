
#include<iostream>
using namespace std;
#include "Pointh.h"


Point::Point(int x,int y)
{
	this->setX(x);
	this->setY(y);
}


Point::~Point()
{
}

//------getrs

int Point::getX()const
{
	return this->x;
}

int Point::getY()const
{
	return this->y;
}


//------setrs 

void Point::setX(int x)
{
	this->x=x;
}

void Point::setY(int y)
{
	this->y=y;
}


//----friend function

ostream& operator <<(ostream &out,const Point& toprint)
{
	out<<"the point is:("<<toprint.x<<","<<toprint.y<<")";
	return out;
}


//-----succor function


double Point::getDistance(const Point & B)const
{

	double s=this->getX()-B.getX();     //  (X1-X2)
	double p=this->getY()-B.getY();     //  (Y1-Y2)



	return sqrt(s*s + p*p);        //sqrt of (x1-x2)^2 + (y1-y2)^2 is a distance between two point

}

#include<iostream>
using namespace std;
#include "Pointh.h"

Point::Point(int x,int y)
{
	this->setX(x);
	this->setY(y);
}

int Point::getX()const
{
	return this->x;
}
int Point::getY()const
{
	return this->y;
}

void Point::setX(int x)
{
	this->x=x;
}

void Point::setY(int y)
{
	this->y=y;
}

ostream& operator <<(ostream &out,const Point& toprint)
{
	out<<"the point is:("<<toprint.x<<","<<toprint.y<<")";
	return out;
}

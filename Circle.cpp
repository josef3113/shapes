#include "Circle.h"
#include "Shape.h"



Circle::Circle(Point p,int r)
{
	if(r<=0)
		{
			this->radius=1;
			cout<<"the radius can't be neg so initialized to 1"<<endl;
		}
	else
		{
			this->radius=r;
		}
	this->Center=p;

	cout <<"c co"<<endl;
}


Circle::~Circle(void)
{
	cout<< "c dis"<<endl;
}

//-----setres

Circle& Circle::setCenter(const Point & p)
{
	this->Center=p;
	return (*this);
}

Circle& Circle::setRadius(const int & r)
{
	this->radius=r;
	return (*this);
}


//------grters 

Point Circle::getCenter()const
{
	return this->Center;
}

int Circle::getRadius()const
{
	return this->radius;
}

//----function of Circle 

double Circle::getArea()const
{
    return PHI*radius*radius;
}

double Circle::getPerimeter()const
{
	return 2*PHI*radius;
}
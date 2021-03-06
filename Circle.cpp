#include "Circle.h"
#include "Shape.h"



Circle::Circle(Point center,int r)
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
	this->Center=center;

}

Circle::Circle(const Circle & other)
{
	(*this)=other;  //because no have pointer its ok to use in operator =
}

Circle::~Circle(void)
{
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

//--------operators

Circle& Circle:: operator =(const Circle & other)
{
	this->radius=other.radius;
	this->Center=other.Center;

	return (*this);
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
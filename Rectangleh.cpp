#include "Rectangleh.h"


Rectangle::Rectangle(Point A,Point C )
{
	this->A=A;                          // A from inheritance of Polygon
	this->C=C;                          // C from inheritance of Polygon
	
	cout<<"Rec c"<<endl;

}

Rectangle::Rectangle(const Rectangle& other)
{
  (*this)=other;    //because no have pointers it ok to use in operator =

}

Rectangle::~Rectangle(void)
{
	cout<<"Rec dis"<<endl;
}


//----setres

Rectangle& Rectangle::setA(const Point & p)
{
	this->A=p;
	return (*this);
}

Rectangle& Rectangle::setC(const Point & p)    
{
	this->C=p;
	return (*this);
}




//-------- its considered attributes 

int Rectangle::getLenght()const
{
	return abs( C.getX()-A.getX() );
}


int Rectangle::getWidth()const
{
	return abs( C.getY()-A.getY() );
}

//-----operators

Rectangle& Rectangle::operator=(const Rectangle& other)
{
	this->A=other.A;
	this->C=other.C;
	
	return (*this);
}


//-----function of Rectangle

double Rectangle:: getArea()const
{
	return ( ( this->getLenght() ) *  ( this->getWidth() ) );
}

double Rectangle::getPerimeter()const
{
	return 2*( ( this->getLenght() )  +  ( this->getWidth() ) );
}

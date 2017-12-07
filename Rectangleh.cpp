#include "Rectangleh.h"


Rectangle::Rectangle(Point A,Point C )
{
	this->A=A;                          // A from inheritance of Polygon
	this->C=C;                          // C from inheritance of Polygon
	this->lenght=abs(C.getX()-A.getX());
	this->width=abs(C.getY()-A.getY());
	cout<<"Rec c"<<endl;

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

Rectangle& Rectangle::setC(const Point & p)    //to add the effect from this action
{
	this->C=p;
	return (*this);
}

//not exist set to lenght and width because they dependent in point A and point C

//-----getrs

Point Rectangle::getA()const
{
	return this->A;
}

Point Rectangle::getC()const
{
	return this->C;
}

int Rectangle::getLenght()const
{
	return this->lenght;
}

int Rectangle::getWidth()const
{
	return this->width;
}



//-----function of Rectangle

double Rectangle:: getArea()const
{
	return (this->lenght) * (this->width);
}

double Rectangle::getPerimeter()const
{
	return 2*( this->lenght  +  this->width);
}

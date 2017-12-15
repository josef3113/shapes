#ifndef RECTANGLE_H
#define RECTANGLE_H


#include "Polygon.h"

class Rectangle :public Polygon
{
		

public:


	Rectangle( Point=(0,0) , Point=(0,0) ); //defult constractor
	Rectangle(const Rectangle&);            //copy constractor
	~Rectangle();

	//----setres

	Rectangle& setA(const Point&);
    Rectangle& setC(const Point&);

	//-----getrs  inheritance from polygon


	//-----its considered attribute

	int getLenght()const;
	int getWidth()const;

	//------operators
	Rectangle& operator=(const Rectangle &);

	//----function of Rectangle
     
	double getArea()const;
	double getPerimeter()const;

};

#endif
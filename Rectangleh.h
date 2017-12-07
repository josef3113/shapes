#pragma once
#include "Polygon.h"

class Rectangle :public Polygon
{
	private:
		int lenght;
		int width;

public:


	Rectangle( Point=(0,0) , Point=(0,0) ); //defult constractor
	~Rectangle();

	//----setres
	Rectangle& setA(const Point&);
    Rectangle& setC(const Point&);
	//-----getrs
	Point getA()const;
	Point getC()const;
	int getLenght()const;
	int getWidth()const;

	//----function of Rectangle
     
	double getArea()const;
	double getPerimeter()const;

};
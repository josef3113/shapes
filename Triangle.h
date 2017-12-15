#pragma once
#include "Polygon.h"

class Triangle :public Polygon
{
	Point B;

public:

	Triangle( Point=(0,0),Point=(0,0),Point=(0,0) ); //defult constractor
	Triangle(const Triangle&);                       //copy constractor

	~Triangle();

	//----getrs            _getA and _getC is inheritance from Polygon

	Point getB()const;   

	//------setrs

	Triangle& setA(const Point&);
	Triangle& setB(const Point&);
	Triangle& setC(const Point&);

	//----operators
	Triangle& operator =(const Triangle &);

	//------function of Triangle

	double getArea()const;
	double getPerimeter()const;

	
};


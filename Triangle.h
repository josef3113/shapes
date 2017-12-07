#pragma once
#include "Polygon.h"

class Triangle :public Polygon
{
	Point B;
	double AB;      
	double BC;
	double CA;

public:

	Triangle( Point=(0,0),Point=(0,0),Point=(0,0) ); //defult constractor
	~Triangle();

	double getArea()const;
	double getPerimeter()const;
};

//  escort function 

//double distance(Point ,Point);


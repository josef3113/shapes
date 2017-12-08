#pragma once
#include "Polygon.h"

class Triangle :public Polygon
{
	Point B;
	/*double AB;      
	double BC;
	double CA;
*/
public:

	Triangle( Point=(0,0),Point=(0,0),Point=(0,0) ); //defult constractor
	~Triangle();

	//------function of Triangle

	double getArea()const;
	double getPerimeter()const;

	//------ considered attribute
	double getAB()const;
	double getBC()const;
	double getCA()const;
};

//  escort function 

//double distancePoint(Point ,Point);


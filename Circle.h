#pragma once
#include "Shape.h"
#include "Pointh.h"

class Circle :public Shape
{
private:
	int radius;
	Point point;
public:
	

	Circle(Point point=(0,0),int r=0);  //difult constractor
	~Circle();

	//---setres
	Circle& setPoint(const Point&);
	Circle& setRadius(const int &);

	//---geters

	Point getPoint()const;
	int getRadius()const;

	//----function of Circle
	double getArea()const;
	double getPerimeter()const;


};


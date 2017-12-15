#pragma once
#include "Shape.h"
#include "Pointh.h"


# define  PHI 3.1415               //to calculate area and perimeter of circle


class Circle :public Shape
{
private:
	int radius;
	Point Center;
public:
	

	Circle(Point center=(0,0),int r=0);  //difult constractor
	Circle(const Circle&);               //copy constractor
	~Circle();

	//---setres
	Circle& setCenter(const Point&);
	Circle& setRadius(const int &);

	//---geters

	Point getCenter()const;
	int getRadius()const;

	//-------operators
	Circle& operator =(const Circle&);

	//----function of Circle
	double getArea()const;
	double getPerimeter()const;


};


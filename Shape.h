#ifndef SHAPE_H
#define SHAPE_H

#include <iostream>
//#include "square.h"
using namespace std;

class Shape
{
public:
	Shape(){}
	
	virtual double getArea()const=0;
	virtual double getPerimeter()const=0;

	virtual ~Shape(){}
};

#endif
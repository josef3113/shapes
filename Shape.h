#pragma once
#include <iostream>
//#include "square.h"
using namespace std;

class Shape
{
public:
	Shape(){cout<<"shape co"<<endl;}
	
	virtual double getArea()const=0;
	virtual double getPerimeter()const=0;

	virtual ~Shape(void){cout<<"shape dis"<<endl;}
};


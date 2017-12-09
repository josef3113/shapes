#pragma once
#include "Shape.h"
#include "Pointh.h"


class Polygon :public Shape
{
protected :
	Point A;
	Point C;

public:

	Polygon(){};
	~Polygon(){};

	double getedge(const Point &A,const Point &B)const {return distancePoint(A,B);}
	Point getA()const{return A;}
	Point getC()const{return C;}




};


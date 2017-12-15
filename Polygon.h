#ifndef POLYGON_H
#define POLYGON_H

#include "Shape.h"
#include "Pointh.h"


class Polygon :public Shape
{
protected :
	Point A;
	Point C;

public:

	Polygon(){};
	~Polygon(){};    //it's inheretance from shape so it is virtual too

	double getEdge(const Point &A,const Point &B)const {return A.getDistance(B);}
	Point getA()const{return A;}
	Point getC()const{return C;}




};
#endif

#ifndef POINT_H
#define POINT_H

class Point
{
private:
	int x, y;

public:

	Point(int x=0, int y=0);   //defult constractor
	~Point();

	//-----getrs

	int getX() const;
	int getY() const;

	//-----setrs

	void setX(int x);
	void setY(int y);
	
	//function of Point 
	double getDistance(const Point &B)const;
	
	
	//friend function

	friend ostream& operator <<(ostream &out,const Point & toprint);

};



#endif
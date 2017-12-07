#pragma once
#include "Shape.h"


class Square :public Shape
{
private:
	int lenght;

public:
	void draw();
	Square(int lenght =0);
	~Square(void);
};


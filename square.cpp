#include "square.h"
#include <iostream>
using namespace std;


Square::Square(int lenght)
{
	this->lenght=lenght;
	cout<< "sq co"<<endl;
}


Square::~Square(void)
{
	cout<< "sq dis"<<endl;
}
void Square::draw()
{
	cout<<"the lenght is"<<this->lenght<<"its square\n";
}
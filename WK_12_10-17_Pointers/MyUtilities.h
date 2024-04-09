#pragma once
#include"Person.h"
#include"Rectangle.h"
class MyUtilities
{
private:

public:
	int areaRectangle(Rectangle* w1, Rectangle* h1);
	int outputRecDimensions(Rectangle* w1, Rectangle* h1);
	int magnifyRectangle(Rectangle* w1, Rectangle* h1);
	int lengthOfName(Person* p);
};
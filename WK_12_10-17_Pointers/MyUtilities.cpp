#include "MyUtilities.h"
#include<iostream>
using namespace std;

int MyUtilities::areaRectangle(Rectangle* w1, Rectangle* h1)
{
	int area = -1;
	area = w1->getWidth() * h1->getHeight();
	return area;
}

int MyUtilities::outputRecDimensions(Rectangle* w1, Rectangle* h1)
{
	cout << endl;
	cout << "Width of the magnified rectangle is " << w1->getWidth() << endl;
	cout << "Height of the magnifies rectangle is " << h1->getHeight() << endl;
	return 0;
}

int MyUtilities::magnifyRectangle(Rectangle* w1, Rectangle* h1)
{
	int magnify = -1;
	cout << "Enter the magnification factor: ";
	cin >> magnify;
	w1->setWidth(w1->getWidth() * magnify);
	h1->setHeight(h1->getHeight() * magnify);
	outputRecDimensions(w1, h1);
	return 0;
}

int MyUtilities::lengthOfName(Person* p)
{
	string tempName = ""; // local variable
	int length = -1;
	tempName = p->getName(); // calling getter method
	length = tempName.length();
	return length;
}

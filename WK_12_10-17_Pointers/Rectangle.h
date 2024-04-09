#pragma once
#include<iostream>
using namespace std;
class Rectangle
{
 private:
    int width, height; // private data members, must use getters and setters
public:
    Rectangle() // constructor
    {
        cout << "\n";
        cout<< "Default rectangle constructor called\n";
        width = 0;
        height = 0;
    }
    int getWidth() { return width; }
    int getHeight() { return height; }
    void setWidth(int w) { width = w; }
    void setHeight(int h) { height = h; }

};

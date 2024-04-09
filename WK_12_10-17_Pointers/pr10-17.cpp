// This program uses pointers to dynamically allocate 
// structures and class objects. 
#include <iostream>
#include <string>
#include"Rectangle.h" // include rectangle header file
#include"Person.h" // include person header file
#include"MyUtilities.h" // include myutilities header file
using namespace std;

int main()
{
    Rectangle *pRect = nullptr;    // Pointer to Rectangle object NOT class
    Person *pPerson = nullptr;     // Pointer to Person 
    MyUtilities m; // Pointer to MyUtilities object

    // Local object accessed  through a pointer
    Rectangle rect;
    pRect = &rect;
    (*pRect).setHeight(12); // calling setter methods
    pRect->setWidth(10); // calling setter methods
    cout << "Area of the first rectangle is "
		 << m.areaRectangle(pRect, pRect) << "\n\n"; // calling method "areaRectangle
    m.outputRecDimensions(pRect, pRect); // calling method "outputRecDimensions"
    m.magnifyRectangle(pRect, pRect); // calling method "magnifyRectangle"

   
    // Dynamically allocated object accessed through pointer
    pRect = new Rectangle;
    pRect->setHeight(6);
    pRect->setWidth(5);
    cout << "\nArea of the second rectangle is "
             << pRect->getWidth() * pRect->getHeight();
    delete pRect;
    pRect = nullptr;

    // Dynamically allocated object accessed through pointer
    pPerson = new Person("Miguel E. Gonzalez", 23);
    cout << "\n\nThe person's name is " << pPerson->getName();
    cout << "\nThe person's age is " << pPerson->getAge() << endl;
    cout<< "\nLength of the name is "<< m.lengthOfName(pPerson)<< " in their name." << endl;
    delete pPerson;
    pPerson = nullptr;
    
    return 0;
}



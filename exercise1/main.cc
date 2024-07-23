#include <iostream>

using namespace std;

#include "square.h"
#include "circle.h"
#include "equilateral_triangle.h"


int main()
{
    Square* pS = new Square(5);
    cout << "Area of Square with side length is 5: " << pS->area() << "\n";
    delete pS;

    Circle* pC = new Circle(8);
    cout << "Area of Circle with radius is 8: " << pC->area() << "\n";
    delete pC;

    EquilateralTriangle* pEquiTriangle = new EquilateralTriangle(3);
    cout << "Area of Equilateral Triangle with side length is 3: " << pEquiTriangle->area() << "\n";
    delete pEquiTriangle;

    return 0;
}
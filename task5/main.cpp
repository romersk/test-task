#include <iostream>
#include <math.h>

using namespace std;

class Shape
{
public:
    virtual void calculateArea(double a, double b)
    {
        cout << "It's a shape" << endl;
    }
};

class Circle: public Shape
{
public:
    virtual void calculateArea(double a, double b)
    {
        cout << "Circle" << endl;
        cout << "S = Pi * r^2" << endl;
        double area = pow(b, 2) * M_PI;
        cout << "Area = " << round(area) << endl;
    }
};

class Triangle: public Shape
{
public:
    virtual void calculateArea(double a, double b)
    {
        cout << "Triangle" << endl;
        cout << "S = (a*b)/2" << endl;
        double area = (a*b)/2;
        cout << "Area = " << round(area) << endl;
    }
};

class Rectangle: public Shape
{
public:
    virtual void calculateArea(double a, double b)
    {
        cout << "Rectangle" << endl;
        cout << "S = a*b" << endl;
        double area = a*b;
        cout << "Area = " << round(area) << endl;
    }
};

int main()
{
    Circle circle;
    Triangle triangle;
    Rectangle rectangle;
    Shape &shape = circle;
    shape.calculateArea(3, 6);
    Shape &shapeTr = triangle;
    shapeTr.calculateArea(3, 6);
    Shape &shapeRec = rectangle;
    shapeRec.calculateArea(3, 6);
    return 0;
}

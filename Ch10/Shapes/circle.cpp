#include <iostream>
#include <cmath>
#include "circle.h"

Circle::Circle()
{
    setRadius(1);
}

Circle::Circle(double dblpRadius)
{
    setRadius(dblpRadius);
}

Circle::~Circle()
{
    setRadius(0.1);
}

void Circle::setRadius(double dblpRadius)
{
    if (dblpRadius < 0.0)
    {
        dblpRadius = 1.0;
        std::cerr << "Default value set to 1, invalid radius entry." << std::endl;
    }
    dblRadius = dblpRadius;
}
double Circle::getRadius()
{
    return dblRadius;
}
double Circle::getDiameter()
{
    return 2.0 * getRadius();
}
double Circle::getCircumference()
{
    return 2.0 * getRadius() * M_PI;
}
void Circle::print()
{
    std::cout << "This circle object has a radius of: " << getRadius() << " a diameter of: " << getDiameter()
              << " and a circumference of: " << getCircumference() << std::endl;
}
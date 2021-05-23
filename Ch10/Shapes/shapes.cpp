#include <iostream>
#include "circle.h"

int main () {

    Circle objCircleOne = Circle();
    objCircleOne.print();
    Circle objCircleTwo = Circle(2.5);
    objCircleTwo.print();

    return 0;
}
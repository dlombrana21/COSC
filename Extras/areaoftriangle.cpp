#include <iostream>

int areaoftriangle(int intpWidth, int intpHeight) {
    
    return (intpWidth*(intpHeight/2));
}
int main() {
    int intTriangleBase = 0;
    int intTriangleHeight = 0;
std::cout << "Please enter a triangle base length: ";
std::cin >> intTriangleBase;
std::cout << "Please enter a triangle height: ";
std::cin >> intTriangleHeight;
std:: cout << areaoftriangle(intTriangleBase,intTriangleHeight);

    return 0;
}
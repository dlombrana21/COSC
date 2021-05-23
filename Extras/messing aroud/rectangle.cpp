#include <iostream>
#include <iomanip>

int main () {
    int intHeight = 0;
    int intWidth = 0;
    char chrSymbol = 'x';

    std::cout << "Height: ";
    std::cin >> intHeight;
    std::cout << "Width: ";
    std::cin >> intWidth;
    std::cout << "Symbol: ";
    std::cin >> chrSymbol;
    
    for (int intHCounter = 0; intHCounter < intHeight; intHCounter++) {
        for (int intWCounter = 0; intWCounter < intWidth; intWCounter++) {
            std::cout << std::setw(3) << chrSymbol;
        }
        std::cout  << std::endl;
    }


}
#include <iostream>

int main() {
/*
    for (int intCounter=0; intCounter < 100; intCounter+=2){
        std::cout << intCounter << std::endl;
    }
*/
    int intSize = 10;
    std::cout << "Enter a number between 1 and 20: ";
    std::cin >> intSize;

    for (int intRow = 1; intRow <= intSize; intRow++){
        std::cout << "Row " << intRow << ":\t";
        for(int intColumn = 1; intColumn <= intSize; intColumn++){
            std::cout << (intRow*intColumn) << "\t";
        }
        std::cout<< std::endl;
    }

    return 0;
}
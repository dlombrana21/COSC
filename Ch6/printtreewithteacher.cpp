#include <iostream>


void printTree (int intpHeight) {
        int intNumberofLeaves = 1;
    for (int intBranches = 1; intBranches < intpHeight; intBranches++) {

        for (int intCountSpace = intpHeight - intBranches ; intCountSpace >0; intCountSpace--)
            std::cout << " ";
            for (int intCountofLeaves = 1; intCountofLeaves <= intNumberofLeaves; intCountofLeaves++) {
                std::cout << "*" ;
            }
            std::cout << std::endl;

        intNumberofLeaves+=2;
    }
    for (int intCountSpace = intpHeight - 1 ; intCountSpace >0; intCountSpace--)
            std::cout << " ";
    std::cout << "*" << std::endl;
}

int main() {


    int intNumberofLine = 5;
/*
std::cout << "  *" << std::endl;
std::cout << " ***" << std::endl;
std::cout << "*****" << std::endl;
std::cout << "  *" << std::endl;
std::cout << std::endl;
*/
std::cout << "Please enter a tree height: ";
std::cin >> intNumberofLine;

printTree(intNumberofLine);

std::cout << std::endl;

//printTree(intNumberofLine + 2);

    return 0;
}
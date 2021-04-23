//Daniel L - 04-22-21 || Tree Function Program

#include <iostream>

//how many spaces do we need? (variable for that)
//how to organize them
//how tall to make as input



void printTree (int intTreeHeight){
    int intSpaces = intTreeHeight;
    char charTree = '*';
    char charSpace = ' ';

    std::cout << charTree ; 
}

int main() {
    int intTreeInput;
    std::cout << "Please enter a tree height: ";
    std::cin >> intTreeInput;

    printTree(intTreeInput);

    return 0;
}
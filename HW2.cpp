//ITSE1302 HW2

#include <iostream>

int main() {

int intNumberOne;
int intNumberTwo;

//user ask and input
std::cout << "Please enter your first number: ";
std::cin >> intNumberOne;
std::cout << "Please enter your second number: ";
std::cin >> intNumberTwo;

//the magic
std::cout << "Prepare for the magic..." << std::endl;
std::cout << "Computing........." << std::endl;
std::cout << "Tons of processing here" << std::endl;

//the output
std::cout << "The smallest number is: ";
    if (intNumberOne < intNumberTwo) {
        std::cout << intNumberOne << std::endl;
    } else {
        std::cout << intNumberTwo << std::endl;
    }//if smaller
std::cout << "The largest number is: ";
    if (intNumberOne > intNumberTwo) {
        std::cout << intNumberOne << std::endl;
    }else {
        std::cout << intNumberTwo << std::endl;
    }//if larger
std::cout << "The sum of the two is: " << intNumberOne + intNumberTwo << std::endl;
std::cout << "The difference of the two is: "<< intNumberOne - intNumberTwo << std::endl;
std::cout << "The product of the two is: "<< intNumberOne * intNumberTwo << std::endl;
std::cout << "The ratio of the two is: "<< intNumberOne / intNumberTwo << std::endl;

    return 0;
}
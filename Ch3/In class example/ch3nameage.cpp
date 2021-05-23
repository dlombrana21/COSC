#include <iostream>

std::string strFirstName;
std::string strLastName;
int intAge;
int intMonths;

int main() {
std::cout << "Please enter you First and Last name: " << std::endl;
std::cin >> strFirstName >> strLastName;
std::cout << "Please enter your age: ";
std::cin >> intAge;
intMonths = intAge*12;
std::cout << "Hello " << strFirstName << " " << strLastName << ". You are "<< intMonths << " months old!" << std::endl;

    return 0;
}
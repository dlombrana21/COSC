#include <iostream>

int main() {

double dblPennyVal = .01;
double dblNickelVal = .05;
double dblDimeVal = .1;
double dblQuarterVal = .25;
double dblHalfDollarVal = .50;
double dblDollarVal = 1;
double dblTotal = 0;
double dblPennyTotal;
double dblNickelTotal;
double dblDimeTotal;
double dblQuarterTotal;
double dblHalfDollarTotal;
double dblDollarTotal;

int intPennyCount;
int intNickelCount;
int intDimeCount;
int intQuarterCount;
int intHalfDollarCount;
int intDollarCount;

std::cout << "Please enter the number of pennies you have: ";
std::cin >> intPennyCount;
std::cout << "\nPlease enter the number of nickels you have: ";
std::cin >> intNickelCount;
std::cout << "\nPlease enter the number of dimes you have: ";
std::cin >> intDimeCount;
std::cout << "\nPlease enter the number of quarters you have: ";
std::cin >> intQuarterCount;
std::cout << "\nPlease enter the number of half dollars you have: ";
std::cin >> intHalfDollarCount;
std::cout << "\nPlease enter the number of dollars you have: ";
std::cin >> intDollarCount;

if (intPennyCount == 0){
    std::cout << "\n\nYou don't have any pennies" << std::endl;
}else if (intPennyCount == 1) {
    std::cout << "\n\nYou have " << intPennyCount << " penny." << std::endl;
}else {
    std::cout << "\n\nYou have " << intPennyCount << " pennys." << std::endl;
}//penny if

if (intNickelCount == 0){
    std::cout << "\n\nYou don't have any nickels" << std::endl;
}else if (intNickelCount == 1) {
    std::cout << "\n\nYou have " << intNickelCount << " nickel." << std::endl;
}else {
    std::cout << "\n\nYou have " << intNickelCount << " nickels." << std::endl;
}//nickel if

if (intDimeCount == 0){
    std::cout << "\n\nYou don't have any dimes" << std::endl;
}else if (intPennyCount == 1) {
    std::cout << "\n\nYou have " << intDimeCount << " dime." << std::endl;
}else {
    std::cout << "\n\nYou have " << intDimeCount << " dimes." << std::endl;
}//dime if

if (intQuarterCount == 0){
    std::cout << "\n\nYou don't have any quarters." << std::endl;
}else if (intPennyCount == 1) {
    std::cout << "\n\nYou have " << intQuarterCount << " quarter." << std::endl;
}else {
    std::cout << "\n\nYou have " << intQuarterCount << " quarters." << std::endl;
}//quarter if

if (intHalfDollarCount == 0){
    std::cout << "\n\nYou don't have any half dollars" << std::endl;
}else if (intHalfDollarCount == 1) {
    std::cout << "\n\nYou have " << intHalfDollarCount << " half dollar." << std::endl;
}else {
    std::cout << "\n\nYou have " << intHalfDollarCount << " half dollars." << std::endl;
}//half dollar if

if (intDollarCount == 0){
    std::cout << "\n\nYou don't have any dollars." << std::endl;
}else if (intDollarCount == 1) {
    std::cout << "\n\nYou have " << intDollarCount << " dollar." << std::endl;
}else {
    std::cout << "\n\nYou have " << intDollarCount << " dollars." << std::endl;
}//dollar if

//mathzone
dblPennyTotal = intPennyCount * dblPennyVal;
dblNickelTotal = intNickelCount * dblNickelVal;
dblDimeTotal = intDimeCount * dblDimeVal;
dblQuarterTotal = intQuarterCount * dblQuarterVal;
dblHalfDollarTotal = intHalfDollarCount * dblHalfDollarVal;
dblDollarTotal = intDollarCount * dblDollarVal;

dblTotal = dblPennyTotal + dblNickelTotal + dblDimeTotal + dblQuarterTotal + dblHalfDollarTotal + dblDollarTotal;

std::cout << "You have: " << dblPennyTotal << " in pennies" << std::endl;
std::cout << "You have: " << dblNickelTotal << " in nickels" << std::endl;
std::cout << "You have: " << dblDimeTotal << " in dimes" << std::endl;
std::cout << "You have: " << dblQuarterTotal << " in quarters" << std::endl;
std::cout << "You have: " << dblHalfDollarTotal << " in half dollars" << std::endl;
std::cout << "You have: " << dblDollarTotal << " in dollars" << std::endl;

std::cout << "In total you have: $" << dblTotal <<  std::endl;


    return 0;
}
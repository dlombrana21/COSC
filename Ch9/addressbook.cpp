#include <iostream>
#include <vector>
#include "address.h"

Address::Address() {
    init();
}

Address::~Address() {
    setFirst(" ");
    setLast(" ");
    setPhoneNumber("");

}

void Address::print() {
    std::cout << toString();
}

std::string Address::toString() {
    std::string strAddress = getFirst() + " " + getLast() + " " + getPhoneNumber();
    return strAddress;
};
void Address::init() {
    setFirst("");
    setLast("");
    setPhoneNumber("(000)000-0000");
}
void Address::setFirst(std::string strpFirst) {
    if (strpFirst.size() < 1){
        strpFirst = "Default";
        }
    strFirst = strpFirst;
}
void Address::setLast(std::string strpLast) {
    strLast = strpLast;
}
void Address::setPhoneNumber(std::string strpPhoneNumber) {
    strPhoneNumber = strpPhoneNumber;
}

std::string Address::getFirst() {
    return strFirst;
}
std::string Address::getLast() {
    return strLast;
}
std::string Address::getPhoneNumber() {
    return strPhoneNumber;
}

void Address::input() {
    std::string strtempValue = "";
    std::cout << "Enter a first name: ";
    std::cin >> strtempValue;
    setFirst(strtempValue);
    std::cout << "Enter a last name: ";
    std::cin >> strtempValue;
    setLast(strtempValue);
    std::cout << "Enter a phone number: ";
    std::cin >> strtempValue;
    setPhoneNumber(strtempValue);
}

int main() {

    std::vector<Address> vtrAddress(2);
    vtrAddress.clear();
    
    std::vector<Address> vtrAddress2(2);
    vtrAddress2.clear();

    Address objAddress = Address();
    Address objAddress2 = Address();

    objAddress.setFirst("Daniel");
    objAddress.setLast("L");
    objAddress.setPhoneNumber("210-123-4567");
    objAddress.print();
    
    vtrAddress.push_back(objAddress);

    std::cout << std::endl;
    
    objAddress2.setFirst("Chris");
    objAddress.setLast("M");
    objAddress2.setPhoneNumber("210 555 5555");

    objAddress2.print();
    vtrAddress2.push_back(objAddress2);

    std::cout << std::endl;

    objAddress = Address();
    objAddress.setFirst("Sean");
    objAddress.setLast("Connery");
    objAddress.setPhoneNumber("210 444 4444");

    vtrAddress.push_back(objAddress);

    objAddress.input();
    vtrAddress.push_back(objAddress);

for (int intIndex = 0; intIndex < vtrAddress.size(); intIndex++){
    vtrAddress.at(intIndex).print();
    std::cout << std::endl;

}
    
    

    
    return 0;
}
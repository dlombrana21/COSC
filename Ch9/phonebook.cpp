#include <iostream>
#include <vector>

class PhoneBook{
    std::string strLastName = "";
    std::string strFirstName = "";
    int intPhoneNumber = 0;
public:
    void AddToPhoneBook (std::string strpLastName, std::string strpFirstName, int intpPhoneNumber) {
    strLastName = strpLastName;
    strFirstName = strpFirstName;
    intPhoneNumber = intpPhoneNumber;
    std::cout << "Added " << strFirstName << " " << strLastName << " @ " << intpPhoneNumber << " to phone book." << std::endl;
    };
};

void AddUser() {
    
}

int main() {
std::string strLastName = "";
std::string strFirstName = "";
int intPhoneNumber = 0;
bool boolAddAnotherUser = false;
char charUserSelection = 'X';

std::cout << "Please enter a last name: ";
std::cin >> strLastName;
std::cout << "\nPlease enter a first name: ";
std::cin >> strFirstName;
std::cout << "\nPlease enter a phone number in the format xxxxxxxxxx: ";
std::cin >> intPhoneNumber;

PhoneBook user1;

user1.AddToPhoneBook (strLastName, strFirstName, intPhoneNumber);

// do {
// std::cout << "Would you like to add another user? (Y/N)"
// std::cin >> charUserSelection;

// switch(charUserSelection)
//     case 'Y': 
//     strLastName = "";
//     strFirstName = "";
//     intPhoneNumber = 0;
    

// }while (boolAddAnotherUser);

    return 0;
}
#include <iostream>

int main() {
char charChoice = 'x';
bool boolDontQuit = true;

while (boolDontQuit) {
    std::cout << "Main Menu\n" << "=========\n" << "P)lay]n" << "S)ettings\n" << "Q)uit\n" << std::endl;

    std::cout << "Please enter your choice (P,S,Q): ";
    std::cin >> charChoice;


    switch (charChoice)
    {
    case 'P': case 'p':
        std::cout << "This is the menu option for play." << std::endl;
        break;
    case 'S': case 's':
        std::cout << "This is the option for settings." << std::endl;
    case 'Q': case 'q':
        std::cout << "This is the menu option for quit." << std::endl;
        break;

    default:
        std::cout << "Invaldi Menu Choice - Please pick from the menu!" << std::endl;
        break;
    } //switch
}//while

    return 0;
}
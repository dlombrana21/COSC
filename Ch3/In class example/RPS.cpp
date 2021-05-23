#include <iostream>

int main() {
    char charChoice = 'r';
    char charComputer = 'p';
    bool boolDontQuit = false;




 //   while (boolDontQuit==true) {
        std::cout << "Rock, Paper, Scissors" << std::endl;
        std::cout << "Please enter (r, p, s, or x to quit): ";
        std::cin >> charChoice;
        charChoice = tolower (charChoice);
            switch (charChoice){
                case 'r': case 'p': case 's':
                    if (charChoice == charComputer){
                        std::cout <<"Draw!" << std::endl;
                    } else if (charChoice == 'r' && charComputer =='s' ||
                                charChoice == 'p' && charComputer == 'r' ||
                                charChoice == 's' && charComputer == 'p' ) {
                        std::cout << "You won!" << std::endl;
                    } else {
                        std::cout << "You lost!" << std::endl;
                    }//if
                break;
                case 'x':
                    boolDontQuit = false;
                    std::cout << "Thanks for playing";
                    
                default:
                    std::cerr << "You entered an invalid choice." << std::endl;
                    break;         
            }//switch
 //   }//while
   
    return 0;
}
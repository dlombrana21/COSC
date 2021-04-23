#include <iostream>

bool isPrime(int intpNumber) {
        //variable for Prime
        bool boolIsPrime = true;
              
            //reset for testing
            boolIsPrime = true;
         if (intpNumber == 0 || intpNumber == 1) {
                boolIsPrime = false;
            }//if for 0s and 1s
            else {
                for (int intCounter = 2; intCounter <= intpNumber/2; intCounter++){
                    if(intpNumber % intCounter == 0) {
                        boolIsPrime = false;
                        break;
                    }//if
                }//for
            }//else


return boolIsPrime;
}

int main() {

int intEndNum;

std::cout << "Please enter a number and I will check all the prime numbers between 1 and your number: ";
std::cin >> intEndNum;

 for (int intNumber = 1; intNumber <= intEndNum; intNumber++){
        std::cout << intNumber << " is " << (isPrime(intNumber) ? "": "not ") << "a prime number."  << std::endl;
        
        }
 
       
    return 0;
}
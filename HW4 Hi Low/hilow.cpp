//program that guesses your number within 7 guesses
#include <iostream>

int main() {
int intPlayerChoice;
int intCompGuess;
int intHigh = 100;
int intLow = 1;
int intGuessCount = 0;
char charYN;

//input
std::cout << "\nI'll ask whether your number is (L)ower, (H)igher, or (C)orrect." << 
"\nEnter a number for me to guess: ";
std::cin >> intPlayerChoice;
std::cout << std::endl;

//guesswork
while (intCompGuess != intPlayerChoice && intGuessCount <=7 ){
    std::cout << "     Is " << (intHigh + intLow)/2 << "\n(L)ower than your number \n(H)igher than your number \n(C)orrect \n L/H/C: ";
    std::cin >> charYN;
    charYN = toupper(charYN);
    //intGuessCount++;
    

        if (charYN == 'H') {
            intHigh = (intHigh + intLow)/2;
            intGuessCount++;
        }else if (charYN== 'L') {
            intLow = (intHigh + intLow)/2;
            intGuessCount++;
        }else {
            intCompGuess = (intHigh + intLow)/2;
            intGuessCount++;
        } //if end
}//while end

//output
std::cout << "\nYour number is: " << intCompGuess << " and I guessed it in " << intGuessCount << " tries" << std::endl;

    return 0;
}
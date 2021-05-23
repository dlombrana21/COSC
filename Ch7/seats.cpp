#include <iostream>
#include <vector>

int main () {

//std::vector<char> vtrSeatRows ['O','O','O','O','O','O'];
//std::vector<char> vtrSeatColumns ['O','O','O','O','O','O','O','O','O','O','O','O'];
char chrSeatRows[] = {'A','B','C','D','E','F','G','H','I','J','K','L'};
char chrSeatColumns[] = {'1','2','3','4','5','6'};

char myword[] = {'H','e','l','l','o'};

for (int intCounter = 0 ; intCounter <= 5; intCounter++ ) {
std::cout << chrSeatRows[intCounter] << "\t";
}
return 0;
}
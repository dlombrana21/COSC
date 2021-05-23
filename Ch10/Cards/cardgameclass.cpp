#include <iostream>
#include "card.h" 
#include "deck.h"


int main() {
    // Deck of Cards 52
    // Suites = 4
    // Face = A, 2-10, J, Q, K = 13
    Card objCard = Card(37);

    int intCard = 37;

    std::cout << "Please enter a card index (1-52): ";
    std::cin >> intCard;
    objCard.setCardValue(intCard);


//          A                         J  Q  K
//Row 1:    1  2  3  4  5  6 7 8 9 10 11 12 13 - Clubs
//Row 2:    14 15 16 17 18 ...              26 - Diamonds
//Row 3:    27                              39 - Hearts
//Row 4:    40                              52 - Spades
    //std::cerr << "Test 1/1: " << testPassFail(testCardgetFaceNumber()) << std::endl;
    std::cout << "Face Value: " << objCard.getFaceValue() << std::endl;
    std::cout << "Suite Value: " << objCard.getSuiteValue() << std::endl;
    std::cout << "Card: " << objCard.toString() << std::endl;
}
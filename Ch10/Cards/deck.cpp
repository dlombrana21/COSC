#include <iostream>
#include <vector>
#include "deck.h"


Deck::Deck() {
    for (int intCards = 1; intCards <=52; intCards++)
    {
        vtrDeck.push_back(Card(intCards));
    }
    shuffle();
}
Deck::~Deck(){
    vtrDeck.clear();
}

Card Deck::getCard(){
    
    if (intCurrentCardIndex + 1 > vtrDeck.size()){
        return vtrDeck.at(intCurrentCardIndex);
}
    return vtrDeck.at(intCurrentCardIndex++);

void Deck::shuffle(){
    std::random_shuffle(vtrDeck.begin(), vtrDeck.end());
    intCurrentCardIndex = 0;
  }
      
bool Deck::shouldShuffle(){
    int intShufflePoint = (52 * intShufflePercent) / 100;
    return (intCurrentCardIndex > intShufflePoint) ? true : false;
        }


       

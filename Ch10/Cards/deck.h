#include <vector>
#include <algorithm>
#include "card.h"
#include <string>

class Deck {
    public:
        Deck();
        ~Deck();
        Card getCard();
        void shuffle();
        bool shouldShuffle();

        private:
            int intShufflePercent = 75;
            int intCurrentCardIndex = 0;
            std::vector<Card> vtrDeck;
};
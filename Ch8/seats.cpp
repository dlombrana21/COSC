#include <iostream>

const int INTCOLUMNS = 6;
const int INTROWS = 12;

bool isSeatsFull(char arypSeats[][INTCOLUMNS]) {
    bool boolSeatsFull = true;
    for (int intIndexRows = 0; intIndexRows < INTROWS; intIndexRows++) {
        for (int intIndexColumns= 0; intIndexColumns < INTCOLUMNS; intIndexColumns++) {
            if (arypSeats[intIndexRows][intIndexColumns] != 'X') {
            return false;
            }
        }
        
    }
    return boolSeatsFull;
}

void clearSeats(char arypSeats[][INTCOLUMNS], char charpSeatSymbol = ' ') {
    for (int intIndexRows = 0; intIndexRows < INTROWS; intIndexRows++) {
        for (int intIndexColumns= 0; intIndexColumns < INTCOLUMNS; intIndexColumns++) {
            arypSeats[intIndexRows][intIndexColumns] = charpSeatSymbol;
        }
        
    }
}



void print(char arypSeats[][INTCOLUMNS]) {
    for (int intIndexRows = 0; intIndexRows < INTROWS; intIndexRows++) {
        for (int intIndexColumns= 0; intIndexColumns < INTCOLUMNS; intIndexColumns++) {
            std::cout << "[" << arypSeats[intIndexRows][intIndexColumns] << "] ";
        }
        std::cout << std::endl;
    }
}


void inputSeatSelection(char arypSeats[][INTCOLUMNS]) {
    int intRowChoice = 0;
    int intColumnChoice = 0;

    do {
        do {
        std::cout << "Please enter your row number choice (1 to " << INTROWS << "): ";
        std::cin >> intRowChoice;

        }while (intRowChoice < 1 || intRowChoice > INTROWS);
            do {
            std::cout << "Please enter your column number choice (1 to " << INTCOLUMNS << "): ";
            std::cin >> intColumnChoice;
            }while (intColumnChoice < 1 || intColumnChoice > INTCOLUMNS);

    arypSeats[intRowChoice - 1 ][intColumnChoice - 1] = 'X';
    }while(arypSeats[intRowChoice - 1][intColumnChoice-1] == 'X' && isSeatsFull(arypSeats));

arypSeats[intRowChoice-1][intColumnChoice-1] = 'X';

}
    bool inputAnotherSeat() {
        char chrAnotherSeat = ' ';    
        std::cout << "Would you like to enter another seat? (y/n): ";
        std::cin >> chrAnotherSeat;
        
        switch(chrAnotherSeat) {
            case 'y':case 'Y':
            return true;
            break;
            case 'n':case 'N':
            return false;
            break;

            default: 
            return false;
            break;
        }
    }


int main () {
  
    char arySeats[INTROWS][INTCOLUMNS];

    clearSeats(arySeats);
    do {
    print(arySeats);
    inputSeatSelection(arySeats);
    print(arySeats);
    inputAnotherSeat;
}while (inputAnotherSeat());

    return 0;
}
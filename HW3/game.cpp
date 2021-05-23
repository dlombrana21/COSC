#include "pokemon.h"
#include <iostream>


int main () {
int intPlayerChoice = 0;
std::vector<std::string> vtrPokemonOptions = { "Pikachu" , "Bulbasaur", "Geodude"};
// Pokemon objPokemon1 = Pokemon();
// Pokemon objPokemon2 = Pokemon();
// objPokemon1.setPokemonName() = "hi";


std::cout << "Please one, please choose a pokemon: " << vtrPokemonOptions[0] << ", " << vtrPokemonOptions[1] << ", " << vtrPokemonOptions[2] << std::endl;
std::cout << "Choose 1 for " << vtrPokemonOptions[0] << ", 2 for " << vtrPokemonOptions[1] << ", 3 for " << vtrPokemonOptions[2] << std::endl;
std::cin >> intPlayerChoice;
Pokemon::setPlayerChoice(intPlayerChoice);
std::cout <<  "You have selected " <<  vtrPokemonOptions[intPlayerChoice];

}
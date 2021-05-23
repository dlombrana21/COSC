#include <string>
#include <vector>
#ifndef POKEMON_H
#define POKEMON_H

class Pokemon{
        std::string strPokemonName;
        int intHealth;
        std::vector<std::string> vtrMoveset;
        std::vector<std::string> vtrPokemonOptions;
    public:
        Pokemon();
        ~Pokemon();
        void init();
        void setPokemonHealth(int intpPokemonHealth);
        void setPokemonName(std::string strpPokemonName);
        void setPlayerChoice(int intpPlayerChoice);
        std::string toString();
        int getPlayerChoice();
        int getPokemonHealth();
        std::string getPokemonName();

};
#endif
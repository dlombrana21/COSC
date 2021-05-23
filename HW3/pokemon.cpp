#include "pokemon.h"
#include <iostream>


    Pokemon::Pokemon() {
        init();
    }
    Pokemon::~Pokemon() {
        setPokemonName("Not Initialized");
        setPokemonHealth(0);
        setPlayerChoice(0);
    }
    void Pokemon::init() {
        setPokemonName(" ");
        setPokemonHealth(100);
        setPlayerChoice(0);
    }
    void Pokemon::setPokemonHealth(int intpHealth){
       if (intpHealth <= 0) {
           std::cout << "Your pokemon was defeated." << std::endl;
       } else if (intpHealth >= 125) {
           std::cout << "Your health is too high." << std::endl;
       }else {
           Pokemon::intHealth = intpHealth;
       }
    }
    int Pokemon::getPokemonHealth(){
        return Pokemon::intHealth;
    }
    void Pokemon::setPokemonName(std::string strpPokemonName){
        std::cout << "Please ";
    }
    void setPlayerChoice(int intpPlayerChoice){
        
    }
    std::string Pokemon::getPokemonName(){
        return Pokemon::strPokemonName;
    }
    std::string Pokemon::toString(){

    }
    void Pokemon::setPlayerChoice(int intpPlayerChoice){

    }
    int Pokemon::getPlayerChoice(){

    }

int playerChoice (int intpChoice) {
 if (intpChoice < 1 || intpChoice > 3) {
     std::cout << "Default choice set to Pikachu" << std::endl;
     return 0;
    }
    return intpChoice-=1;
}


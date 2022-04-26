#include "Game.hpp"
using namespace coup;
Game::Game(){
    this->currPlayers = new vector<string>[6];
    
}
string Game::turn(){
    return "coup-a";
}
vector<string> Game::players(){
    return *this->currPlayers;
}

string Game::winner(){
    return "coup-a";
}

// void Game::addPlayer(Player *player){

// }

   
#include "Game.hpp"
using namespace coup;
// constexpr int maxPlayers = 6;
Game::Game(){
    // this->currTurn = 0;
    // this->currPlayers = new vector<Player>[maxPlayers];
    
}
string Game::turn(){
    return "coup-a";
}
vector<string> Game::players(){
    vector<string> listPlayers;
    return listPlayers;
}

string Game::winner(){
    return "coup-a";
}

void Game::addPlayer(Player *player)const{
    this->currPlayers->push_back(*player);
}
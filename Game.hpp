#pragma once
#include <string>
#include <vector>
// #include "Player.hpp"
using namespace std;

namespace coup{
    class Game{
        public:
            vector<string>* currPlayers;
            Game();
            string turn();
            vector<string> players();
            string winner();
            // void addPlayer(Player *player);
    };
}

#pragma once
#include <string>
#include <vector>
#include "Player.hpp"
constexpr int maxPlayers = 6;
using namespace std;
namespace coup{
    class Player;
    class Game{
        public:
            vector<Player>* currPlayers = new vector<Player>[maxPlayers];;
            Game();
            // int currTurn;
            static string turn();
            static vector<string> players();
            static string winner();
            void addPlayer(Player *player)const;
    };
}
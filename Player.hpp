
#pragma once
#include "Game.hpp"
#include <string>
#include <vector>
using namespace std;
namespace coup{
    class Game;
    class Player{
        public:
            Player();
            // Game *game;
            // string job;
            // string name;
            int wage = 0;
            // bool alive;
            static int coins();
            static string role();
            void income();
            void foreign_aid();
            void coup(Player const &);

    };
}
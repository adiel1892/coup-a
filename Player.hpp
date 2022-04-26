#pragma once
#include "Game.hpp"
namespace coup{
    class Player{
        public:
            Player();
            int wage;
            int coins();
            string role();
            void income();
            void foreign_aid();
            void coup(Player);

    };
}
#include "Player.hpp"
namespace coup{
    class Captain : public Player{
        public:
        Captain(Game game , string name);
        void steal(Player);
        void block(Player);
    };
}
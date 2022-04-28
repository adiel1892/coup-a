#include "Player.hpp"
namespace coup{
    class Captain : public Player{
        public:
        Captain(Game game , string const &name);
        void steal(Player const &);
        void block(Player const &);
    };
}
#include "Player.hpp"
namespace coup{
    class Duke : public Player{
        public:
        Duke(Game game , string const &name);
        void block(Player const &);
        void tax();
    };
}
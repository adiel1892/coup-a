#include "Player.hpp"
namespace coup{
    class Contessa : public Player{
        public:
        Contessa(Game game , string const &name);
        void block(Player);
    };
}
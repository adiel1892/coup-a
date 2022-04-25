#include <string>
#include <vector>
namespace coup{
    class Game{
        public:
            vector<string>* currPlayers;
            Game();
            void turn();
            vector<string> players();
            string winner();
    };
}
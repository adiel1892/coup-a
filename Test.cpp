#include "Player.hpp"
#include "Duke.hpp"
#include "Assassin.hpp"
#include "Ambassador.hpp"
#include "Captain.hpp"
#include "Contessa.hpp"
#include "Game.hpp"

#include "doctest.h"
using namespace coup;

Game game_1{};
Duke duke{game_1, "Moshe"};
Assassin assassin{game_1, "Yossi"};
Ambassador ambassador{game_1, "Meirav"};
Captain captain{game_1, "Reut"};
Contessa contessa{game_1, "Gilad"}; 
TEST_CASE("game 1"){
    vector<string> players = game_1.players();
    CHECK(players.size() == 5);
    CHECK(players.at(0) == "Moshe");
    CHECK(players.at(1) == "Yossi");
    CHECK(players.at(2) == "Meirav");
    CHECK(players.at(3) == "Reut");
    CHECK(players.at(4) == "Gilad");
    CHECK(game_1.turn() == "Moshe");

    CHECK(duke.wage == 0);
    duke.income();
    CHECK(duke.wage == 1);

    CHECK(assassin.wage == 0);
    assassin.income();
    CHECK(assassin.wage == 1);

    CHECK(ambassador.wage == 0);
    ambassador.income();
    CHECK(ambassador.wage == 1);

    CHECK(captain.wage == 0);
    captain.income();
    CHECK(captain.wage == 1);

    CHECK(contessa.wage == 0);
    contessa.income();
    CHECK(contessa.wage == 1);
    contessa.income();
    CHECK(contessa.wage == 2);

    CHECK_THROWS(duke.coup(contessa));
    CHECK_THROWS(captain.coup(contessa));
    CHECK_THROWS(assassin.coup(contessa));
    CHECK_THROWS(ambassador.coup(contessa));
    CHECK_THROWS(contessa.coup(duke));


}

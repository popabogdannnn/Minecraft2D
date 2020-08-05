#include <iostream>
#include "Game.h"


/*
    Game class:
        is a singleton
        holds:
            player data
            mob data

*/

Game* Game::GameInstance = nullptr;

int main()
{
    Game *game = game -> getInstance();
    game->run();
    return 0;
}
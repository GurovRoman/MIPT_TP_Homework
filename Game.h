#ifndef TP_PROJECT_GAME_H
#define TP_PROJECT_GAME_H

#include "libtcod/libtcod.hpp"
#include "Actor.h"
#include "Client.h"

class Game {
public:
    Client client;
    TCODList<Actor *> actors;
    //Map *map;

    Game();
    ~Game();
    void update();
    void render();
};


#endif //TP_PROJECT_GAME_H

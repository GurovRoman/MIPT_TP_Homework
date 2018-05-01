#ifndef TP_PROJECT_GAME_H
#define TP_PROJECT_GAME_H

#include "libtcod/libtcod.hpp"
#include "Actor.h"
#include "Client.h"

class Game {
private:
    void processInputEvents();
public:
    Client client;
    TCODList<Actor *> actors;
    TCODList<TCOD_key_t> key_events;
    //Map map;
    //GUI gui;

    Game();
    ~Game();
    void update();
    void render();
};


#endif //TP_PROJECT_GAME_H

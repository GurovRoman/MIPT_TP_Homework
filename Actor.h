#ifndef TP_PROJECT_ACTOR_H
#define TP_PROJECT_ACTOR_H

#include "libtcod/libtcod.hpp"

class Actor {
public:
    int x, y;
    int tex; // ascii code
    TCODColor color;

    explicit Actor(int tex = '}', const TCODColor &color = TCODColor(255, 255, 255));
    virtual void render() const;
    virtual void think() =0;
};

#endif //TP_PROJECT_ACTOR_H

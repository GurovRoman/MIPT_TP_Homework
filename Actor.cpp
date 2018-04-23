#include "Actor.h"

void Actor::render() const {
    TCODConsole::root->setChar(x, y, tex);
    TCODConsole::root->setCharForeground(x, y, color);
}

Actor::Actor(int tex, const TCODColor &col) :
        x(0), y(0), tex(tex), color(col) {
}

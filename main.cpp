#include "Game.h"
#include "libtcod/console_types.h"

int main() {
    Game game;
    TCODSystem::setFps(60);
    while (!TCODConsole::isWindowClosed()) {
        game.update();
        game.render();
    }
    return 0;
}

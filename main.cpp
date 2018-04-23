#include "Game.h"

int main() {
    Game game;
    TCODSystem::setFps(2);
    while (!TCODConsole::isWindowClosed()) {
        game.update();
        game.render();
        TCODConsole::flush();
    }
    return 0;
}

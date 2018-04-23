#include "Game.h"
#include "forsen_units.h"

Game::Game() : client() {
    TCODConsole::initRoot(80, 50, "Game", false);
}

Game::~Game() {
    actors.clearAndDelete();
}

void Game::update() {
    for (auto actor : actors) {
        actor->think();
    }
}

void Game::render() {
    TCODConsole::root->clear();
    for (auto actor : actors) {
        actor->render();
    }
}
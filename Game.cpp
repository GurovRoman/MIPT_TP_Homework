#include <iostream>
#include "Game.h"
#include "forsen_units.h"
#include "libtcod/console_types.h"

Game::Game() {
    TCODConsole::initRoot(80, 50, "Game", false);
}

Game::~Game() {
    actors.clearAndDelete();
}

void Game::update() {
    processInputEvents();

    for (auto actor : actors) {
        actor->think();
    }
}

void Game::render() {
    TCODConsole::root->clear();
    for (auto actor : actors) {
        actor->render();
    }
    if (!key_events.isEmpty()) {
        for (auto key = key_events.begin(); key != key_events.end(); ++key) {
            TCODConsole::root->print(0, key - key_events.begin(), "Key: %d. Pressed: %d. Text: %s",
                                     key->c, key->pressed, key->text);
        }
    }
    TCODConsole::flush();
}

void Game::processInputEvents() {
    key_events.clear();
    while (true) {
        TCOD_key_t key{};
        TCOD_event_t event = TCODSystem::checkForEvent(TCOD_EVENT_KEY, &key, nullptr);
        if (!event) {
            break;
        }
        key_events.push(key);
    }
}

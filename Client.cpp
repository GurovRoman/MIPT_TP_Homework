#include "Client.h"

Client::Client() {
    unit_factory = new ForsenFactory;
}

Client::~Client() {
    delete unit_factory;
}

void Client::think() {

}

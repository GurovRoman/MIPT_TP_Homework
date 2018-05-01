#ifndef TP_PROJECT_CLIENT_H
#define TP_PROJECT_CLIENT_H

#include "concrete_factories.h"
#include "Selection.h"

class Client {
private:
    UnitFactory *unit_factory;
    Selection selection;

public:
    Client();
    ~Client();
    void think();
};


#endif //TP_PROJECT_CLIENT_H

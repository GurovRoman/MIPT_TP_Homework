#ifndef TP_PROJECT_SELECTION_H
#define TP_PROJECT_SELECTION_H

#include "Actor.h"

class Selection {
private:
    TCODList<Actor *> list;

public:
    void add(Actor *);
    void remove(Actor *);
    void issueOrder();
};


#endif //TP_PROJECT_SELECTION_H

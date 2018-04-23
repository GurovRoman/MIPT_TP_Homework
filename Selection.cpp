#include "Selection.h"

void Selection::add(Actor *actor) {
    if (!list.contains(actor)) {
        list.push(actor);
    }
}

void Selection::remove(Actor *actor) {
    if (list.contains(actor)) {
        list.remove(actor);
    }
}

void Selection::issueOrder() {
    for (auto actor : list) {
        //actor->issueOrder();
    }
}

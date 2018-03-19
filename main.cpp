#include "unit.h"
#include "unit_factory.h"
#include "concrete_factories.h"

int main() {
    UnitFactory* factory = new ForsenFactory;
    for (int i = 0; i < 2; ++i) {
        Unit* unit = factory->constructUnitById(i);
        unit->think();
        delete unit;
    }
    delete factory;
    factory = new CancerFactory;
    for (int i = 0; i < 1; ++i) {
        Unit* unit = factory->constructUnitById(i);
        unit->think();
        delete unit;
    }
}

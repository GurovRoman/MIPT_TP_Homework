#include "concrete_factories.h"
#include "forsen_units.h"
#include "cancer_units.h"

Unit* ForsenFactory::constructUnitById(int id) {
    if (id == 0) {
        return new Nazimod;
    }
    else if (id == 1) {
        return new BruceU;
    }
    else throw;
}

Unit* CancerFactory::constructUnitById(int id) {
    if (id == 0) {
        return new ForsenRedSonic;
    }
    else throw;
}

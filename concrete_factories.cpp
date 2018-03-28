#include "concrete_factories.h"
#include "forsen_units.h"
#include "cancer_units.h"

Unit* ForsenFactory::constructUnitById(int id) {
    if (id == ForsenUnits::kNaziMod) {
        return new Nazimod;
    }
    else if (id == ForsenUnits::kBruceU) {
        return new BruceU;
    }
    else throw;
}

Unit* CancerFactory::constructUnitById(int id) {
    if (id == CancerUnits::kForsenRedSonic) {
        return new ForsenRedSonic;
    }
    else throw;
}

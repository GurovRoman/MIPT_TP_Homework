#ifndef TP_PROJECT_FORSEN_UNITS_H
#define TP_PROJECT_FORSEN_UNITS_H

#include "unit.h"

enum ForsenUnits {
    kNaziMod,
    kBruceU
};

class Nazimod : public Unit{
    void think() override ;
};

class BruceU : public Unit{
    void think() override;
};


#endif //TP_PROJECT_FORSEN_UNITS_H

#ifndef TP_PROJECT_UNIT_FACTORY_H
#define TP_PROJECT_UNIT_FACTORY_H

#include "unit.h"

struct UnitFactory {
    virtual Unit* constructUnitById(int) =0;
};

#endif //TP_PROJECT_UNIT_FACTORY_H

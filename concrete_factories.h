#ifndef TP_PROJECT_FACTORIES_H
#define TP_PROJECT_FACTORIES_H

#include "unit_factory.h"
#include "unit.h"

class ForsenFactory : public UnitFactory {
public:
    Unit* constructUnitById(int id) override;
};

class CancerFactory : public UnitFactory {
public:
    Unit* constructUnitById(int id) override;
};

#endif //TP_PROJECT_FACTORIES_H

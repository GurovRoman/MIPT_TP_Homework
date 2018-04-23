#ifndef TP_PROJECT_CANCER_UNITS_H
#define TP_PROJECT_CANCER_UNITS_H

#include "unit.h"

enum CancerUnits {
    kForsenRedSonic
};

struct ForsenRedSonic : public Unit{
    void think() override;
};

#endif //TP_PROJECT_CANCER_UNITS_H

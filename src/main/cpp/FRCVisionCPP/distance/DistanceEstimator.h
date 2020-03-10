#ifndef DISTANCEESTIMATOR_H
#define DISTANCEESTIMATOR_H

#include "../targeting/Target.h"

class DistanceEstimator
{
    public:
        virtual double getDistance(Target target);
};

#endif // DISTANCEESTIMATOR_H

#ifndef FIXEDANGLECAMERADISTANCEESTIMATOR_H
#define FIXEDANGLECAMERADISTANCEESTIMATOR_H

#include "DistanceEstimator.h"
#include "../targeting/Target.h"

class FixedAngleCameraDistanceEstimator : public DistanceEstimator
{
    public:
        FixedAngleCameraDistanceEstimator(double, double, double);
        double getDistance(Target target);
        double toRads(double);

    private:
        double targetHeight, cameraHeight, cameraMountingAngle; //!< Member variable "cameraMountingAngle"
};

#endif // FIXEDANGLECAMERADISTANCEESTIMATOR_H

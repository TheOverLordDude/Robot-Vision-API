#include "FixedAngleCameraDistanceEstimator.h"
#include <cmath>
#include "../targeting/Target.h"

FixedAngleCameraDistanceEstimator::FixedAngleCameraDistanceEstimator(double targetHeight, double cameraHeight, double cameraMountingAngle)
{
    this->targetHeight = targetHeight;
    this->cameraHeight = cameraHeight;
    this->cameraMountingAngle = cameraMountingAngle;
}

double FixedAngleCameraDistanceEstimator::getDistance(Target target)
{
    return (targetHeight - cameraHeight) / tan(this->toRads(target.getVerticalAngle() + this->cameraMountingAngle))
}

double FixedAngleCameraDistanceEstimator::toRads(double angle)
{
    return angle * M_PI / 180;
}

#include "AreaCameraDistanceEstimator.h"
#include "../targeting/Target.h"

AreaCameraDistanceEstimator::AreaCameraDistanceEstimator(AreaDistancePair close, AreaDistancePair far)
{
    this->close = close;
    this->far = far;
}

double AreaCameraDistanceEstimator::getDistance(Target target)
{
    double minArea = this->far.areaPercentage;
    double maxArea = this->close.areaPercentage;
    double minDistance = this->close.distance;
    double maxDistance = this->far.distance;
    double areaNorm = normalize(target.getPercentArea(), minArea, maxArea);
    return denormalize(areaNorm, minDistance, maxDistance);
}

double AreaCameraDistanceEstimator::normalize(double value, double min, double max)
{
    return (value - min) / (max - min);
}

double AreaCameraDistanceEstimator::denormalize(double value, double min, double max)
{
    return
}

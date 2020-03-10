#ifndef AREACAMERADISTANCEESTIMATOR_H
#define AREACAMERADISTANCEESTIMATOR_H

#include "DistanceEstimator.h"
#include "../targeting/Target.h"


static class AreaDistancePair
{
    public:
        AreaDistancePair(double areaPercentage, double distance)
        {
            this->areaPercentage = areaPercentage;
            this->distance = distance;
        }

        double areaPercentage, distance;
}

class AreaCameraDistanceEstimator : public DistanceEstimator
{
    public:
        /** Default constructor */
        AreaCameraDistanceEstimator(AreaDistancePair close, AreaDistancePair far);

        double getDistance(Target target);
        static double normalize(double value, double min, double max);
        static double denormalize(double value, double min, double max);

        AreaDistancePair getFar() { return far; }
        /** Set far
         * \param val New value to set
         */
        void setFar(AreaDistancePair val) { far = val; }

        AreaDistancePair getClose() { return close; }
        /** Set closee
         * \param val New value to set
         */
        void setClose(AreaDistancePair val) { close = val; }

    protected:

    private:
        AreaDistancePair close, far; //!< Member variable "far", "close"
};

#endif // AREACAMERADISTANCEESTIMATOR_H

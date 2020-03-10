#ifndef CAMERASETTINGS_H
#define CAMERASETTINGS_H
#include "FOV.h"
#include "Resolution.h"

class CameraSettings
{
    public:
        /** Default constructor */
        CameraSettings(boolean inverted, FOV fov, Resolution resolution);

        /** Access inverted
         * \return The current value of inverted
         */
        bool Getinverted() { return inverted; }
        /** Set inverted
         * \param val New value to set
         */
        void Setinverted(bool val) { inverted = val; }
        /** Access resolution
         * \return The current value of resolution
         */
        Resolution Getresolution() { return resolution; }
        /** Set resolution
         * \param val New value to set
         */
        void Setresolution(Resolution val) { resolution = val; }

    protected:

    private:
        bool inverted; //!< Member variable "inverted"
        Resolution resolution; //!< Member variable "resolution"
};

#endif // CAMERASETTINGS_H

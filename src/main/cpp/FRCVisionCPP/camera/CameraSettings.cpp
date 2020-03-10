#include "CameraSettings.h"
#include "FOV.h"
#include "Resolution.h"

CameraSettings::CameraSettings(bool inverted, FOV fov, Resolution resolution)
{
    this->inverted = inverted;
    this->fov = fov;
    this->resolution = resolution;
}

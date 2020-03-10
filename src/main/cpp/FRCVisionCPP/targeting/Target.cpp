#include "Target.h"

Target::Target(double horizontalAngle, double verticalAngle, double percentArea, double skew, cv::RotatedRect boundary)
{
    this->horizontalAngle = horizontalAngle;
    this->verticalAngle = verticalAngle;
    this->percentArea = percentArea;
    this->skew = skew;
    this->boundary = boundary;
}

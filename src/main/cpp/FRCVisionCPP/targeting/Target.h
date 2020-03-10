#ifndef TARGET_H
#define TARGET_H
#include <opencv2/core/core.hpp>

class Target
{
    public:
        /** Default constructor */
        Target(double horizontalAngle, double verticalAngle, double percentArea, double skew, cv::RotatedRect boundary);

        /** Access horizontalAngle
         * \return The current value of horizontalAngle
         */
        double getHorizontalAngle() { return horizontalAngle; }
        /** Access verticalAngle
         * \param val New value to set
         */
        double getVerticalAngle() { return verticalAngle; }

        double getPercentArea() { return percentArea; }

        /** Access skew
         * \return The current value of skew
         */
        double getSkew() { return skew; }

        /** Access boundary
         * \return The current value of boundary
         */
        cv::RotatedRect getBoundary() { return boundary; }

        friend bool operator==(const Target& LTar, const Target& RTar)
        {
            return ((LTar.getHorizontalAngle() == RTar.getHorizontalAngle()) && (LTar.getVerticalAngle() == RTar.getVerticalAngle()) && (LTar.getPercentArea() == RTar.getPercentArea()) && (LTar.getSkew() == RTar.getSkew()) && (LTar.getBoundary() == RTar.getBoundary()));
        }

    private:
        double horizontalAngle; //!< Member variable "horizontalAngle"
        double verticalAngle; //!< Member variable "verticalAngle"
        double percentArea; //!< Member variable "percentArea"
        double skew; //!< Member variable "skew"
        cv::RotatedRect boundary; //!< Member variable "boundary"
};

#endif // TARGET_H

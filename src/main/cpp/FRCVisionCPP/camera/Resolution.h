#ifndef RESOLUTION_H
#define RESOLUTION_H
#include <opencv2/core/mat.hpp>

class Resolution
{
    public:
        /** Default constructor */
        Resolution(int width, int height);

        /** Access width
         * \return The current value of width
         */
        int setWidth() { return width; }
        /** Set width
         * \param val New value to set
         */
        void setWidth(int val) { width = val; }
        /** Access height
         * \return The current value of height
         */
        int getHeight() { return height; }
        /** Set height
         * \param val New value to set
         */
        void setHeight(int val) { height = val; }

        int getArea()
        {
            return height * width;
        }

        Resolution scaleBy(double scale);

        static Resolution fromMat(cv::Mat image);

    private:
        int width; //!< Member variable "width"
        int height; //!< Member variable "height"
};

#endif // RESOLUTION_H

#ifndef STANDARDCONTOURFILTER_H
#define STANDARDCONTOURFILTER_H

#include "ContourFilter.h"

#include <opencv2/core/mat.hpp>
#include <opencv2/core/core.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include "../Range.h"
#include <vector>


class StandardContourFilter : public ContourFilter
{
    public:
        /** Default constructor */
        StandardContourFilter(Range area, Range fullness, Range aspectRatio, double imageArea);

        /** Access area
         * \return The current value of area
         */
        Range Getarea() { return area; }
        /** Set area
         * \param val New value to set
         */
        void Setarea(Range val) { area = val; }
        /** Access fullness
         * \return The current value of fullness
         */
        Range Getfullness() { return fullness; }
        /** Set fullness
         * \param val New value to set
         */
        void Setfullness(Range val) { fullness = val; }
        /** Access aspectRatio
         * \return The current value of aspectRatio
         */
        Range GetaspectRatio() { return aspectRatio; }
        /** Set aspectRatio
         * \param val New value to set
         */
        void SetaspectRatio(Range val) { aspectRatio = val; }
        /** Access imageArea
         * \return The current value of imageArea
         */
        double GetimageArea() { return imageArea; }
        /** Set imageArea
         * \param val New value to set
         */
        void SetimageArea(double val) { imageArea = val; }

        std::vector<cv::Mat1i> filterContours(std::vector<cv::Mat1i> contours);

    private:
        Range area; //!< Member variable "area"
        Range fullness; //!< Member variable "fullness"
        Range aspectRatio; //!< Member variable "aspectRatio"
        double imageArea; //!< Member variable "imageArea"
};

#endif // STANDARDCONTOURFILTER_H

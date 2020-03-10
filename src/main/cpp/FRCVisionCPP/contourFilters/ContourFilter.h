#ifndef CONTOURFILTER_H
#define CONTOURFILTER_H

#include <opencv2/core/mat.hpp>
#include <vector>

class ContourFilter
{
    public:
        virtual std::vector<cv::Mat1i> filterContours(std::vector<cv::Mat1i> contours);
};

#endif // CONTOURFILTER_H

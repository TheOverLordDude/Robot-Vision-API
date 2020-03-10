#ifndef STANDARDCONTOURFINDER_H
#define STANDARDCONTOURFINDER_H

#include "ContourFinder.h"

#include <opencv2/core/mat.hpp>
#include <opencv2/core/core.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <vector>

class StandardContourFinder : public ContourFinder
{
    public:
        StandardContourFinder();
        std::vector<cv::Mat1i> findContours(cv::Mat iamge);
};

#endif // STANDARDCONTOURFINDER_H

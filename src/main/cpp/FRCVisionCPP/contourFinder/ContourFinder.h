#ifndef CONTOURFINDER_H
#define CONTOURFINDER_H

#include <opencv2/core/mat.hpp>
#include <vector>

class ContourFinder
{
    public:
        virtual std::vector<cv::Mat1i> findContours(cv::Mat iamge);
};

#endif // CONTOURFINDER_H

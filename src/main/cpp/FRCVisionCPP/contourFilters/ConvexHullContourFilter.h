#ifndef CONVEXHULLCONTOURFILTER_H
#define CONVEXHULLCONTOURFILTER_H

#include <opencv2/core/mat.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include "../Range.h"
#include <vector>

class ConvexHullContourFilter : public ContourFilter
{
    public:
        ConvexHullContourFilter(double minArea, double minPerimeter, Range width, Range height, Range solidity, Range vertexCount, Range widthToHeightRatio);

        std::vector<cv::Mat1i> filterContours(std::vector<cv::Mat1i> contours);


    private:
        double minArea;
        double minPerimeter;
        Range width;
        Range height;
        Range vertexCount;
        Range solidity;
        Range widthToHeightRatio;
};

#endif // CONVEXHULLCONTOURFILTER_H

#include "ConvexHullContourFilter.h"

#include <opencv2/core/mat.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include "../Range.h"
#include <vector>

ConvexHullContourFilter::ConvexHullContourFilter(double minArea, double minPerimeter, Range width, Range height, Range solidity, Range vertexCount, Range widthToHeightRatio)
{
    this->minArea = minArea;
    this->minPerimeter = minPerimeter;
    this->width = width;
    this->height = height;
    this->solidity = solidity;
    this->vertexCount = vertexCount;
    this->widthToHeightRatio = widthToHeightRatio;
}

std::vector<cv::Mat1i> ConvexHullContourFilter::filterContours(std::vector<cv::Mat1i> contours)
{
    std::vector<cv::Mat1i> output;
    cv::Mat1i hull;
    for(int i  = 0; i < contours.size(); i++)
    {
        cv::Mat1i contour = contours.get(i);
        cv::Rect bb = cv::boundingRect(contour);
        if(!width.inRangeExclusive(bb.width) || !height.inRangeExclusive(bb.height))
        {
            continue;
        }
        double area = cv::contourArea(contour, true);
        if(area< this->minArea || cv::arcLength(cv::Mat2f(contour, true) < this->minPerimeter))
        {
            continue;
        }
        cv::convexHull(contour, hull);
        cv::Mat1i mopHull;
        mopHull.create(hull.size().height, 1, cv::CvType::CV_32SC2);
        for(in j = 0; j < hull.size().height; j++)
        {
            int index = hull.get(j, 0)[0];
            mopHull.put(j, 0, contour.get(index,0)[0], contour.get(index,0)[1]);
        }
        double solid = 100 * area / cv::contourArea(mopHull);
        double ratio = bb.width / bb.height;
        if(!solidity.inRangeExclusive(solid) || !widthToHeightRatio.inRangeExclusive(ratio))
        {
            continue;
        }
        output.push_back(contour);
    }
    return output;
}

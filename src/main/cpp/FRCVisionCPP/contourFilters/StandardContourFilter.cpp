#include "StandardContourFilter.h"

#include <opencv2/core/mat.hpp>
#include <opencv2/core/core.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include "../Range.h"
#include <vector>


StandardContourFilter::StandardContourFilter(Range area, Range fullness, Range aspectRatio, double imageArea)
{
    this->area = area;
    this->fullness = fullness;
    this->aspectRatio = aspectRatio;
    this->imageArea = imageArea;
}

std::vector<cv::Mat1i> StandardContourFilter::filterContours(std::vector<cv::Mat1i> contours)
{
    std::vector<cv::Mat1i> output;
    for(cv::Mat1i contour : contours)
    {
        cv::RotatedRect boundingRect = cv::minAreaRect(Mat2f(contour));
        double rectArea = boundingRect.size.area();
        double targetAreaPercent = rectArea / imageArea * 100;
        double targetAspect = boundingRect.boundingRect().width / boundingRect.boundingRect().height;
        double targetArea = cv::contourArea(contour);
        double targetFullness = targetArea / rectArea * 100;

        if(!this->area.inRangeInclusive(targetAreaPercent) || !this->aspectRatio.inRangeInclusive(targetAspect) || !this->fullness.inRangeInclusive(targetFullness))
        {
            continue;
        }

        output.push_back(contour);
    }
    return output;
}

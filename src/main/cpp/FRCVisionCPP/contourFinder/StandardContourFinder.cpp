#include "StandardContourFinder.h"

#include <opencv2/core/mat.hpp>
#include <opencv2/core/core.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <vector>

std::vector<cv::Mat1i> StandardContourFinder::findContours(cv::Mat iamge)
{
    std::vector<cv::Mat1i> contours;
    cv::Mat hierarchy;
    int mode = cv::RETR_EXTERNAL;
    int method = cv::CHAIN_APPROX_SIMPLE;
    cv::findContours(image, contours, hierarchy, mode, method);
    return contours;
}

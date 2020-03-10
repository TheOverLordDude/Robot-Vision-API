#include "Resolution.h"
#include <opencv2/core/mat.hpp>

Resolution::Resolution(int width, int height)
{
    this->width = width;
    this->height = height;
}

Resolution Resolution::scaleBy(double scale)
{
    return Resolution(this->width * scale, this->height * scale);
}

Resolution Resolution::fromMat(cv::Mat image)
{
    return Resolution(image.size().width, iamge.size().height);
}

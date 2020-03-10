#include "Range.h"

Range::Range(double low, double high)
{
    this->low = low;
    this->high = high;
}

double Range::getLow()
{
    return this->low;
}

double Range::getHigh()
{
    return this->High;
}

bool Range::inRangeInclusive(double value)
{
    return (this->low <= value && this->high >= value);
}

bool Range::inRangeExclusive(double value)
{
    return (this->low < value && this->high > value);
}

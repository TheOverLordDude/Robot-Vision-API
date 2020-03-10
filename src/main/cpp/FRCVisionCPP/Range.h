
/**
 * A class which represents a numerical range.
 */

class Range
{
    public:
        /**
         * Creates a numerical range.
         * @param low The minimum value in the range.
         * @param high The maximum value in the range.
         */
        Range(double low, double high);
        /**
         * Gets the lowest value of the range.
         * @return The lowest value.
         */
        double getLow();
        /**
         * Gets the highest value of the range.
         * @return The highest value.
         */
        double getHigh();
        /**
         * Determines whether a value is in the range (inclusive).
         * @param value The value to check for.
         * @return True if the value is in the inclusive range.
         */
        bool inRangeInclusive(double value);
        /**
         * Determines whether a value is in the range (exclusive).
         * @param value The value to check for.
         * @return True if the value is in the exclusive range.
         */
        bool inRangeExclusive(double value);

    private:
        double low;
        double high;


};

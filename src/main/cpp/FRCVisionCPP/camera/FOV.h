#ifndef FOV_H
#define FOV_H


class FOV
{
    public:
        /** Default constructor */
        FOV(double horizontalDegrees, double verticalDegrees);

        /** Access verticalDegrees
         * \return The current value of verticalDegrees
         */
        double GetverticalDegrees() { return verticalDegrees; }
        /** Set verticalDegrees
         * \param val New value to set
         */
        void SetverticalDegrees(double val) { verticalDegrees = val; }
        /** Access horizontalDegrees
         * \return The current value of horizontalDegrees
         */
        double GethorizontalDegrees() { return horizontalDegrees; }
        /** Set horizontalDegrees
         * \param val New value to set
         */
        void SethorizontalDegrees(double val) { horizontalDegrees = val; }

    private:
        double verticalDegrees; //!< Member variable "verticalDegrees"
        double horizontalDegrees; //!< Member variable "horizontalDegrees"
};

#endif // FOV_H

#ifndef VERSION_H
#define VERSION_H


class Version
{
    private:
        int minorVersion = 1;
        int majorVersion = 0;
        int patchVersion  = 1;

    public:
        Version();
        int getMajorVersion()
        {
            return majorVersion;
        }

        int getMinorVersion()
        {
            return minorVersion;
        }

        int getPatchVersion()
        {
            return patchVersion;
        }
};

#endif // VERSION_H

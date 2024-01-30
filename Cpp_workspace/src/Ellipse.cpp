#include <iostream>

#include <fstream>

#include <cmath>

#include "../headers/Ellipse.h"

using namespace std;

Ellipse ::Ellipse(Point o, Point mMajorRadius, Point mMinorRadius)
{
    mandatory = o;
    this->mMinorRadius = mMinorRadius;
    this->mMajorRadius = mMajorRadius;
}

void Ellipse ::Drawing()
{
    ofstream myFile("../textfile/Ellipse.txt");
    int num_points = 100;
    if (myFile.is_open())
    {
        for (int i = 0; i < num_points; ++i)
        {
            double angleTheta = 2.0 * M_PI * i / num_points;
            double x = mandatory.x() + mMajorRadius.x() * cos(angleTheta);
            double y = mandatory.y() + mMinorRadius.y() * sin(angleTheta);
            myFile << x << " " << y << " " << mMajorRadius.x() << " " << mMinorRadius.y() << std::endl;
        }
        double x = mandatory.x() + mMajorRadius.x() * cos(0);
        double y = mandatory.y() + mMinorRadius.y() * sin(0);
        myFile << x << " " << y << " " << mMajorRadius.x() << " " << mMinorRadius.y() << std::endl;
        myFile.close();
    }
}
// void Ellipse :: AreaofEllipse ()
// {
//     cout<< " Area of Ellipse " << 3.14 * MinorRadius * MajorRadius << endl;
// }

// void Ellipse :: PerimeterofEllipse()
// {
//     cout<< "  Perimeter of  Ellipse " << 3.14 * ( 3 * (MajorRadius + MinorRadius) - sqrt((3 * MajorRadius + MinorRadius) * (MajorRadius + 3 * MinorRadius)));
// }

Ellipse ::~Ellipse()
{
}
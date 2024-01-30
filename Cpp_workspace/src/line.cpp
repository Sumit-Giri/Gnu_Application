#include <iostream>
#include "../headers/Line.h"
#include <cmath>

#include <fstream>

using namespace std;

Line::Line(Point d1, Point d2)
{
    mandatory = d1;
    this->d2 = d2;
}
void Line ::Drawing()
{
    ofstream myFile("../textfile/line.txt");

    myFile << mandatory.x() << " " << mandatory.y() << endl;
    myFile << d2.x() << " " << d2.y() << endl;

    myFile.close();
}
// void Line::lengthofLine()
// {
//     cout << " length Of Given Coordinates " << (sqrt(pow(x2-x1,2)+pow(y2-y1,2)));
// }

Line ::~Line()
{
}
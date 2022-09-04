#include "figure.h"
#include <cmath>
#include <cassert>

class Equilateral_triangle :public Figure{
    double length;
    centerCoordinate triangleCenter;
    circumscribingCoordinates scribeTriangleCoordinates;
    color triangleColor;

public:
    double areaOfATriangle (){
        return length * length * std::sqrt(3) / 4;
    }
    Equilateral_triangle (std::string inColor, double centerX, double centerY, double inLength){
        setColor(triangleColor,inColor);

        triangleCenter.x = centerX;
        triangleCenter.y = centerY;
        length = inLength;
        assert (inLength > 0);
    }
    void  findTheCircumscribingSquare (){
        scribeTriangleCoordinates.x1 = triangleCenter.x - (length/2 + 1);
        scribeTriangleCoordinates.x2 = scribeTriangleCoordinates.x1;
        scribeTriangleCoordinates.x3 = triangleCenter.x + (length/2 + 1);
        scribeTriangleCoordinates.x4 = scribeTriangleCoordinates.x3;

        scribeTriangleCoordinates.y1 = triangleCenter.y - (length/2 + 1);
        scribeTriangleCoordinates.y2 = triangleCenter.y + (length/2 + 1);
        scribeTriangleCoordinates.y3 = scribeTriangleCoordinates.y2;
        scribeTriangleCoordinates.y4 = scribeTriangleCoordinates.y1;
    }
    std::string getTriangleColor (){
        return getColor (triangleColor);
    }


    void getCircumscribingTriangleCoordinates (){return getCircumscribingCoordinates(scribeTriangleCoordinates);}



    ~Equilateral_triangle() = default;
};
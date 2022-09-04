#include "figure.h"
#include <cassert>

class Rectangle:public Figure {
    double width;
    double height;
    centerCoordinate rectangleCenter;
    circumscribingCoordinates scribeRectangleCoordinate;
    color rectangleColor;

public:
    Rectangle (std::string inColor, double centerX, double centerY, double inWidth,double inHeight) {
        assert (inWidth >0);
        assert (inHeight >0);
        setColor(rectangleColor,inColor);

        rectangleCenter.x = centerX;
        rectangleCenter.y = centerY;
        width = inWidth;
        height = inHeight;

    }

    std::string getRectangleColor (){
        return getColor (rectangleColor);
    }

    double areaOfARectangle(){
        return width * height;
    }

    void  findTheCircumscribingSquare (){
        scribeRectangleCoordinate.x1 = rectangleCenter.x - (width/2 + 1);
        scribeRectangleCoordinate.x2 = scribeRectangleCoordinate.x1;
        scribeRectangleCoordinate.x3 = rectangleCenter.x + (width/2 + 1);
        scribeRectangleCoordinate.x4 = scribeRectangleCoordinate.x3;

        scribeRectangleCoordinate.y1 = rectangleCenter.y - (height/2 + 1);
        scribeRectangleCoordinate.y2 = rectangleCenter.y + (height/2 + 1);
        scribeRectangleCoordinate.y3 = scribeRectangleCoordinate.y2;
        scribeRectangleCoordinate.y4 = scribeRectangleCoordinate.y1;
    }


    void getCircumscribingRectangleCoordinates (){return getCircumscribingCoordinates(scribeRectangleCoordinate);}

    ~Rectangle()= default;;
};
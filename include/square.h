#include "figure.h"
#include <cassert>
class Square:public Figure{
    double length;
    centerCoordinate squareCenter;
    circumscribingCoordinates scribeSquareCoordinates;
    color squareColor;
public:
    Square (std::string inColor, double centerX, double centerY, double inLength){

        if (inColor == "red") { squareColor = RED; }
        else if (inColor == "blue") { squareColor = BLUE; }
        else if (inColor == "green") { squareColor = GREEN; }
        else { squareColor = NONE; }

        squareCenter.x = centerX;
        squareCenter.y = centerY;
        length = inLength;
        assert (inLength > 0);
    }

    std::string getSquareColor (){
        return getColor (squareColor);
    }

    void  findTheCircumscribingSquare (){
        scribeSquareCoordinates.x1 = squareCenter.x - (length/2 +1);
        scribeSquareCoordinates.x2 = scribeSquareCoordinates.x1;
        scribeSquareCoordinates.x3 = squareCenter.x + (length/2 +1);
        scribeSquareCoordinates.x4 =  scribeSquareCoordinates.x3;

        scribeSquareCoordinates.y1 = squareCenter.y - (length/2 +1);
        scribeSquareCoordinates.y2 = squareCenter.y + (length/2 +1);
        scribeSquareCoordinates.y3 = scribeSquareCoordinates.y2;
        scribeSquareCoordinates.y4 =  scribeSquareCoordinates.y3;
    }

    double areaOfASquare (){
        return length*length;
    }

    void getCircumscribingSquareCoordinates (){return getCircumscribingCoordinates(scribeSquareCoordinates);}

    ~Square()= default;;
};

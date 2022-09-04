#include "figure.h"
#include <cmath>
#include <cassert>

class Circle:public Figure {
    double radius;
    centerCoordinate circleCenter;
    circumscribingCoordinates scribeCircleCoordinates;
    color circleColor;


public:

    Circle (std::string inColor, double centerX, double centerY, double inRadius){
        assert(inRadius >0);
        if (inColor == "red"){ circleColor = RED; }
        else if (inColor == "blue"){circleColor = BLUE;}
        else if (inColor == "green"){circleColor = GREEN;}
        else {circleColor = NONE;}

        circleCenter.x = centerX;
        circleCenter.y = centerY;
        radius = inRadius;


    }
    std::string getCircleColor (){
        return getColor (circleColor);
    }
   double areaOfACircle (){
      return atan(1) * 4 * radius;
   }




   void  findTheCircumscribingSquare (){
       scribeCircleCoordinates.x1 =  circleCenter.x - (radius+1);
       scribeCircleCoordinates.x3 = circleCenter.x + radius +1;
       scribeCircleCoordinates.x2 = scribeCircleCoordinates.x1;
       scribeCircleCoordinates.x4 = scribeCircleCoordinates.x3;

       scribeCircleCoordinates.y1 = circleCenter.y - (radius+1);
       scribeCircleCoordinates.y3 = circleCenter.y + radius+1;
       scribeCircleCoordinates.y2 = scribeCircleCoordinates.y3;
       scribeCircleCoordinates.y4 = scribeCircleCoordinates.y1;
   }

    void getCircumscribingCircleCoordinates (){return getCircumscribingCoordinates(scribeCircleCoordinates);}

    ~Circle()= default;;
};

#include <iostream>
#pragma once
class Figure {
public:
    struct centerCoordinate {
        double x;
        double y;
    };
    enum color {
        NONE,
        RED,
        GREEN,
        BLUE,
    };
    struct circumscribingCoordinates {
        //point 1
        double x1;
        double y1;
        //point 2
        double x2;
        double y2;
        //point 3
        double x3;
        double y3;
        //point 4
        double x4;
        double y4;
    };
    std::string getColor (color &Clr){
    switch  (Clr){
        case RED : return "Red";
        case GREEN: return "Green";
        case BLUE: return "Blue";
        case NONE: return "None";
    }
    }

    void getCircumscribingCoordinates (circumscribingCoordinates &Coordinates){
        std::cout << "Circumscribing square coordinates : \nPoint1 (" <<Coordinates.x1 << " : "
                  <<Coordinates.y1 << ")\nPoint2 (" <<Coordinates.x2 << " : "
                  <<Coordinates.y2 << ")\nPoint3 (" <<Coordinates.x3 << " : "
                  << Coordinates.y3 << ")\nPoint4 (" <<Coordinates.x4 << " : "
                  << Coordinates.y4 << ")";

    }
};

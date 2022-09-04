#include <iostream>
#include "circle.h"
#include "square.h"
#include "rectangle.h"
#include "equilateral_triangle.h"

int main() {
    std::string cmd;
    std::cout << ": ";
    std::cin>>cmd;

    if (cmd == "circle"){
        std::string color;
        double x, y, radius;
        std::cout << "Enter color of circle: ";
        std::cin >> color;

        std::cout << "Enter center coordinate: ";
        std::cin >> x >> y;

        std::cout << "Enter circle radius: ";
        std::cin >> radius;

        Circle newCircle = *new Circle {color,x,y,radius};

        newCircle.findTheCircumscribingSquare();
        std::cout << "Area of a circle = " << newCircle.areaOfACircle() <<std::endl;
        std::cout << "Color of a circle = " << newCircle.getCircleColor()<<std::endl;
        newCircle.getCircumscribingCircleCoordinates();
    }else if (cmd == "rectangle"){
        std::string color;
        double x, y, width, height;
        std::cout << "Enter color of rectangle: ";
        std::cin >> color;

        std::cout << "Enter center coordinate: ";
        std::cin >> x >> y;

        std::cout << "Enter width and height rectangle: ";
        std::cin >> width >> height;

        Rectangle newRectangle = *new Rectangle {color,x,y,width,height};

        newRectangle.findTheCircumscribingSquare();
        std::cout << "Area of a rectangle = " << newRectangle.areaOfARectangle() <<std::endl;
        std::cout << "Color of a rectangle = " << newRectangle.getRectangleColor()<<std::endl;
        newRectangle.getCircumscribingRectangleCoordinates();
    }else if (cmd == "square"){
        std::string color;
        double x, y, length;
        std::cout << "Enter color of square: ";
        std::cin >> color;

        std::cout << "Enter center coordinate: ";
        std::cin >> x >> y;

        std::cout << "Enter length square: ";
        std::cin >> length;

        Square newSquare = *new Square {color,x,y,length};

        newSquare.findTheCircumscribingSquare();
        std::cout << "Area of a rectangle = " << newSquare.areaOfASquare() <<std::endl;
        std::cout << "Color of a circle = " << newSquare.getSquareColor()<<std::endl;
        newSquare.getCircumscribingSquareCoordinates();

    }else if (cmd == "triangle"){
        std::string color;
        double x, y, length;
        std::cout << "Enter color of equilateral triangle: ";
        std::cin >> color;

        std::cout << "Enter center coordinate: ";
        std::cin >> x >> y;

        std::cout << "Enter length equilateral triangle: ";
        std::cin >> length;

        Equilateral_triangle newTriangle = *new Equilateral_triangle {color,x,y,length};

        newTriangle.findTheCircumscribingSquare();
        std::cout << "Area of a rectangle = " << newTriangle.areaOfATriangle() <<std::endl;
        std::cout << "Color of a circle = " << newTriangle.getTriangleColor()<<std::endl;
        newTriangle.getCircumscribingTriangleCoordinates();
    }else {std::cout << "unidentified figure"<<std::endl;}
}
